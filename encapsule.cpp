#include<iostream>
using namespace std;
class person {
private:
	string name;
	int age;
public:
	void setname(string n)
	{
		name = n;
	}
	void setage(int age)
	{
		this->age = age;
	}
	void display()
	{
		cout << name << endl;
		cout << age << endl;
	}

};
int main()
{
	string name;
	int age;
	cout << "what is the name " << endl;
	cin >> name;
	cout << "what is the age" << endl;
	cin >> age;
	person obj;
	obj.setage(age);
	obj.setname(name);
	obj.display();
}