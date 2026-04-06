
#include <iostream>
using namespace std;


bool isPrime(int n);

int main() {
    int a = 4, b = 76, c = 18, d = 17;
    cout <<endl<< a << (isPrime(a) ? " is prime" : " is not prime") << endl;
    cout << b << (isPrime(b) ? " is prime" : " is not prime") << endl;
    cout << c << (isPrime(c) ? " is prime" : " is not prime") << endl;
    cout << d << (isPrime(d) ? " is prime" : " is not prime") << endl;

    return 0;
}

bool isPrime(int n) {
    if (n <= 1)
        return false;

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}