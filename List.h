#ifndef MAIN_LIST_H
#define MAIN_LIST_H

#include <iostream>

#include "Node.h"

//template <typename T>
class List {
	public:
		List() {};
		void push(int data);
		int getSize();

	private:
		int size = 0;
//		Node<T> *head = nullptr;
};


#endif //MAIN_LIST_H
