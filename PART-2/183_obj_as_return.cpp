#include <iostream>
using namespace std;

class Complex {
    float real, imag;
public:
    void setData(float r, float i) { real = r; imag = i; }
    Complex add(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp; // Returning object
    }
    void display() { cout << real << " + " << imag << "i" << endl; }
};

int main() {
    Complex c1, c2, c3;
    c1.setData(2.5, 3.5);
    c2.setData(1.5, 2.5);
    c3 = c1.add(c2);
    cout << "Sum: ";
    c3.display();
    return 0;
}
