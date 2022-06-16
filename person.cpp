#include <iostream>
#include <cstring>
#include "person.h"

Person::Person(){
	m_name = "Temp Name";
}

Person::Person(std::string name, int birthyear, int sex){
	m_name = name;
	m_birthyear = birthyear;
	setAge();
	m_sex = sex;
}

Person::~Person(){
	std::cout << "Bye~ " << m_name << std::endl;
}

void Person::say() const {
	std::cout << "Hello, I am " << m_name << ", " << m_age << " years old." << std::endl;
}