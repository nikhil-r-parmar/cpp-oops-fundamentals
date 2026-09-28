#include <iostream>
using namespace std;

int main() {
    int original = 50;
    int &ref = original; // Reference variable

    cout << "Original: " << original << ", Reference: " << ref << endl;
    ref = 100; // Modifying through reference
    cout << "Updated Original: " << original << endl;
    return 0;
}
