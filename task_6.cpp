
#include <iostream>
using namespace std;

int main() {
    int counter = 0;


    auto increment = [&counter]() {
        counter++;
    };

 increment();
 cout <<endl<< "After 1st call: " << counter << endl;
    increment();
    cout << "After 2nd call: " << counter << endl;
    increment();
    cout << "After 3rd call: " << counter << endl;

    return 0;
}