#include <cstdlib>
#include "queue.h"

void Customer::set(int arrive) {
	this->ptime = std::rand() % 3 + 1;
	this->arrive = arrive;
}

Queue::Queue(int s) : size(s) {
	this->front = 0;
	this->rear = 0;
	this->items = 0; 
}
Queue::~Queue() {}
bool Queue::empty() const {
	return this->items == 0;
}
bool Queue::full() const {
	return this->items == this->size;
}
int Queue::get_count() const {
	return this->items;
}
bool Queue::enqueue(const Item &item) {
	if(this->full())
		return false;
	Node *add = new Node;
	add->item = item;
	add->next = 0;
	this->items++;
	if(this->front == 0)  // if the queue is empy
		this->front = add;
	else
		this->rear->next = add;
	this->rear = add;
	return true;
}
bool Queue::dequeue(Item &item) {
	if(this->front == 0)
		return false;
	item = this->front->item;
	this->items--;
	Node *temp = this->front;
	this->front = this->front->next;
	delete temp;
	if(this->items == 0)
		rear = 0;
	return true;
}