#include <iostream>
using namespace std;

class Employee {
private:
    float basicPay;
    float da;
    float hra;
    float grossSalary;
    float tax;
    float netSalary;

public:
    void inputBasicPay() {
        cout << "Enter basic pay: ";
        cin >> basicPay;
    }

    void calculatePayslip() {
        da = basicPay * 0.70f;             // 70% of basic pay
        hra = basicPay * 0.10f;            // 10% of basic pay
        grossSalary = basicPay + da + hra; // sum of basic, da and hra
        tax = grossSalary * 0.20f;         // 20% tax
        netSalary = grossSalary - tax;     // gross salary after tax deduction
    }

    void displayPayslip() {
        cout << "\n--- Employee Payslip ---" << endl;
        cout << "Basic Pay    : $" << basicPay << endl;
        cout << "DA (70%)     : $" << da << endl;
        cout << "HRA (10%)    : $" << hra << endl;
        cout << "Gross Salary : $" << grossSalary << endl;
        cout << "Tax (20%)    : $" << tax << endl;
        cout << "Net Salary   : $" << netSalary << endl;
    }
};

int main() {
    Employee emp;

    emp.inputBasicPay();
    emp.calculatePayslip();
    emp.displayPayslip();

    return 0;
}