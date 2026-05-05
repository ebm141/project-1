#include <iostream>
using namespace std;

class Time
{
private:
    int hour;
    int minute;
    int second;

public:
    void gettime(int h, int m, int s) {
        hour = h;
        minute = m;
        second = s;
    }

    void displaytime() {
        cout << "Time : " << hour << ":" << minute << ":" << second << endl;
    }
};

int main() {
    Time t;
    t.gettime(12, 35, 55);
    t.displaytime();

    return 0;
}
