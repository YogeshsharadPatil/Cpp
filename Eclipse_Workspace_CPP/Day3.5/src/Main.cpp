#include<cstdio>
void printmessage(){
	printf("Have a great Day");
}
int main(){
void printmessage();
::printmessage();
return 0;
}


int num1= 10; //global variable
int main2(){
 int num1 = 20; // Local variable
 printf("Num1 :  %d\n",num1);
 printf("Num 2:  %d\n",::num1); // scope resolution operator to call global variable

 {
	 int num3=30;
	 printf("Num3 :  %d\n",num3);
	  printf("Num4 :  %d\n",::num1);
 }
return 0;
}



int main1(){
 int num1 = 20; // Local variable
 printf("Num :  %d\n",num1);
 printf("Num :  %d\n",::num1); // scope resolution operator to call global variable


}
