#include "QuadraticException.h"

using namespace std;

QuadraticException::QuadraticException(const int& root): message(string("Można wybrać tylko 1 i 2 miejsce zerowe. Podane: ") + to_string(root)) {
	
}

const char* QuadraticException::what() const throw() {
	return message.c_str();
}
