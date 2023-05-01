#include <iostream>

using std::string;

string ThreeBlind();
string SeeHow();

int main() {
    using std::cout;
    using std::endl;

    cout << ThreeBlind() << ThreeBlind();
    cout << SeeHow() << SeeHow() << endl;

    return 0;
}

string ThreeBlind() { return "Three blind mice\n"; }
string SeeHow() { return "See how they run\n"; }
