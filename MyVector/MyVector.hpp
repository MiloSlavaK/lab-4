#ifndef MYVECTOR_H
#define MYVECTOR_H

class MyVector {
private:
    int* data;
    size_t size;

public:
    // Конструктор
    MyVector(size_t size = 0) : size(size), data(new int[size]) {}

    // Деструктор
    ~MyVector() { delete[] data; }

    // Конструктор копирования
    MyVector(const MyVector& other) : size(other.size), data(new int[other.size]) {
        for (size_t i = 0; i < size; i++) data[i] = other.data[i];
    }

    // Оператор присваивания копированием
    MyVector& operator=(const MyVector& other) {
        if (this != &other) {
            delete[] data;
            size = other.size;
            data = new int[size];
            for (size_t i = 0; i < size; i++) data[i] = other.data[i];
        }
        return *this;
    }

    // Move конструктор
    MyVector(MyVector&& other) noexcept : size(other.size), data(other.data) {
        other.size = 0;
        other.data = nullptr;
    }

    // Move оператор присваивания
    MyVector& operator=(MyVector&& other) noexcept {
        if (this != &other) {
            delete[] data;
            size = other.size;
            data = other.data;
            other.size = 0;
            other.data = nullptr;
        }
        return *this;
    }
};

#endif // MYVECTOR_H