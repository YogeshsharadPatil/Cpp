#include<cstdio>

namespace na{
	int num1 = 10;
	int num2 = 20;
}
namespace nb{
	int num1 = 30;
	int num3 = 40;
}

int main( void ){
	printf("Num1	:	%d\n", na::num1);	//OK: 10
	printf("Num2	:	%d\n", na::num2);	//OK: 20

	printf("Num1	:	%d\n", nb::num1);	//OK: 30
	printf("Num3	:	%d\n", nb::num3);	//OK: 40
	return 0;
}
