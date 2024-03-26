#include <string>
#pragma once
using namespace std;

class StackEmptyException
{
private :
	string errorMSG;
public :
	StackEmptyException(string err) { errorMSG = err; }
	string getMSG() { return errorMSG; }
};

