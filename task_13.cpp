
#include <iostream>
#include <cmath>
using namespace std;
int calculate(int a, int b, char op);
double calculate(double a, double b, char op);
double power(double base, int exp);
int total_calc();

int main() {

    cout << "Integer calculation 5 + 3 = " << calculate(5, 3, '+') << endl;
    cout << "Double calculation 4.5 * 2.0 = " << calculate(4.5, 2.0, '*') << endl;


    cout << "2^5 = " << power(2, 5) << endl;


    auto abs_diff = [](double x, double y) {
        cout << "Absolute difference = " << std::abs(x - y) << endl;
    };

    abs_diff(10.5, 4.2);


    calculate(10, 0, '/');
    calculate(7, 2, '-');
    calculate(3.0, 0.0, '/');


    cout << "Total calculations performed: " << total_calc() << endl;

    return 0;
}


int calculate(int a, int b, char op) {
    total_calc();

    switch(op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/':
            if (b == 0) {
                cout << "Error: Division by zero!" << endl;
                return 0;
            }
            return a / b;
        default:
            cout << "Invalid operator!" << endl;
            return 0;
    }
}

double calculate(double a, double b, char op) {
    total_calc();

    switch(op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/':
            if (b == 0.0) {
                cout << "Error: Division by zero!" << endl;
                return 0.0;
            }
            return a / b;
        default:
            cout << "Invalid operator!" << endl;
            return 0.0;
    }
}


double power(double base, int exp) {
    if (exp == 0) return 1;
    if (exp < 0) return 1 / power(base, -exp);
    return base * power(base, exp - 1);
}


int total_calc() {
    static int count = 0;
    count++;
    return count;
}