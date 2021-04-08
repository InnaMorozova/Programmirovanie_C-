#include <iostream>
#include <sstream>
#include "Array.h"
#include <assert.h>


Array::Array(size_t n) : size(n), data(new float[n])
{
    for (size_t i = 0; i != size; i++)
    {
        data[i] = 0.0;
    }
}

Array::Array(const Array& source) : size(source.size), data(new float[source.size])
{
    std::copy(source.data, source.data + size, data);
}

Array::~Array()
{
    if (data != nullptr)
        delete[]data;
    data = nullptr;
}

std::istream& operator >> (std::istream& input, const Array& a)
{
    for (size_t i = 0; i != a.size; i++)
    {
        input >> a.data[i];
    }
    return input;
}

std::ostream& operator << (std::ostream& output, const Array& a)
{
    for (size_t i = 0; i != a.size; i++)
    {
        output << a.data[i] << " ";
    }
    output << std::endl;
    return output;
}

float& Array::operator [] (size_t i)
{
    assert(0 <= i && i < size);
    return data[i];
}

const Array& Array::operator= (const Array& arr)
{
    if (&arr != this)
    {
        if (data != nullptr)
            delete[] data;
        size = arr.size;
        data = new float[size];
        for (size_t i = 0; i != size; i++)
            data[i] = arr.data[i];
    }
    return *this;
}

bool operator == (Array& arrInt, Array& arrInt2)
{
    if (arrInt.size != arrInt2.size)
        return false;
    else
    {
        for (size_t i = 0; i != arrInt.size; i++)
        {
            if (arrInt.data[i] != arrInt2.data[i])
            {
                return false;
            }
        }
    }
    return true;
}

std::string Array::ToStr()
{
    std::ostringstream buff;
    for (size_t i = 0; i != size; i++)
    {
        buff << std::to_string(data[i]) << " ";
    }
    return buff.str();
}

bool Array::isEmpty()
{
    if (data == nullptr)
        return true;
    else
        return false;
}

float Array::max()
{
    float m = data[0];
    for (size_t i = 1; i != size; i++)
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
    for (size_t i = 1; i != size; i++)
    {
        if (data[i] < n)
        {
            n = data[i];
        }
    }
    return n;
}


size_t Array::find(float x)
{
    size_t c = -1;
    for (size_t i = 0; i != size; i++)
    {
        if (data[i] == x)
        {
            c = i;
        }
    }
    return c;
}


void Array::sortArray(int mode)
{
    for (size_t i = 0; i != size - 1; i++)
    {
        for (size_t j = i + 1; j != size; j++)
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