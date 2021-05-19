#pragma once
class real
{
public:
	float number;
    /**
    * \brief �����������
    */
    real();
    /**
    * \brief ����������� �����������������
    */
    real(float value);
    /**
    * \brief �������� �����������
    */
    friend bool operator ==(real& val1, real& val2);
    /**
    * \brief ������� ��������� ������
    */
    static float fabs(real& val1, real& val2);
    /**
    * \brief �������� ���������
    */
    friend real operator-(const real& left_sub, const real& right_sub);
    /**
    * \brief �������� ������
    */
    friend bool operator> (const real& real_val, const float& value);
};

