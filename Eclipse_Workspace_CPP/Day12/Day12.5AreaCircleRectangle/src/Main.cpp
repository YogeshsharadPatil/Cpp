#include<iostream>
using namespace std;
class Shape{
protected:

};
class Rectangle{
private:
	int length;
	int breadth;
	int area;
public:
	Rectangle(){
		this->length = 1;
		this->breadth = 1;
		this->area = 1;
	}
	int calculate(){
		return this->area = this->length * this->breadth;
	}
	void acceptRecord(){
		cout<<"Enter Length: ";
		cin>>this->length;
		cout<<"Enter Breadth";
		cin>>this->breadth;
	}
	void printRecord(){
		cout<<"Length: "<<this->length<<endl;
		cout<<"Breadth: "<<this->area<<endl;
		cout<<"Rectangle Area: "<<this->calculate()<<endl;
	}
};
class Circle{
private:
	double radius;
	double area;
public:
	Circle(){
		this->radius = 1;
		this->area=1;
	}
	void acceptRecord(){
		cout<<"Enter Radius: ";
		cin>>this->radius;
	}
	double calculate(){
		return (3.14 * this->radius * this->radius);
	}
	void printRecord(){
		cout<<"radius: "<<this->radius;
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
		Rectangle r1;
		Circle c1;
		switch(choice){
		case 1:
			r1.acceptRecord();
			r1.printRecord();
			break;
		case 2:
		c1.acceptRecord();
		c1.printRecord();
		break;
		}
	}

	return 0;
}
