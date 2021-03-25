#include <iostream>
#include "Array.h"
using namespace std;
/*
* brief �����, ����������� ������ � ��������
*/ 
Array::Array(int n) {
    /*
    * brief ������ ������� 
    */
    size = n;
    /*
    * brief ���� �������
    */
    a = new float[size];
    for (int i = 0; i != size; i++)
    {
        a[i] = 0.0;
    }
}
/*
* brief ���������� �� ���������
*/
Array::~Array() {
    delete[]a;
}
/*
* ������� ����� �������
*/
void Array::cinArray()
{
    for (int i = 0; i != size; i++)
    {
        cin >> a[i];
    }
}
/*
* brief ������� ������ �������
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
* brief ���������� ������������ �������� �������
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
* brief ���������� ����������� �������� �������
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
* brief ���� � ���������� �������� ������� ������� �� ����� ������� ��������� ������.
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
* brief ��������� ������ � ������� ������� ������
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