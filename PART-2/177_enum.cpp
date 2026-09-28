#include <iostream>
using namespace std;

enum Days { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

int main() {
    Days today = Wednesday;
    cout << "Enum index for Wednesday: " << today << endl;
    return 0;
}
