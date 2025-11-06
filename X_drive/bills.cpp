#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class ElectricityBill {
private:
    int consumerNo;
    string consumerName;
    int prevReading;
    int currReading;
    string connectionType;
    double billAmount;

public:
    void getInput() {
        cout << "Enter Consumer Number: ";
        cin >> consumerNo;
        cin.ignore(); // To handle leftover newline character

        cout << "Enter Consumer Name: ";
        getline(cin, consumerName);

        cout << "Enter Previous Month Reading: ";
        cin >> prevReading;

        cout << "Enter Current Month Reading: ";
        cin >> currReading;

        cout << "Enter Connection Type (Domestic/Commercial): ";
        cin >> connectionType;
    }

    void calculateBill() {
        int units = currReading - prevReading;
        billAmount = 0;

        if (connectionType == "Domestic" || connectionType == "domestic") {
            if (units <= 100)
                billAmount = units * 1.0;
            else if (units <= 200)
                billAmount = 100 * 1.0 + (units - 100) * 2.5;
            else if (units <= 500)
                billAmount = 100 * 1.0 + 100 * 2.5 + (units - 200) * 4.0;
            else
                billAmount = 100 * 1.0 + 100 * 2.5 + 300 * 4.0 + (units - 500) * 6.0;
        }
        else if (connectionType == "Commercial" || connectionType == "commercial") {
            if (units <= 100)
                billAmount = units * 2.0;
            else if (units <= 200)
                billAmount = 100 * 2.0 + (units - 100) * 4.5;
            else if (units <= 500)
                billAmount = 100 * 2.0 + 100 * 4.5 + (units - 200) * 6.0;
            else
                billAmount = 100 * 2.0 + 100 * 4.5 + 300 * 6.0 + (units - 500) * 7.0;
        }
        else {
            cout << "Invalid connection type entered!" << endl;
            billAmount = 0;
        }
    }

    void displayBill() const {
        cout << "\n----- Electricity Bill -----\n";
        cout << "Consumer Number : " << consumerNo << endl;
        cout << "Consumer Name   : " << consumerName << endl;
        cout << "Connection Type : " << connectionType << endl;
        cout << "Previous Reading: " << prevReading << endl;
        cout << "Current Reading : " << currReading << endl;
        cout << "Units Consumed  : " << currReading - prevReading << endl;
        cout << fixed << setprecision(2);
        cout << "Total Bill Amount: Rs. " << billAmount << endl;
    }
};

int main() {
    ElectricityBill bill;

    bill.getInput();
    bill.calculateBill();
    bill.displayBill();

    return 0;
}
