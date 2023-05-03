#include <climits>
#include <iostream>

using std::string;

template <typename T> string printSizeNumber(T number) {
    using std::endl;
    using std::to_string;

    string size = to_string(sizeof(number));
    return size + "바이트이다.\n";
}

int main() {
    using namespace std;

    int nInt = INT_MAX;
    short nShort = SHRT_MAX;
    long nLong = LONG_MAX;
    long long nLlong = LLONG_MAX;

    cout << "int는 " << printSizeNumber(nInt);
    cout << "short는 " << printSizeNumber(nShort);
    cout << "long은 " << printSizeNumber(nLong);
    cout << "long long은 " << printSizeNumber(nLlong);

    cout << "최댓값 : " << endl;
    cout << "int: " << nInt << endl;
    cout << "short: " << nShort << endl;
    cout << "long: " << nLong << endl;
    cout << "long long: " << nLlong << endl;
    cout << "int의 최솟값 = " << INT_MIN << endl;
    cout << "바이트 당 비트 수 = " << CHAR_BIT << endl;

    return 0;
}
