#include<iostream>
using namespace std;
class Time {
    int hours;
    int minutes;
public:
Time(int h,int m)
{
    hours=h;
    minutes=m;
}
Time() {
        hours = 0;
        minutes = 0;
    }
    void displayData() {
        cout << "Hours: " << hours << ", Minutes: " << minutes << endl;
    }
    Time addTime(Time t) {
        int newhours,newminutes;
        newhours = hours + t.hours;
        newminutes = minutes + t.minutes;
        if (newminutes >= 60) {
            newhours += newminutes / 60;
            newminutes = newminutes % 60;
        }
        return Time(newhours,newminutes);
    }
};
int main() {
    Time t1(2, 45);
    cout << "Time 1: ";
    t1.displayData();
    Time t2(1, 30);
    cout << "Time 2: ";
    t2.displayData();
    Time t3 = t1.addTime(t2);
    cout<<"Time after addition: ";
    t3.displayData();
    return 0;
}