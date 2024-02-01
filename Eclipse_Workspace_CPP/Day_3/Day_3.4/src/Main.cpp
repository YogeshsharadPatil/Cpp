#include<cstdio>

class Employee{
private:
	char name[ 30 ];
	int empid;
	float salary;
public:
	void acceptRecord( void );

	void printRecord( void );
};

void Employee::acceptRecord( void ){	//Member function
	printf("Name	:	");
	scanf("%s", name );
	printf("Empid	:	");
	scanf("%d", &empid );
	printf("Salary	:	");
	scanf("%f", &salary );
}

void Employee::printRecord( void ){	//Member function
	printf("Name	:	%s\n", name);
	printf("Empid	:	%d\n", empid);
	printf("Salary	:	%f\n", salary);
}

int main( void ){
	Employee emp;	//Here class Employee is instantiated and name of the instance is emp.

	emp.acceptRecord( );	//acceptRecord() function is called  on object emp;

	emp.printRecord( );		//printRecord() function is called  on object emp;

	return 0;
}
