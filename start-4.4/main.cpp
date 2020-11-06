#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> dynamicArr(3);

    dynamicArr[0] = 365;
    dynamicArr[1] = -421;
    dynamicArr[2] = 789;
    cout << "Numbers of int array: " << dynamicArr.size() << endl;
    cout << "Enter another number to insert: ";
    int addNumber;
    cin >> addNumber;
    dynamicArr.push_back(addNumber);
    cout << "The last element of the array is: " << dynamicArr[dynamicArr.size() - 1] << endl;
    cout << "The new count of the array: " << dynamicArr.size() << endl;
    return 0;

}
