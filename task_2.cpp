
#include <iostream>
using namespace std;


void swap(int &a, int &b);

int main() {
    int x = 27, y = 17;

    cout << endl<<"Before swapping:"<<endl;
    cout << "x = " << x << ", y = " << y << endl<<endl;


    swap(x, y);

    cout << "After swapping:"<<endl;
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}


void swap(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}