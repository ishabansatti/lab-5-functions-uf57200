
#include <iostream>
using namespace std;

int sq(int n);

int main() {
    int result;

    result = sq(10);

    cout << "Square of 10 is: " << result << endl;

    return 0;
}


int sq(int n) {
    return n * n;
}