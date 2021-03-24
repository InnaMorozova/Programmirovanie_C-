#include <iostream>
#include <cmath>

using namespace std;

class Array 
{
public:
    int size;
    float* a;

public:

    Array(int n);
    ~Array();

    void cinArray();
    void coutArray();
    float max();
    float min();
    int find(float x);
    void sortArray(int mode);

};

Array::Array(int n) {
    size = n;
    a = new float[size];
    for (int i = 0; i != size; i++)
    {
        a[i] = 0.0;
    }
}

Array::~Array() {
    delete[]a;
}

void Array::cinArray()
{
    for (int i = 0; i != size; i++)
    {
        cin >> a[i];
    }
}

void Array::coutArray()
{
    for (int i = 0; i != size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

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


int main()
{
    int n;
    cout << "Введите размер массива: ";
    cin >> n;
    Array d(n);
    cout << "Введите номер команды:\n1. Ввести массив\n2. Вывести массив\n3. Найти максимум\n4. Найти минимум\n5. Найти номер элемента по ключу\n6. Отсортировать массив по убыванию\n7. Отсортировать массив по возрастанию\n8. Закончить работу с массивом" << endl;
    int k;
    cin >> k;
    while (k != 8)
    {
        if (k == 1)
        {
            d.cinArray();
        }
        else if (k == 2)
        {
            d.coutArray();
        }
        else if (k == 3)
        {
            cout << d.max() << endl;
        }
        else if (k == 4)
        {
            cout << d.min() << endl;
        }
        else if (k == 5)
        {
            cout << "Введите ключ" << endl;
            float m;
            cin >> m;
            int l = d.find(m);
            if (l == -1)
                cout << "Такого элемента нет" << endl;
            else
                cout << d.find(m) << endl;
        }
        else if (k == 6)
        {
            d.sortArray(-1);
            d.coutArray();
        }
        else if (k == 7)
        {
            d.sortArray(1);
            d.coutArray();
        }
        else
        {
            cout << "Введена недопустимая операция" << endl;
        }
        cout << "Введите следующую операцию" << endl;
        cin >> k;
    }
}