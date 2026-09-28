#include <iostream>
using namespace std;

int val = 100; // Global variable

class ScopeDemo {
public:
    void display();
};

// Member function defined outside class using ::
void ScopeDemo::display() {
    int val = 10; // Local variable
    cout << "Local val: " << val << endl;
    cout << "Global val: " << ::val << endl; // Global scope resolution
}

int main() {
    ScopeDemo obj;
    obj.display();
    return 0;
}
