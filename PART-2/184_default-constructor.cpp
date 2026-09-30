#include <iostream>
using namespace std;

class Demo {
public:
    int x;
    Demo(int a) { x = a; }
    Demo(Demo &obj) { // Copy constructor
        x = obj.x;
    }
};

int main() {
    Demo d1(10);
    Demo d2(d1); // Copying d1 to d2
    cout << "x = " << d2.x;
    return 0;
}
