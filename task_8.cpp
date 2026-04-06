
#include <iostream>
using namespace std;
int accumulate(int value) {
    static int total = 0;
    total += value;
    return total;
}
int main() {

    cout <<endl<< "After adding 10: " << accumulate(10) << endl;  // 10
    cout << "After adding 25: " << accumulate(25) << endl;  // 35
    cout << "After adding 5: " << accumulate(5) << endl;    // 40

    return 0;
}