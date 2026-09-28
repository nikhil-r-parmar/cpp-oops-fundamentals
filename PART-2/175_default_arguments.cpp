#include <iostream>
using namespace std;

void display(int a, int b = 10, int c = 20) {
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
}

int main() {
    display(5);          // Uses default b and c
    display(5, 15);      // Uses default c
    display(5, 15, 25);  // Overrides defaults
    return 0;
}
