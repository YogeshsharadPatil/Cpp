#include "../include/ArithmeticException.h"

string ArithmeticException::getmessage(void) const {
	return this->message;
}
string ArithmeticException::getfunctionname() {
	return this->functionname;
}
string ArithmeticException::getfilename() {
	return this->functionname;
}
int ArithmeticException::getlinenumber() {
	return this->linenumber;
}
