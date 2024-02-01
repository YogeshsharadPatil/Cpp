#include "../include/ArithmeticException.h"


int calculate(int num1, int num2) {
	if (num2 == 0) {
		throw ArithmeticException("DividebyZeroException", __FUNCTION__,
				__FILE__, __LINE__);
	}
	return num1 / num2;

}


