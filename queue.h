#ifndef QUEUE
#define QUEUE

class Customer {
private:
	int arrive;
	int ptime;
public:
	Customer() {
		arrive = 0;
		ptime = 0;
	}

	void set(int arrive);
	int get_arrive() {
		return arrive;
	}
	int get_ptime() {
		return ptime;
	}

};

typedef Customer Item;

class Queue {
private:
	struct Node {
		Item item;
		struct Node *next;
	};
	enum {SIZE = 10};

	Node *front;
	Node *rear;
	int items;
	const int size;

	Queue(const Queue &q): size(0) {}
	Queue & operator=(const Queue &q) {return *this;}

public:
	Queue(int s = SIZE);
	~Queue();
	bool empty() const;
	bool full() const;
	int get_count() const;
	bool enqueue(const Item &item);
	bool dequeue(Item &item);
};

#endif