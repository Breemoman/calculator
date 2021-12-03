#include <iostream>
#include <string>
using namespace std;

int main() {

    int first_number, second_number;
    char op;
    cout << "enter first number: " << endl;
    cin >> first_number;

    cout << "enter second number: " << endl;
    cin >> second_number;

    cout << "enter operator: " << endl;
    cin >> op;

    switch(op){
        case '+':
            cout << first_number + second_number << endl;
            break;

        case '-':
            cout << first_number - second_number << endl;
            break;

        case '*':
            cout << first_number * second_number << endl;
            break;

        case '/':
            cout << first_number / second_number << endl;
            break;

        default:
            cout << "invalid operator" << endl;
            break;
    }
    return EXIT_SUCCESS;
}