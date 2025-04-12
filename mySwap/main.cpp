#include <iostream>
#include <string>
#include "includes/mySwap.hpp"

int main()
{
    int a = 12, b = 21;
    mySwap(a, b);
    std::cout << "int: " << a << ", " << b << std::endl;

    double x = 2.2, y = 5.5;
    mySwap(x, y);
    std::cout << "double: " << x << ", " << y << std::endl;

    std::string s1 = "hell", s2 = "o";
    mySwap(s1, s2);
    std::cout << "string: " << s1 << ", " << s2 << std::endl;
}