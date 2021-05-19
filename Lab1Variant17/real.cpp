#include "real.h"
#include <iostream>

real::real() : number(0.0)
{}

real::real(float value) : number(value)
{}

bool operator== (real& val1, real& val2)
{
	return real::fabs(val1,val2) < std::numeric_limits<double>::epsilon();
}

float real::fabs(real& val1, real& val2)
{
	if ((val1 - val2) > float(0.0))
		return (val1 - val2).number;
	else
		return (val2 - val1).number;
}

real operator-(const real& left_sub, const real& right_sub)
{
	real tmp(left_sub.number);
	tmp.number -= right_sub.number;
	return tmp;
}

bool operator> (const real& real_val, const float& value)
{
	return real_val.number > value;
}