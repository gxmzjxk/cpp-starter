#include <iostream>

using namespace std;

constexpr int Square(int num) {
    return num * num;
}

int main() {
    const int ARR_LEN = 5;
    int myNumbers[5] = {1, 2, 3, 4, 5};
    int moreNumbers[Square(ARR_LEN)];
    cout << "Enter index of the element to be changed: " << endl;
    int elementIndex = 0;
    cin >> elementIndex;
    cout << "Enter the new new value you will change: " << endl;
    int newVal = 0;
    cin >> newVal;

    myNumbers[elementIndex] = newVal;
    moreNumbers[elementIndex] = newVal;
    cout << "Element " << elementIndex << " in array myNumbers is: " << myNumbers[elementIndex] << endl;
    cout << "Element " << elementIndex << " in array moreNumbers is: " << moreNumbers[elementIndex] << endl;

    return 0;
}
