#ifndef MAIN_ELEMENT_H
#define MAIN_ELEMENT_H

template <class T>
class Node {
	public:
		Node *pNext;
		T value;

		Node(T& value, Node<T> *pNext = nullptr) {
			this->value = value;
			this->pNext = pNext;
		};
};


#endif
