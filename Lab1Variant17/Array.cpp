#include <iostream>
#include "Array.h"
using namespace std;
/*
* brief Класс, описывающий работу с массивом
*/ 
Array::Array(int n) {
    /*
    * brief Размер массива 
    */
    size = n;
    /*
    * brief Ввод массива
    */
    a = new float[size];
    for (int i = 0; i != size; i++)
    {
        a[i] = 0.0;
    }
}
/*
* brief Деструктор по умолчанию
*/
Array::~Array() {
    delete[]a;
}
/*
* Функция ввода массива
*/
void Array::cinArray()
{
    for (int i = 0; i != size; i++)
    {
        cin >> a[i];
    }
}
/*
* brief Функция вывода массива
*/
void Array::coutArray()
{
    for (int i = 0; i != size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
/*
* brief Возвращает максимальное значение массива
*/
float Array::max()
{
    float m = a[0];
    for (int i = 1; i != size; i++)
    {
        if (a[i] > m)
        {
            m = a[i];
        }
    }
    return m;
}
/*
* brief Возвращает минимальное значение массива
*/
float Array::min()
{
    float n = a[0];
    for (int i = 1; i != size; i++)
    {
        if (a[i] < n)
        {
            n = a[i];
        }
    }
    return n;
}
/*
* brief Ищет и возвращает заданный элемент массива по ключу методом линейного поиска.
*/
int Array::find(float x)
{
    int c = -1;
    for (int i = 0; i != size; i++)
    {
        if (a[i] == x)
        {
            c = i;
        }
    }
    return c;
}
/*
* brief Сортирует массив с помощью прямого выбора
*/
void Array::sortArray(int mode)
{
    for (int i = 0; i != size - 1; i++)
    {
        for (int j = i + 1; j != size; j++)
        {
            if (mode == -1)
            {
                if (a[i] < a[j])
                {
                    float z = a[i];
                    a[i] = a[j];
                    a[j] = z;
                }
            }
            if (mode == 1)
            {
                if (a[i] > a[j])
                {
                    float z = a[i];
                    a[i] = a[j];
                    a[j] = z;
                }
            }
        }
    }
}