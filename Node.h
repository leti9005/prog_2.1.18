#ifndef MAIN_ELEMENT_H
#define MAIN_ELEMENT_H

//#include <iostream>
//
template <typename T>
class Node {
	public:
		Node *pNext;
		T value;

		Node(T value, Node<T> *pNext = nullptr) {
			this->value = value;
			this->pNext = pNext;
		};
};


#endif
