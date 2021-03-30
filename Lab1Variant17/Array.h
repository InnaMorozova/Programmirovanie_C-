#pragma once

#define NULL 0

/**
* \brief �����, ����������� ������ � ��������
*/
class Array
{
public:
    /**
    * \brief ������ �������
    */
    size_t size;
    /**
    * \brief ������
    */
    float* data;

public:
    /**
    * \brief ����������� �����������������
    */
    Array(size_t n);
    /**
    * \brief ����������� �����������
    */
    Array(const Array& source);
    /**
    * \brief ���������� �� ���������
    */
    ~Array();
    /**
    * \brief ������������� �������
    */
    void Init();
    /**
    * \brief ������������ ������ �� ��������� �������
    */
    std::string coutArray();
    /**
    * \brief ���������� ������������ �������� �������
    */
    float max();
    /**
    * \brief ���������� ����������� �������� �������
    */
    float min();
    /**
    * \brief ���� � ���������� �������� ������� ������� �� ����� ������� ��������� ������.
    */
    float find(int x);
    /**
    * \brief ��������� ������ � ������� ������� ������
    */
    void sortArray(int mode);

};



