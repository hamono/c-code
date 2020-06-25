#pragma once
template<typename T>
class Node
{
public:
	Node* next;
	T item;
	Node();
	Node(T parameter);
	~Node();
};

template<typename T>
inline Node<T>::Node()
{
}

template<typename T>
inline Node<T>::Node(T parameter)
{
	item = parameter;
}

template<typename T>
inline Node<T>::~Node()
{
}
