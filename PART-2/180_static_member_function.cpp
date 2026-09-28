#include <iostream>
using namespace std;

class Test {
    static int count;
public:
    static void increment() { count++; }
    static void showCount() {
        cout << "Current count: " << count << endl;
    }
};

int Test::count = 0;

int main() {
    Test::increment();
    Test::increment();
    Test::showCount(); // Called without instantiating object
    return 0;
}
