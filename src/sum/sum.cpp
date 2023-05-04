#include <iostream>

int sum(int a, int b) { return a + b; }

int main() {
    int f = 4;
    int s = 5;
    int sumResult;
    int sum(int a, int b);
    sumResult = sum(f, s);
    std::cout << sumResult << std::endl;
    return 0;
}