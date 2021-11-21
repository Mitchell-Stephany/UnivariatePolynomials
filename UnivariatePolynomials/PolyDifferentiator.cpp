/**
* This program will use dynamically allocated arrays to create and display a polynomial as well as
* display the polynomials derivative and second derivative. The program will be also be able to evaluate
* the function and the first and second derivtive at a given number.
* @author Mitchell Stephany
* <pre>
* Date: November 20, 2021
* File: PolyDifferentiatior.cpp
* Course: csc1253 Section 3 <br>
* Programming Project #: 4 <br>
* Instructor: Dr. Duncan <br>
* </pre>
*/

#include <iostream>
#include <sstream>
using namespace std;

/**
* Gives a string representation of this polynomial in standard
* form where zero terms, coefficients 1 or -1, and the exponents
* 1 are not displayed.
* @param poly a degree-coefficients array representation of a
* polynomial.
* @return a string representation of this polynomial
* <pre>
* Note: Rules for Representing a Polynomial in Normalized Form:
* 1. If the degree of the polynomial is 0, return a string
* representing the number.
* 2. If the degree of the polynomial is 1, return a string
* representing the polynomial in the form ax + b, where when
* b is zero it should not be displayed and when a is -1 or 1
* it should not be displayed as a coefficient of x.
* 3. If the degree of the polynomial is 2 or more, follow these
* steps:
* A. Generate the string representation of the highest order
* term without using 1, -1 as its coefficient.
* B. Generate the string representations of all other, but
* the last two, terms beginning from the second highest
* order term without the use of 1 and -1 as coefficients
* and without including a zero term. Then deal with the
* last two terms:
* i. If its linear term is non-zero, generate and append
* the linear term but without the use of 1 and -1 as
* its coefficient and 1 as its exponent.
* ii. Finally, append the constant term, the lowest order
* term, if it is non-zero.
* eg: [6, 3, 0, -1, 0, 1, 1, 0] -> 3x^6 - x^4 + x^2 + x
* [5, -1, 0, 3, 0, -1, 1] -> -x^5 + 3x^3 - x + 1
* </pre>
*/
string ptos(const double poly[])
{
	stringstream sout;
	int deg = poly[0];
	if(deg == 0)
	{
		sout << poly[1];
	}
	else if(deg == 1)
	{
		if(poly[1] == 1)
			sout << "x";
		else if(poly[1] == -1)
			sout << "-x";
		else
			sout << poly[1] << "x";
		if(poly[2] != 0)
		{
			if(poly[2] > 0)
			{
				sout << "+" << poly[2];
			}
			else
				sout << "-" << -1*poly[2];
		}
	}
	else
	{
		if(poly[2] == -1)
			sout << "-x^" << deg;
		else if(poly[2] == 1)
			sout << "x^" << deg;
		else
			sout << poly[2] << "x^" << deg;
		int power = deg -1;
		for(int i = 2;i <= deg - 1; i++)
		{
			if(poly[i] != 0)
			{
				if(poly[i] == 1)
					sout << "+x^" << power;
				else if(poly[i] == -1)
					sout << "-x^" << power;
				else if(poly[i] > 1)
					sout << "+" << poly[i] << "x^" << power;
				else
					sout << "-" << -1*poly[i] << "x^" << power;
			}
			power = power - 1;
		}
		if(poly[deg] != 0)
		{
			if(poly[deg] == 1)
				sout << "+x";
			else if(poly[deg] == -1)
				sout << "-x";
			else if(poly[deg] > 1)
				sout << "+" << poly[deg] << "x";
			else
				sout << "-" << -1*poly[deg] << "x";
		}
		if(poly[deg + 1] != 0)
		{
			if(poly[deg +1] > 0)
				sout << "+" << poly[deg + 1];
			else
				sout << "-" << poly[deg + 1];
		}
	}
	return sout.str();
}

/**
* Evaluates the polynomial represented by the array at the
* specified value.
* @param poly an array in degree-coefficients format
* representing a polynomial.
* @param x numeric value at which the polynomial is to be evaluated.
* @return the value of the polynomial when evaluated at x
*/
double eval(const double poly[], double x)
{
	double sum, n = poly[0];
	for(int i = 1; i < n + 1; i++)
	{
		sum = sum * x + poly[i];
	}
	return sum;
}

/**
* Generates the array representation of the derivative of a
* polynomial in degree-coefficients format
* <pre>
* Note: The degree of a polynomial of degree 0 is 0. This
* method should return an array of size 2 whose first
* and second elements are both when called using a
* polynomial of degree 0. This method should not modify
* the poly array.
* </pre>
* @param poly an array in degree-coefficients format
* representing a polynomial.
* @return the array representation of the derivative of the
* specified polynomial.
*/
double* differentiate(const double poly[])
{
	double* deriv, deg;
	if(deg == 0)
	{
		deriv = new double[2];
	}
}

int main()
{
	double deg, x;
	cout << "Enter the degree of the polynomial -> ";
	cin >> deg;
	if(deg < 0)
	{
		cout << "Error: The degree of the polynomial must be nonnegative." << endl;
		return 0;
	}
	else
	{
		double coeff;
		cout << "Enter the coefficients in order of descending powers -> ";
		cin >> coeff;
		if(coeff == 0 && deg > 0)
		{
			cout << "Error: Degree > 0 so the coefficient of the highest order term cannot be 0." << endl;
		}
		else
		{
			double* poly = new double[deg + 2];
			poly[0] = deg;
			poly[1] = coeff;
			for(int i = 2; i <= deg + 1; i++)
			{
				cin >> poly[i];
			}
		}
	}
	cout << "Enter x at which f(x), f'(x), and f''(x) will be evaluated -> ";
	cin >> x;
	return 0;
}
