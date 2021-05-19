#pragma once
class real
{
public:
	float number;
    /**
    * \brief Конструктор
    */
    real();
    /**
    * \brief Конструктор параметризованный
    */
    real(float value);
    /**
    * \brief Оператор сравнивания
    */
    friend bool operator ==(real& val1, real& val2);
    /**
    * \brief Функция получения модуля
    */
    static float fabs(real& val1, real& val2);
    /**
    * \brief Оператор вычитания
    */
    friend real operator-(const real& left_sub, const real& right_sub);
    /**
    * \brief Оператор больше
    */
    friend bool operator> (const real& real_val, const float& value);
};

