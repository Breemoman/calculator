#include <iostream>
#include <string>
using namespace std;
int main() {
    int first_number, second_number;
    
    string op;
    cout << "enter first number: " << endl;
    cin >> first_number;
    cout << "enter second number: " << endl;
    cin >> second_number;
    cout << "enter operator: " << endl;
    cin >> op;
    if (op == "+") {cout << first_number + second_number;}
    else if (op == "-") {cout << first_number - second_number;}
    else if (op == "*") {cout << first_number * second_number;}
    else if (op == "/") {cout << first_number / second_number;}
    else cout << "invalid operator" << endl;
    return 0;
}
