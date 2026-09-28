#include <iostream>
using namespace std;

class Time {
    int hours, minutes;
public:
    void setTime(int h, int m) { hours = h; minutes = m; }
    void addTime(Time t1, Time t2) { // Passing objects as parameters
        minutes = t1.minutes + t2.minutes;
        hours = t1.hours + t2.hours + (minutes / 60);
        minutes %= 60;
    }
    void display() {
        cout << hours << " hrs " << minutes << " mins" << endl;
    }
};

int main() {
    Time t1, t2, t3;
    t1.setTime(2, 45);
    t2.setTime(1, 30);
    t3.addTime(t1, t2);
    t3.display();
    return 0;
}
