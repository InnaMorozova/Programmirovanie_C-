#include <iostream>
#include <sstream>
#include "Array.h"


Array::Array(size_t n) {

    size = n;
    data = new float[size];
    for (int i = 0; i != size; i++)
    {
        data[i] = 0.0;
    }
}

Array::Array(const Array& source)
{
    size = source.size;
    data = new float[size];
    for (int i = 0; i < size; i++)
    {
        data[i] = source.data[i];
    }
}

Array::~Array() {
    delete[]data;
}

void Array::Init()
{
    for (int i = 0; i != size; i++)
    {
        std::cin >> data[i];
    }
}

std::string Array::coutArray()
{
    std::string s;
    for (int i = 0; i != size; i++)
    {
        std::ostringstream buff;
        buff << data[i];
        s += buff.str() + " ";
    }
    return s;
}

float Array::max()
{
    float m = data[0];
    for (int i = 1; i != size; i++)
    {
        if (data[i] > m)
        {
            m = data[i];
        }
    }
    return m;
}

float Array::min()
{
    float n = data[0];
    for (int i = 1; i != size; i++)
    {
        if (data[i] < n)
        {
            n = data[i];
        }
    }
    return n;
}

float Array::find(int x)
{
    if (x<size && x>-1)
        return data[x];
    else
        return NULL;
}

void Array::sortArray(int mode)
{
    for (int i = 0; i != size - 1; i++)
    {
        for (int j = i + 1; j != size; j++)
        {
            if (mode == -1)
            {
                if (data[i] < data[j])
                {
                    float z = data[i];
                    data[i] = data[j];
                    data[j] = z;
                }
            }
            if (mode == 1)
            {
                if (data[i] > data[j])
                {
                    float z = data[i];
                    data[i] = data[j];
                    data[j] = z;
                }
            }
        }
    }
}