//Perform arithemetic operations using functions
#include <iostream>
using namespace std;
void sum() {
    int num1, num2;
    cout << "Enter two numbers: "; cin >> num1 >> num2;
    int sum = num1 + num2;
    cout << "Sum of two numbers is: " << sum << endl;
}
void sub() {
    int num1, num2;
    cout << "Enter two numbers: "; cin >> num1 >> num2;
    int minus = num1 - num2;
    cout << "Subtraction of two numbers is: " << minus << endl;
}
void prod() {
    int num1, num2;
    cout << "Enter two numbers: "; cin >> num1 >> num2;
    int product = num1 * num2;
    cout << "Product of two numbers is: " << product << endl;
}
void div() {
    float num1, num2;
    cout << "Enter two numbers: "; cin >> num1 >> num2;
    float division = num1 / num2;
    cout << "Division of two numbers is: " << division;
}
int main() {
    sum();
    sub();
    prod();
    div();
    return 0;
}