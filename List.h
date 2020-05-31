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
			} else {

			}

			this->size++;
		};

		int getSize() {
			return this->size;
		};

	private:
		int size = 0;
		Node<T> *head = nullptr;
};


#endif //MAIN_LIST_H
