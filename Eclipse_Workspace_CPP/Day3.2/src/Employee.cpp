#include<cstdio>
#include"../include/Employee.h"
using namespace utilEmp;
void Employee::acceptRecord( void ){	//Member function
	printf("Name	:	");
	fflush(stdout);
	scanf("%s", name );
	printf("Empid	:	");
	fflush(stdout);
	scanf("%d", &empid );
	printf("Salary	:	");
	fflush(stdout);
	scanf("%f", &salary );
}

void Employee::printRecord( void ){	//Member function
	printf("Name	:	%s\n", name);
	fflush(stdout);
	printf("Empid	:	%d\n", empid);
	fflush(stdout);
	printf("Salary	:	%f\n", salary);
	fflush(stdout);

}

