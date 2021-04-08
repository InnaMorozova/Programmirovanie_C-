#pragma once


/**
* \brief Класс, описывающий работу с массивом
*/
class Array
{
public:
    /**
    * \brief Размер массива
    */
    size_t size;
    /**
    * \brief Массив
    */
    float* data;

public:
    /**
    * \brief Конструктор параметризованный
    */
    Array(size_t n);
    /**
    * \brief Конструктор копирования
    */
    Array(const Array& source);
    /**
    * \brief Деструктор
    */
    ~Array();
    /**
    * \brief Оператор ввода массива
    */
    friend std::istream& operator >> (std::istream& input, const Array& a);
    /**
    * \brief Оператор вывода массива
    */
    friend std::ostream& operator << (std::ostream& output, const Array& a);
    /**
    * \brief Оператор получения ссылки на элемент
    */
    float& operator[] (size_t i);
    /**
    * \brief Оператор присваивания
    */
    const Array& operator= (const Array& arr);
    /**
    * \brief Оператор сравнивания
    */
    friend bool operator ==(Array& arrInt, Array& arrInt2);
    /**
    * \brief Формирование строки из элементов массива
    */
    std::string ToStr();
    /**
    * \brief Проверка массива на пустоту
    */
    bool isEmpty();
    /**
    * \brief Возвращает максимальное значение массива
    */
    float max();
    /**
    * \brief Возвращает минимальное значение массива
    */
    float min();
    /**
    * \brief Ищет и возвращает заданный элемент массива по ключу методом линейного поиска.
    */
    size_t find(float x);
    /**
    * \brief Сортирует массив с помощью прямого выбора
    */
    void sortArray(int mode);

};

