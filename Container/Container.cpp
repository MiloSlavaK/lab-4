#include "Container.hpp"
#include <vector>
#include <list>
#include <set>
#include <deque>


template<typename C>
std::string container_to_string(const C& cont) {
    std::ostringstream oss;
    for (const auto& elem : cont) {
        oss << elem;
    }

    return oss.str();
}

template std::string container_to_string<std::vector<int>>(const std::vector<int>&);
template std::string container_to_string<std::list<double>>(const std::list<double>&);
template std::string container_to_string<std::set<std::string>>(const std::set<std::string>&);
template std::string container_to_string<std::deque<char>>(const std::deque<char>&);