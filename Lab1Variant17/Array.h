#pragma once
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

