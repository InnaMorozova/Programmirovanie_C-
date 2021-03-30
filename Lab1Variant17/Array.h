#pragma once

#define NULL 0

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
    * \brief Деструктор по умолчанию
    */
    ~Array();
    /**
    * \brief Инициализация массива
    */
    void Init();
    /**
    * \brief Формирование строки из элементов массива
    */
    std::string coutArray();
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
    float find(int x);
    /**
    * \brief Сортирует массив с помощью прямого выбора
    */
    void sortArray(int mode);

};



