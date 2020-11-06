#include <iostream>
using namespace std;

int main() {
    unsigned short uShortVal = 65535;
    cout << "Incrementing unsigned short " << uShortVal << " gives: ";
    cout << ++uShortVal << endl;

    short signedShort = 32767;
    cout << "Incrementing signed short " << signedShort << " gives: ";
    cout << ++ signedShort << endl;
    return 0;
}