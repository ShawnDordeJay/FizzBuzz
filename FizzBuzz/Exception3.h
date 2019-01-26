#pragma once
#include <exception>
#include <iostream>

using namespace std;

class Exception3 : public exception
{
public:
	virtual const char* what() const throw() {
		
		return "Fizz";
	}
};
