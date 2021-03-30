// Lab1Variant17.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Array.h"



int main()
{
    setlocale(LC_ALL, "Russian");
    size_t n;
    std::cout << "Введите размер массива: ";
    std::cin >> n;
    Array d(n);
    std::cout << "Введите номер команды:\n1. Ввести массив\n2. Вывести массив\n3. Найти максимум\n4. Найти минимум\n5. Найти номер элемента по ключу\n6. Отсортировать массив по убыванию\n7. Отсортировать массив по возрастанию\n8. Закончить работу с массивом" << std::endl;
    int k;
    std::cin >> k;
    while (k != 8)
    {
        if (k == 1)
        {
            d.Init();
        }
        else if (k == 2)
        {
            std::string s = d.coutArray();
            std::cout << s << std::endl;
        }
        else if (k == 3)
        {
            std::cout << d.max() << std::endl;
        }
        else if (k == 4)
        {
            std::cout << d.min() << std::endl;
        }
        else if (k == 5)
        {
            std::cout << "Введите ключ" << std::endl;
            int m;
            std::cin >> m;
            float l = d.find(m);
            if (l == NULL)
                std::cout << "Такого элемента нет" << std::endl;
            else
                std::cout << l << std::endl;
        }
        else if (k == 6)
        {
            d.sortArray(-1);
            std::string s = d.coutArray();
            std::cout << s << std::endl;
        }
        else if (k == 7)
        {
            d.sortArray(1);
            std::string s = d.coutArray();
            std::cout << s << std::endl;
        }
        else
        {
            std::cout << "Введена недопустимая операция" << std::endl;
        }
        std::cout << "Введите следующую операцию" << std::endl;
        std::cin >> k;
    }
}


