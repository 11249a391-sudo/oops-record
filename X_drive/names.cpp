#include <iostream>
using namespace std;

class student {
     // private data members
     int id;
    string name;
    int age;

public:
    // Member function to set student details
    void setDetails(int i, string n,int a)
    {
        id = i;
        name = n;
        age = a;
    }
    
    // Member funtion to set student details
    void displayData() {
        cout <<"student id: " << id << endl;
        cout <<"student name: "<< name << endl;
        cout <<"student age: "<< age << endl;
    }
};

int main() {
    student s1; // create object of student class

    // set details for student s1
    s1.setDetails(101,"uday kiran",21);

    //Display student details
    s1.displayData();

    return 0;
}
