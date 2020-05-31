#ifndef MAIN_LIST_H
#define MAIN_LIST_H

#include <iostream>

#include "Node.h"

template <typename T>
class List {
	public:
		List() {};


		void push(T data) {
			if (this->head == nullptr) {
				this->head = new Node<T>(data);
				this->end = this->head;
			} else {
				Node<T> *current = this->end;

				current->pNext = new Node<T>(data);
				this->end = current->pNext;
			}

			this->size++;
		};


		T getElement(int index, bool node = false) {
			Node<T> *current = this->head;

			int counter = 0;

			while (current != nullptr) {
				if (counter == index) {
					return current->value;
				}

				current = current->pNext;
				counter++;
			}
		}


		int getSize() {
			return this->size;
		};


		void sort() {
			Node<T> *ptr1;
			Node<T> *lptr = nullptr;

			if (this->size == 0) {
				return;
			}

			int swapped;

			do {
				swapped = 0;
				ptr1 = this->head;

				while (ptr1->pNext != lptr) {
					float firstRatio = ptr1->value.lettersRatio(), secondRatio = ptr1->pNext->value.lettersRatio();

					if (ptr1->value > ptr1->pNext->value) {
						swap(ptr1, ptr1->pNext);
						swapped = 1;
					}

					ptr1 = ptr1->pNext;
				}

				lptr = ptr1;
			} while (swapped);
		}


		void swap(Node<T> *a, Node<T> *b) {
			T temp = a->value;
			a->value = b->value;
			b->value = temp;
		}

private:
		int size = 0;
		Node<T> *head = nullptr;
		Node<T> *end = nullptr;
};


#endif //MAIN_LIST_H
