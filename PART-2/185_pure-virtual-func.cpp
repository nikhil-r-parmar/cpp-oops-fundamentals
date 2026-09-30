#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() = 0; // Pure virtual function
};

class Derived : public Base {
public:
    void show() override {
        cout << "Pure Virtual Function Executed";
    }
};

int main() {
    Base *ptr = new Derived();
    ptr->show();
    delete ptr;
    return 0;
}