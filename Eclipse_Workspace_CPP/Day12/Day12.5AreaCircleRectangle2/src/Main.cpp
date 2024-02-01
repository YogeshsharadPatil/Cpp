#include<iostream>
using namespace std;
class Shape{
protected:
double area;

public :
	Shape(void){
		this->area = 0;
	}
	virtual void printarea() {

	}
	virtual void acceptRecord (){

	}


};
class Rectangle : public Shape{
private:
	int length;
	int breadth;

public:
	Rectangle(){
		this->length = 1;
		this->breadth = 1;

	}
	double calculate(){
		return  (this->length * this->breadth);
	}
	void acceptRecord(){
		cout<<"Enter Length: ";
		cin>>this->length;
		cout<<"Enter Breadth";
		cin>>this->breadth;
	}
	void printarea(){
		cout<<"Rectangle Area: "<<this->calculate()<<endl;
	}
};
class Circle : public Shape{
private:
	double radius;

public:
	Circle(){
		this->radius = 1;

	}
	void acceptRecord(){
		cout<<"Enter Radius: ";
		cin>>this->radius;
	}
	double calculate(){
		return (3.14 * this->radius * this->radius);
	}
	void printRecord(){

		cout<<"Circle Area"<<this->calculate();

	}
};
int menulist(){
	cout<<"0.Exit"<<endl;
	cout<<"1.Rectangle"<<endl;
	cout<<"2.Circle"<<endl;
	cout<<"Enter choice"<<endl;
	int choice;
	cin>>choice;
 return choice;
}

int main(){

	int choice;
	while((choice=::menulist())!=0){
		Shape *ptrsh = nullptr;
		switch(choice){
		case 1:
			ptrsh = new Rectangle();
			break;
		case 2:
			ptrsh = new Circle();

		break;
		}
		ptrsh->acceptRecord();
		ptrsh->printarea();

		if( ptrsh != nullptr){
			delete ptrsh;
		}
	}

	return 0;
}
