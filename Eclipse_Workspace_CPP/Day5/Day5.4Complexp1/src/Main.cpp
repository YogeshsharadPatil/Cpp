#include<iostream>
using namespace std;
class Complex{
	int real;
	int img;
public:
	Complex(){
		this->real = 0;
		this->img = 0;
	}
	Complex(int real){
		this->real = real;
	}
	Complex(int real , int img){
    	this->real = real;
    	this->img = img;
    }
    void printRecord(){
    	cout<<this->real;
    	cout<<this->img;
    }
};

int main(){
//	Complex c1; //parameter less
//	Complex c2(10); // int real
//	Complex c3(10,20); // int int
//	Complex c4();   // error its like a calling function c4
	Complex c5 = 40;  // c5(40); int real
//	Complex c6(50,60);
//	Complex(70,80).printRecord();  //Annonymous object
//	//Complex c7 = 90,100; // complex c7(90) , 8100 // Error
//    Complex c7 = (100,110);
//    c7.printRecord();
//    Complex c8 = {100,200}; error: non-aggregate type 'Complex' cannot be initialized with an initializer list

}




