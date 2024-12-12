// Take integer from user and print corresponding day using switch statement in functions.
#include <iostream>
using namespace std;
void func() {
    int num;
    cout << "Enter a number (1 to 7): "; cin >> num;
    switch (num) {
        case 1:
        cout << "Monday"; break;
        case 2:
        cout << "Tuesday"; break;
        case 3:
        cout << "Wednesday"; break;
        case 4:
        cout << "Thursday"; break;
        case 5:
        cout << "Friday"; break;
        case 6:
        cout << "Saturday"; break;
        case 7:
        cout << "Sunday"; break;
        default:
        cout << "Invalid Input. Please enter a number between 1 to 7.";
    }
}
int main() {
    func();
    return 0;
}