#include <iostream>
#include <cmath>


int main(){
    double a;
    double b;
    double c;

    std::cout << "Enter a: ";
    std::cin >> a;

    std::cout << "Enter b: ";
    std::cin >> b;

    std::cout << "Hypotenuse(side c) = " << sqrt(pow(a, 2)+pow(b,2)) << '\n';

    return 0;
}
