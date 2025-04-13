#include <algorithm>
#include <initializer_list>
#include <utility>

class MyVector {
public:
    // Конструкторы
    MyVector();                             // Конструктор по умолчанию
    MyVector(size_t size);                  // Конструктор с размером
    MyVector(std::initializer_list<int> l); // Конструктор со списком инициализации

    ~MyVector();                            // Деструктор
    MyVector(const MyVector& other);        // Конструктор копирования
    MyVector(MyVector&& other) noexcept;    // Конструктор перемещения
    MyVector& operator=(const MyVector& other); // Оператор присваивания копированием
    MyVector& operator=(MyVector&& other) noexcept; // Оператор присваивания перемещением

    // Методы доступа
    size_t size() const { return m_size; }
    size_t capacity() const { return m_capacity; }
    int& operator[](size_t index);
    const int& operator[](size_t index) const;

private:
    int* m_data = nullptr;
    size_t m_size = 0;
    size_t m_capacity = 0;

    void resize(size_t new_capacity);
};

