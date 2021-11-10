#include <iostream>
#include <string>
using namespace std;

class calc {
public:
    unsigned long int first_number;
    unsigned long int second_number;
public:
    int add(int number_1, int number_2) {
        return number_1 + number_2;
    }
public:
    int subtract(int number_one, int number_two) {
        return number_one - number_two;
    }
public:
    int multiply(int number1, int number2) {
        return number1 * number2;
    }
public:
    int divide(int numberone, int numbertwo) {
        return numberone / numbertwo;
    }
};

int main()
{
    calc calculator;
    string op;
    string add = "+";
    string subtract = "-";
    string multiply = "*";
    string divide = "/";
    string first_ask = "enter the operator(+, -, *, /): ";
    string ask_number = "enter first number: ";
    string ask_second_number = "enter second number: ";
    int first_number = calculator.first_number;
    int second_number = calculator.second_number;
    cout << first_ask;
    cin >> op;
    cout << ask_number;
    cin >> first_number;
    cout << ask_second_number;
    cin >> second_number;
    if (op == add) {
        cout << calculator.add(first_number, second_number);
    }
    else if (op == subtract) {
        cout << calculator.subtract(first_number, second_number);
    }
    else if (op == multiply) {
        cout << calculator.multiply(first_number, second_number);
    }
    else if (op == divide) {
        cout << calculator.divide(first_number, second_number);
    }
    else cout << "invalid operator";
    return 0;
}