#ifndef WORKERML
#define WORKERML

#include <string>

class Worker {
private:
	std::string name;
	long id;

protected:
	virtual void data() const;  // 用来输出基类的成员数据，虚函数，子类可以重写
	virtual void get();  // 用来设置基类的成员数据值

public:
	Worker() : name("NullName"), id(0L) {}
	Worker(const std::string &s, long n) : name(s), id(n) {}
	virtual ~Worker() = 0;  // 纯虚函数，使Worker类成为抽象类，且此方法为纯虚析构函数
	virtual void set() = 0;  // 子类需要重写这两个方法才能实例化，否则任然为抽象类
	virtual void show() const = 0;  // 展示当前对象的成员数据
};


// 虚基类继承，用于实现多继承
class Waiter : virtual public Worker {
private:
	int panache;

protected:
	void data() const;  // 重写这两个虚函数，这里是输出子对象的成员数据
	void get();  // 设置子对象的成员数据

public:
	Waiter() : Worker(), panache(0) {}
	Waiter(const std::string &s, long n, int p = 0) : Worker(s, n), panache(p) {}
	Waiter(const Worker &w, int p = 0) : Worker(w), panache(p) {}
	~Waiter() {}
	void set();  // 需要重新声明，才能重写这两个纯虚函数，使Waiter类可以实例化，这里省略了virtual关键字
				 // 需要调用基类的设置成员数据的函数，再设置子对象的成员数据
	void show() const;  // 先先调用基类的输出函数，再输出子对象的成员数据
};


// 虚基类继承，用于实现多继承
// 函数注释和Waiter类似
class Singer : virtual public Worker {
protected:
	enum {other, alto, con, sop, bass, bar, ten};
	enum {Vtypes = 7};
	void data() const;
	void get();

private:
	static const char *pv[Vtypes];
	int voice;

public:
	Singer() : Worker(), voice(other) {}
	Singer(const std::string &s, long n, int v = other) : Worker(s, n), voice(v) {}
	Singer(const Worker &w, int v = other) : Worker(w), voice(v) {}
	~Singer() {}
	void set();
	void show() const;
};


// 多继承
// Waiter继承自Worker
// Singer继承自Worker
// SW继承自Waiter和Singer
// 即SW含有Worker的成员数据、Waiter的子对象成员数据、Singer的子对象的成员数据
class SW : public Singer, public Waiter {
private:

protected:
	void data() const;  // 输出waiter和singer子对象成员数据
	void get();  // 设置waiter和singer子对象成员数据

public:
	SW() {}
	SW(const std::string &s, long n, int p = 0, int v = other) : Worker(s, n), Waiter(s, n, p), Singer(s, n, v) {}
	SW(const Worker &w, int p = 0, int v = other) : Worker(w), Waiter(w, p), Singer(w, v) {}
	SW(const Waiter &w, int v = other) : Worker(w), Waiter(w), Singer(w, v) {}
	SW(const Singer &s, int p = 0) : Worker(s), Singer(s), Waiter(s, p) {}
	~SW() {}
	void set();  // 先调用worker的设置函数，再调用当前类的设置部分（即包含设置waiter和singer子对象成员数据）
	void show() const;  // 先调用worker的data函数，输出worker的数据，再调用当前类的data输出waiter和singer子对象成员数据
};

#endif