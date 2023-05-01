#include <iostream>
#include <string>

int main() {
    using std::cin;
    using std::cout;
    using std::endl;

    char name;
    char address;

    cout << "이름을 입력하세요.";
    cin >> name;
    cout << "주소를 입력하세요.";
    cin >> address;
    cout << name << "님, " << address << "에 사시는군요." << endl;

    return 0;
}