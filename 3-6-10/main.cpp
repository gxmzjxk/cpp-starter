#include <iostream>

int main() {
    using namespace std;
    enum YourCards {
        Ace,
        Jack = 44,
        Queen,
        King
    };
    cout << "Queen is = " << Queen << endl;
    unsigned int uInt = 11;
    int iInt = 11;
    long lNum = 1222;
    bool compare = sizeof(uInt) == sizeof(lNum);
    cout << "sizeof unsigned int values：" << sizeof(uInt) << endl;
    cout << "size of int values：" << sizeof(iInt) << endl;
    cout << "unsigned int is less than int：" << compare;



    return 0;
}
