// Find if character is vowel or consonent using switch statement in functions.
#include <iostream>
using namespace std;
void func()
{
    char alpha;
    cout << "Enter a character (a,e,i,o,u) or (A,E,I,O,U): ";
    cin >> alpha;
    switch (alpha)
    {
        case 'a':
        cout << "a is an Lower case vowel"; break;
        case 'A':
        cout << "A is an Upper case vowel"; break;
        case 'e':
        cout << "e is an Lower case vowel"; break;
        case 'E':
        cout << "E is an Upper case vowel"; break;  
        case 'i':
        cout << "i is an Lower case vowel"; break;
        case 'I':
        cout << "I is an Upper case vowel"; break;
        case 'o':
        cout << "o is an Lower case vowel"; break;
        case 'O':
        cout << "O is an Upper case vowel"; break;
        case 'u':
        cout << "u is an Lower case vowel"; break;
        case 'U':
        cout << "U is an Upper case vowel"; break;
        default:
        cout << "It is a Consonant"; break;  
    }
}
int main() {
    func();
}