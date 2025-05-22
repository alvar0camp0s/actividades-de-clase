#include <iostream>
using namespace std;

int main() {
    int option;
    float salary = 0;
    float isssDeduction = 0;
    float afpDeduction = 0;
    float rentDeduction = 0;
    float salaryAfterDeductions = 0;

    const float isss = 0.03;
    const float afp = 0.0725;

    cout << "-----------------**Welcome to the Program**-----------------" << endl;

    cout << "What would you like to do?" << endl;
    cout << "1. Calculate your health insurance (ISSS)" << endl;
    cout << "2. Calculate your pension deduction (AFP)" << endl;
    cout << "3. Calculate your income tax" << endl;
    cout << "4. Calculate all deductions" << endl;
    cin >> option;

    cout << "Please enter your salary: ";
    cin >> salary;

    switch(option) {
        case 1:
            isssDeduction = salary * isss;
            if (salary >= 1000 && isssDeduction > 30) {
                isssDeduction = 30;
            }
            cout << "Your ISSS deduction is: $" << isssDeduction << endl;
            break;

        case 2:
            afpDeduction = salary * afp;
            cout << "Your AFP pension deduction is: $" << afpDeduction << endl;
            break;

        case 3:
            // Calculate ISSS
            isssDeduction = salary * isss;
            if (salary >= 1000 && isssDeduction > 30) {
                isssDeduction = 30;
            }

            // Calculate AFP
            afpDeduction = salary * afp;

            // Calculate net salary
            salaryAfterDeductions = salary - (isssDeduction + afpDeduction);

            // Calculate Rent
            if (salaryAfterDeductions >= 473 && salaryAfterDeductions <= 895.24) {
                rentDeduction = salaryAfterDeductions * 0.10;
            } else if (salaryAfterDeductions >= 895.25 && salaryAfterDeductions <= 2038.10) {
                rentDeduction = salaryAfterDeductions * 0.20;
            } else if (salaryAfterDeductions > 2038.10) {
                rentDeduction = salaryAfterDeductions * 0.30;
            }

            cout << "Your income tax deduction is: $" << rentDeduction << endl;
            break;

        case 4:
            // Calculate ISSS
            isssDeduction = salary * isss;
            if (salary >= 1000 && isssDeduction > 30) {
                isssDeduction = 30;
            }
            cout << "ISSS Deduction: $" << isssDeduction << endl;

            // Calculate AFP
            afpDeduction = salary * afp;
            cout << "AFP Deduction: $" << afpDeduction << endl;

            // Calculate net salary
            salaryAfterDeductions = salary - (isssDeduction + afpDeduction);

            // Calculate Rent
            if (salaryAfterDeductions >= 473 && salaryAfterDeductions <= 895.24) {
                rentDeduction = salaryAfterDeductions * 0.10;
            } else if (salaryAfterDeductions >= 895.25 && salaryAfterDeductions <= 2038.10) {
                rentDeduction = salaryAfterDeductions * 0.20;
            } else if (salaryAfterDeductions > 2038.10) {
                rentDeduction = salaryAfterDeductions * 0.30;
            } else {
                rentDeduction = 0;
            }

            cout << "Income Tax Deduction: $" << rentDeduction << endl;
            cout << "Total Salary After Deductions: $" 
                 << salary - (isssDeduction + afpDeduction + rentDeduction) << endl;
            break;

        default:
            cout << "Invalid option selected." << endl;
    }

    return 0;
}
