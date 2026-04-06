
#include <iostream>
using namespace std;


int generateID() {
    static int id = 1000;
    id++;
    return id;
}
int main() {

    for (int i = 0; i < 5; i++) {
        cout << "ID " << i+1 << ": " << generateID() << endl;
    }
    return 0;
}