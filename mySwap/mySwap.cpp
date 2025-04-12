#include "includes/mySwap.hpp"
#include <string>

template<typename T> void mySwap(T& first_var, T& second_var) {
    T temp = first_var;
    first_var = second_var;
    second_var = temp;
}

template void mySwap<int>(int&, int&);
template void mySwap<double>(double&, double&);
template void mySwap<std::string>(std::string&, std::string&);