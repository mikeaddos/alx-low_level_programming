#include "main.h"
/**
 *_evaluate - evaluate function sqrt
 *@m: interger
 *@n: interger
 *Return: evaluate sqrt
 */

int _evaluate(int m, int n)
{
	/*Evaluate function*/
	if (n == 0 || n == 1)
		return (n);

	else if (m * m < n)
		return (_evaluate(m + 1, n));

	else if (m * m == n) /*Condiction base*/
		return (m);

	return (-1);

	return (-1);
}

/**
 *_sqrt_recursion - evaluate sqrt
 *@n: interger
 *Return: Sgrt_recursion
 */

int _sqrt_recursion(int n)
{
	int m = 0;

	if (m < 0) /*If n is negative*/
		return (-1);

	else
	{
		return (_evaluate(m, n)); /*Recursive call*/
	}
}
