#include <iostream>
using namespace std;


class Box {
private:
    double length;
    double breadth;
    double height;

public:
    Box(double l = 1.0, double b = 1.0, double h = 1.0) {
        length = l;
        breadth = b;
        height = h;
    }

    double volume() const {
        return length * breadth * height;
    }

    void display() const {
        cout << "Length: " << length 
             << ", Breadth: " << breadth 
             << ", Height: " << height << endl;
    }

    friend void compareBoxes(Box b1, Box b2); 
    friend void showDoubleVolume(const Box &b);
};

void compareBoxes(Box b1, Box b2) {
    cout << "\nComparing Boxes (passed by value):" << endl;
    if (b1.volume() > b2.volume())
        cout << "Box 1 is larger.\n";
    else if (b1.volume() < b2.volume())
        cout << "Box 2 is larger.\n";
    else
        cout << "Both boxes are of the same size.\n";
}

void showDoubleVolume(const Box &b) {
    cout << "\nBox volume (original): " << b.volume() << endl;
    cout << "Double volume (calculated): " << 2 * b.volume() << endl;
}

int main() {
    Box box1(3.5, 2.0, 1.5);
    Box box2(2.0, 3.0, 3.0);

    cout << "Box 1 details:\n";
    box1.display();
    cout << "Box 2 details:\n";
    box2.display();

    compareBoxes(box1, box2);
    showDoubleVolume(box1);

    return 0;
}
