// Find if number is positive or negative, even or odd using functions.
#include <iostream>
using namespace std;
void func1() {
    int num;
    cout << "Enter a number: "; cin >> num;
    if (num %2 == 0) {
        cout << "Number is positive." << endl;
    }
    else {
        cout << "Number is negative." << endl;
    }
}
void func2() {
    int num;
    cout << "Enter a number: "; cin >> num;
    if (num >= 0) {
        cout << "Number is even." << endl;
    }
    else {
        cout << "Number is odd." << endl;
    }
}
int main() {
    func1();
    func2();
    return 0;
}