#include "QuadraticEquation.h"
#include "QuadraticException.h"
#include <cmath>

QuadraticEquation::QuadraticEquation (double a, double b, double c) : _a(a), _b(b), _c(c) {
}

double QuadraticEquation::Roots(unsigned int which_root) 
{
	if (which_root == 1 || which_root == 2) 
	{
		double delta = (_b*_b) - (4 * _a * _c);
		if (which_root == 1) 
		{
			return double (-_b - sqrt(delta)) / (2 * _a);
		}
		if (which_root == 2) 
		{
			return double (-_b + sqrt(delta)) / (2 * _a);
		}
	}
	
	throw QuadraticException(which_root);
	
}
