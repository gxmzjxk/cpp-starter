#include <iostream>
#include <string>

using namespace std;

int main() {
    string greetString ("Hello world");
    cout << greetString << endl;
    cout << "Enter a line of text: " << endl;
    string firstLine;
//    cin >> firstLine;
    getline(cin, firstLine);
    cout << "Enter another: " << endl;
    string secondLine;
//    cin >> secondLine;
    getline(cin, secondLine);
    string concatString =  firstLine + " " + secondLine;
    cout << "Result of concatenation: " << concatString << endl;
    cout << "Copy of concatenated string: " << endl;
    string aCopy;
    aCopy = concatString;
    cout << aCopy << endl;
    cout << "Length of the concat string is: " << concatString.length() << endl;

    return 0;
}
