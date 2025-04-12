#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <deque>
#include "Container.hpp"

int main() {
    std::vector<int> vec = { 1, 2, 3, 4 };
    std::list<double> lst = { 1.1, 2.2, 3.3 };
    std::set<std::string> s = { "apple", "banana", "cherry" };
    std::deque<char> d = { 'a', 'b', 'c' };

    std::cout << "Vector: " << container_to_string(vec) << std::endl;
    std::cout << "List: " << container_to_string(lst) << std::endl;
    std::cout << "Set: " << container_to_string(s) << std::endl;
    std::cout << "Deque: " << container_to_string(d) << std::endl;

    return 0;
}