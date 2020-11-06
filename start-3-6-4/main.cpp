#include <iostream>

int main() {
//    彩虹七色
    enum RainbowColors {
        Violet,
        Indigo = 3,
        Blue,
        Green,
        Yellow,
        Orange,
        Red,
    };
//    指南针方位
    enum CadinalDirection {
        North,
        South,
        East,
        West
    };

    RainbowColors myFavoriteColor = Violet;

//    编译器将枚举量( Voilet 等)转换为整数，每个枚举量都比前一个大 1。
//    您可以指定起始 值，如果没有指定，编译器认为起始值为 0，因此 North 的值为 0。
//    如果愿意，还可通过初始化显式地给每个枚举量指定值
    std::cout << "the value of myFavoriteColor is " << myFavoriteColor << std::endl;
    std::cout << "the value of Blue is " << Blue << std::endl;

    unsigned short smallNum = 0;
    smallNum--;
    std::cout << "the unsigned int 0 - 1 values " << smallNum;


    return 0;
}
