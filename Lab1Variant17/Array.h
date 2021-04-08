#pragma once


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
    * \brief ����������
    */
    ~Array();
    /**
    * \brief �������� ����� �������
    */
    friend std::istream& operator >> (std::istream& input, const Array& a);
    /**
    * \brief �������� ������ �������
    */
    friend std::ostream& operator << (std::ostream& output, const Array& a);
    /**
    * \brief �������� ��������� ������ �� �������
    */
    float& operator[] (size_t i);
    /**
    * \brief �������� ������������
    */
    const Array& operator= (const Array& arr);
    /**
    * \brief �������� �����������
    */
    friend bool operator ==(Array& arrInt, Array& arrInt2);
    /**
    * \brief ������������ ������ �� ��������� �������
    */
    std::string ToStr();
    /**
    * \brief �������� ������� �� �������
    */
    bool isEmpty();
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
    size_t find(float x);
    /**
    * \brief ��������� ������ � ������� ������� ������
    */
    void sortArray(int mode);

};

