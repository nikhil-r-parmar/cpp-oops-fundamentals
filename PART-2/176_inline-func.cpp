#include <iostream>
using namespace std;

inline int cube(int n) {
    return n * n * n;
}

int main() {
    cout << "Cube of 4: " << cube(4) << endl;
    cout << "Cube of 6: " << cube(6) << endl;
    return 0;
}
