#include <iostream>
#include <string>
#include "myArray.hpp"

int main()
{
    myArray<char, 3> car = { 'a', 'b', 'c' };
    myArray<int, 5> iar = { 1, 2, 3, 4, 5 };
    myArray<std::string, 2> sar = { "Hello", "World" };

    std::cout << car[1] << std::endl;
    car[1] = 'e';
    std::cout << car[1] << std::endl;
    std::cout << sar[0] << " " << sar[1] << std::endl;
    std::cout << iar.size() << std::endl;
    std::cout << iar.data() << std::endl;

    return 0;
}