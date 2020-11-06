#include <iostream>
#include <math.h>;

const double PI = acos(-1);

double GetArea(double rad) {
    return 2 * PI * rad;
}

double GetSquare(double rad) {
    return PI * rad * rad;
}

int main() {


    int radius;
    std::cout << "Input rad to calculate square and area" <<  std::endl;
    std::cin >> radius;
    std::cout << "The square is " << GetSquare(radius) << std::endl;
    std::cout << "The area is " << GetArea(radius) << std::endl;

    return 0;
}
