#pragma once

#include <cstddef>
#include <initializer_list>
#include <algorithm>

template <class T, std::size_t A_size>
struct myArray {
    myArray(std::initializer_list<T> init) {
        std::copy(init.begin(), init.end(), A_data);
    }

    T& operator[](std::size_t index) {
        return A_data[index];
    }

    const T& operator[](std::size_t index) const {
        return A_data[index];
    }

    std::size_t size() const {
        return A_size;
    }

    T* data() {
        return A_data;
    }

    const T* data() const {
        return A_data;
    }

private:
    T A_data[A_size];
};