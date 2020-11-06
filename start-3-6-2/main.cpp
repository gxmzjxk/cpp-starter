#include <iostream>

constexpr double GetPi() {
    return 22.0 / 7;
}

constexpr double TwiceGetPi() {
    return 2 * 22.0 / 7;
}

int main() {
    using namespace std;
    const double pi = 22.0 / 7;
    cout << " constant pi contains value = " << pi << endl;
    cout << "constexpr GetPi returns value " << GetPi() << endl;
    cout << "constexpr TwiceGetPi returns value " << TwiceGetPi();
    return 0;
}
