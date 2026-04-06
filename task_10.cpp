
#include <iostream>
using namespace std;
int power(int base, int exp) {
    if (exp == 0) return 1;
    return base * power(base, exp-1);
}
int main() {
    cout <<endl<< "2^8 = " << power(2, 8) << endl;
    cout << "3^4 = " << power(3, 4) << endl;

    return 0;
}