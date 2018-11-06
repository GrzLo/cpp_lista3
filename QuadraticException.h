#ifndef QUADRATIC_EXCEPTION_H
#define QUADRATIC_EXCEPTION_H

#include <exception>
#include <string>

class QuadraticException : public std::exception {
	std::string message;

public:
	QuadraticException(const int& root);

	virtual const char* what() const throw();
};

#endif //QUADRATIC_EXCEPTION
