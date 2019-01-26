#pragma once
#include <exception>
#include <iostream>

using namespace std;

class Exception5 : public exception {

public:
	virtual const char* what() const throw() {

		return "Buzz";
	}

};