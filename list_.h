#pragma once
#include <iostream>
using namespace std;

template<class T>
struct elem {
	T obj;
	elem<T>*next;
	elem<T>*prev;
};

template<class T>
class list_ {
	elem<T> *head;
	elem<T> *tail;
	size_t size_;
public:
	list_();
	void push_back(const T& obj);
	void push_front(const T& obj);
	void pop_back();
	void pop_front();
	void insert(size_t pos, const T& obj);
	void erase(size_t pos);
	size_t size()const;
	const T& getElement(size_t pos)const;

	//
	list_(const list_<T>& right);
	list_(list_<T>&& right);
	list_<T>& operator=(const list_<T>& right);
	list_<T>& operator=(list_<T>&& right);
	~list_();

	template<class T>
	friend ostream & operator<< (ostream &os, const list_<T>& l);

};

template<class T>
inline list_<T>::list_()
{
	head = tail = nullptr;
	size_ = 0;
}

template<class T>
inline void list_<T>::push_back(const T & obj)
{
	elem<T> *tmp = new elem<T>;
	tmp->obj = obj;
	tmp->next = nullptr;
	tmp->prev = this->tail;
	if (this->tail == nullptr)
		this->tail = this->head = tmp;
	else {
		this->tail->next = tmp;
		this->tail = tmp;
	}
	size_++;
}

template<class T>
inline void list_<T>::push_front(const T & obj)
{
	elem<T> *tmp = new elem<T>;
	tmp->obj = obj;
	tmp->next = this->head;
	tmp->prev = nullptr;
	if (this->head == nullptr)
		this->head = this->tail = tmp;
	else{
		this->head->prev = tmp;
		this->head = tmp;
	}
	size_++;
}

template<class T>
inline void list_<T>::pop_back()
{
	if (this->size_ == 0)
		return;
	if (this->head == this->tail) {
		delete this->head; 
		this->head = this->tail = nullptr;
		this->size_ = 0;
		return;
	}
	this->tail = this->tail->prev;
	delete this->tail->next;
	this->tail->next = nullptr;
	this->size_--;
}

template<class T>
inline void list_<T>::pop_front()
{
	if (this->size_ == 0)
		return;
	if (this->head == this->tail) {
		delete this->head;
		this->head = this->tail = nullptr;
		this->size_ = 0;
		return;
	}
	this->head = this->head->next;
	delete this->head->prev;
	this->head->prev = nullptr;
	this->size_--;
}

template<class T>
inline void list_<T>::insert(size_t pos, const T & obj)
{
	if (pos > size_)
		return;
	if (pos == size_) {
		push_back(obj);
		return;
	}
	if (pos == 0) {
		push_front(obj);
		return;
	}
	elem<T> *flag;
	elem<T> *n = new elem<T>;
	n->obj = obj;
	if (pos < size_ / 2) {
		flag = head;
		for (size_t i = 0; i < pos-1; i++)
		{
			flag=flag->next;
		}
		n->prev = flag;
		flag->next->prev = n;
		n->next = flag->next;
		flag->next = n;

	}
	else {
		flag = tail;
		for (size_t i = size_-1; i > pos-1; i--)
		{
			flag = flag->prev;
		}
		n->next = flag->next;
		flag->next->prev = n;
		flag->next = n;
		n->prev = flag;
	}
	size_++;
}

template<class T>
inline void list_<T>::erase(size_t pos)
{
	if (pos <= size_)
		return;
	if (pos == size_) {
		pop_back();
		return;
	}
	if (size_ == 0) {
		pop_front();
		return;
	}
	elem<T> *flag;
	if (pos < size_ / 2) {
		flag = head;
		for (size_t i = 0; i < pos - 1; i++)
		{
			flag = flag->next;
		}
		flag->prev->next = flag->next;
		flag->next->prev = flag->prev;
	}
	else {
		flag = tail;
		for (size_t i = size_; i > pos - 1; i--)
		{
			flag = flag->prev;
		}
		flag->next->prev = flag->prev;
		flag->prev->next = flag->next;
		delete flag;
	}
	size_--;
}

template<class T>
inline size_t list_<T>::size() const
{
	return this->size_;
}

template<class T>
inline const T & list_<T>::getElement(size_t pos) const
{
	if (pos < 0 || pos >= this->size_)
		cout << "no" << endl;
	else
	{
		if (pos == 0)
			return this->head->obj;

		elem<T> *tmp = head;
		for (size_t i = 0; i < pos; i++)
		{
			tmp = tmp->next;
		}
		return tmp->obj;
	}
}

template<class T>
inline list_<T>::list_(const list_<T>& right)
{
	if (right.head == nullptr) {
		this->head = nullptr;
		this->tail = nullptr;
		this->size_ = 0;
		return;
	}
	elem<T> *tmp = right.head;
	while (tmp != nullptr) {
		push_back(tmp->obj);
		tmp = tmp->next;
	}
}

template<class T>
inline list_<T>::list_(list_<T>&& right)
{
	this->head = nullptr;
	this->size_ = 0;
	swap(this->tail, right.tail);
	swap(this->head, right.head);
	swap(this->size_, right.size_);
}

template<class T>
inline list_<T>& list_<T>::operator=(const list_<T>& right)
{
	if (right.head == nullptr)
		return *this;
	~list_();
	if (right.head == nullptr) {
		this->head = nullptr;
		this->tail = nullptr;
		this->size_ = 0;
		return *this;
	}
	elem<T> *tmp = right.head;
	while (tmp != nullptr) {
		push_back(tmp->obj);
		tmp = tmp->next;
	}this->size_ = right.size_;
	return *this;
	// TODO: вставьте здесь оператор return
}

template<class T>
inline list_<T>& list_<T>::operator=(list_<T>&& right)
{
	swap(this->tail, right.tail);
	swap(this->head, right.head);
	swap(this->size_, right.size_);
	return *this;
	// TODO: вставьте здесь оператор return
}

template<class T>
inline list_<T>::~list_()
{
	while (tail != nullptr)
		pop_back();
}

template<class T>
inline ostream & operator<<(ostream & os, const list_<T>& l)
{
	elem<T>*tmp = l.head;
	for (size_t i = 0; i < l.size_; i++)
	{
		os << tmp->obj << " ";
		tmp = tmp->next;
	}
	return os;
}
