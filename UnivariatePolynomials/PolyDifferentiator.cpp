/**
* Describe what your program does.
* @author YOUR NAME
* <pre>
* Date: DATE THE PROGRAM WAS LAST MODIFIED
* File: PolyDifferentiatior.cpp
* Course: csc1253 Section x <br>
* Programming Project #: 4 <br>
* Instructor: Dr. Duncan <br>
* </pre>
*/

#include <iostream>
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

}

int main()
{

}
