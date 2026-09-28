#include <iostream>
using namespace std;

class Box {
    double width;
public:
    Box(double w) : width(w) {}
    friend void printWidth(Box b);
};

void printWidth(Box b) {
    // Accesses private member width directly
    cout << "Box Width: " << b.width << endl;
}

int main() {
    Box b1(12.5);
    printWidth(b1);
    return 0;
}
