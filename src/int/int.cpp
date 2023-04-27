#include <iostream>

int main() {
    using std::cout;
    using std::endl;

    int carrots;

    carrots = 25;

    cout << "나는 당근을 ";
    cout << carrots;
    cout << "개 가지고 있다.";
    cout << endl;
    carrots = carrots - 1;
    cout << "아삭아삭, 이제 당근은 " << carrots << "개다." << endl;
    return 0;
}