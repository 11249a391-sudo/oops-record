#include <iostream>
using namespace std;

class Sample {
    int a;

public:
    Sample(int x = 0) {
        a = x;
    }

    void display() {
        cout << "Value of a: " << a << endl;
    }

    int add(int x, int y) {
        return x + y;
    }

    Sample add(Sample s) {
        Sample temp;
        temp.a = a + s.a;
        return temp;
    }
};

int main() {
    Sample s1(10), s2(20), s3;

    cout << "Adding integers using function overloading: " 
         << s1.add(5, 15) << endl;

    s3 = s1.add(s2);
    cout << "Adding objects using function overloading: ";
    s3.display();

    return 0;
}
