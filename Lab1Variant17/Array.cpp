#include <iostream>
#include <sstream>
#include "Array.h"
#include "real.h"


Array::Array(size_t size) : size(size), data(new float[size])
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
    if (i < 0 || i >= size)
        throw "Array out of range";
    try
    {
        return data[i];
    }
    catch (char)
    {
        std::cerr << "Array index out of range" << std::endl;
    }
}

const Array& Array::operator= (const Array& other)
{
    if (&other != this)
    {
        if (data != nullptr)
            delete[] data;
        size = other.size;
        data = new float[size];
        for (size_t i = 0; i != size; i++)
            data[i] = other.data[i];
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
    std::ostringstream stringArray;
    for (size_t i = 0; i != size; i++)
    {
        stringArray << std::to_string(data[i]) << " ";
    }
    return stringArray.str();
}

bool Array::isEmpty()
{
    return data == nullptr;
}

float Array::max()
{
    float max = data[0];
    for (size_t i = 1; i != size; i++)
    {
        if (data[i] > max)
        {
            max = data[i];
        }
    }
    return max;
}

float Array::min()
{
    float min = data[0];
    for (size_t i = 1; i != size; i++)
    {
        if (data[i] < min)
        {
           min = data[i];
        }
    }
    return min;
}


size_t Array::find(float x)
{
    size_t index = -1;
    for (size_t i = 0; i != size; i++)
    {
        real double1 = data[i];
        real double2 = x;
        if (double1 == double2)
        {
            index = i;
        }
    }
    return index;
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