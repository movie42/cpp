#include <iostream>

void hourMinute(int hour, int minute);
int main() {
    using std::cin;
    using std::cout;
    using std::endl;

    int hour;
    int minute;
    cout << "시간 값을 입력하시오: " << endl;
    cin >> hour;
    cout << "분 값을 입력하시오: " << endl;
    cin >> minute;
    hourMinute(hour, minute);

    return 0;
}

void hourMinute(int hour, int minute) {
    using std::cout;
    using std::endl;

    cout << "시각: " << hour << ":" << minute << endl;
}