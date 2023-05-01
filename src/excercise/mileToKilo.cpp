#include <iostream>

double transpile(double mile);

int main() {
    using namespace std;

    double mile;
    cout << "변환 할 mile을 입력하세요." << endl;
    cin >> mile;
    double kilomiter = transpile(mile);
    cout << mile << "마일은" << kilomiter << "킬로미터 입니다." << endl;
    return 0;
}

double transpile(double mile) { return mile * 1.60934; }