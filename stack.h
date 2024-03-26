#include <iostream>
#include "StackEmptyException.h"
#pragma once

template<class data_type>
class stack
{
	struct Node {
		data_type value;
		Node* link;
	};
private:
	int size_of_stack;
	Node* top_element;

public:
	stack();
	bool empty();
	void push(data_type element);
	void pop();
	data_type top();
	int size();
};

template<class data_type> stack<data_type>::stack() {
	size_of_stack = 0;
	top_element = 0;
}

template<class data_type> bool stack<data_type>::empty() {
	if (top_element== 0)return true;
	else return false;
}

template<class data_type> void stack<data_type>::push(data_type element) {
	Node* new_element = new Node();
	new_element->value = element;
	new_element->link = top_element;
	top_element = new_element;
	size_of_stack++;
}

template<class data_type> void stack<data_type>::pop() throw(StackEmptyException) {
	try {
		if (empty()) throw StackEmptyException("The stack is empty!");
		Node* temp = top_element;
		top_element = top_element->link;
		delete(temp);
		size_of_stack--;
	}
	catch (StackEmptyException e) {
		cout << e.getMSG() << '\n';
	}
}

template<class data_type> data_type stack<data_type>::top() throw(StackEmptyException) {
	try {
		if (empty()) throw StackEmptyException("The Stack is empty!");
		return top_element->value;
	}
	catch (StackEmptyException e) {
		cout << e.getMSG() << '\n';
	}
}

template<class data_type> int stack<data_type>::size() {
	return size_of_stack;
}