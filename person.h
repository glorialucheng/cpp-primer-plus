#include <cstring>
class Person{
	private:
		std::string m_name;
		int m_birthyear;
		int m_age;
		int m_sex;
		void setAge(){m_age = 2022 - m_birthyear;}
	public:
		Person();
		Person(std::string name, int birthyear = 2000, int sex = 1);
		~Person();
		void say() const;
};