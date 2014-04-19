//============================================================================
// Name        : Scripting.cpp
// Author      : Ukaku Eleanya
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "Script/Parse/Parser.h"

int globalValue = 434;


int main() {

	Script s;

	s.load("example.scs");


	double offset = 100;
	s.registerVariable("offset",REGISTERED_DOUBLE,&offset);

	s.execute("equation(60,offset)");
	s.unregisterVariable("offset");

	return 0;
}
















