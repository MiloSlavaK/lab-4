#include "MyVector.hpp"
#include <iostream>
#include <chrono>

int main() {
    const size_t bigSize = 10000000; // 10 миллионов элементов

    // Создаем большой вектор
    MyVector v1(bigSize);

    // Измеряем время копирования
    auto start = std::chrono::high_resolution_clock::now();
    MyVector v2 = v1; // Копирование
    auto end = std::chrono::high_resolution_clock::now();
    std::cout << "Copy time: "
        << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count()
        << " ms\n";

    // Измеряем время перемещения
    start = std::chrono::high_resolution_clock::now();
    MyVector v3 = std::move(v1); // Перемещение
    end = std::chrono::high_resolution_clock::now();
    std::cout << "Move time: "
        << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count()
        << " ms\n";

    return 0;
}