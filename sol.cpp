#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Student {
private:
    int age = 0;
    string first_name;
    string last_name;
    int standard = 0;
public:
    int get_age()
    {
        return age;
    }
    void set_age(int age)
    {
        this->age = age;
    }
    void set_first(string first_name)
    {
        this->first_name = first_name;
    }
    void set_last(string last_name)
    {
        this->last_name = last_name;
    }
    string get_first()
    {
        return first_name;
    }
    string get_last()
    {
        return last_name;
    }
    void set_standard(int standard)
    {
        this->standard = standard;
    }
    int get_standard()
    {
        return standard;
    }
    void display()
    {
        cout << get_age() << endl;
        cout << get_last() << ", " << get_first() << endl;
        cout << get_standard() << endl << endl;
        cout << get_age() << "," << get_first() << "," << get_last() << "," << get_standard() << endl;
    }

};

int main() {
    int age = 0;
    int stand = 0;
    string first;
    string last;
    cin >> age;
    cin >> first;
    cin >> last;
    cin >> stand;
    Student obj;
    obj.set_age(age);
    obj.set_first(first);
    obj.set_last(last);
    obj.set_standard(stand);
    obj.display();

    return 0;
}
