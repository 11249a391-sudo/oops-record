#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    Student(string n, int a) {
        name = n;
        age = a;
    }

    Student(const Student &s) {
        cout << "Copy constructor called!" << endl;
        name = s.name;
        age = s.age;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1("Alice", 20); 
    Student s2 = s1;          

    s1.display();
    s2.display();

    return 0;
}
