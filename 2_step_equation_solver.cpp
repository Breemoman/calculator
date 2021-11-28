#include <iostream>
#include <string>
using namespace std;
int main_function(string op,int equals, int second_number, int number_multiplied_by_x) {
    int x;
    const string operators[4] = {"+", "-", "*", "/"};
    if (op == operators[0]) {
        x = (equals - second_number)/number_multiplied_by_x;
        return x;
    }
    else if (op == operators[1]) {
        x = (equals + second_number)/number_multiplied_by_x;
        return x;
    }
    else if (op == operators[2]) {
        x = (equals / second_number)/number_multiplied_by_x;
        return x;
    }
    else if (op == operators[3]) {
        x = (equals * second_number)/number_multiplied_by_x;
        return x;
    }
    else {
        cout << "invalid operator";
    }
}


int main() {
    // 2 step equation solver
    int equals;
    int second_number;
    int number_multiplied_by_x;
    string op;
    cout << "welcome to my 2 step calculator solver" << endl;
    cout << "enter the equation" << endl;
    cout << "here is an example of an euation" << endl;
    cout << "4x + 15 = 23" << endl;
    cout << "you are required to enter 4 elements for this to work: equals, number multiplied by x, second number and operator" << endl;
    cout << "you might ask, what are those?" << endl;
    cout << "the equals is the number after equal sign, the number multiplied by x is the 4 before the x, second number is the well... second number, and the operator is the + sign or any calculation sign" << endl;
    cout << "ok, enter the equals: " << endl;
    cin >> equals;
    cout << "enter number multiplied by x: " << endl;
    cin >> number_multiplied_by_x;
    cout << "enter second number: " << endl;
    cin >> second_number;
    cout << "finally enter the operator: " << endl;
    cin >> op;
    cout << "x is equals to  " << main_function(op, equals, second_number, number_multiplied_by_x);
    return 0;
}
