#include <iostream>
#include <vector>
#include <string>
#include <vector>
using std::vector;

// make vector accessible
using namespace std;
#pragma once
class VectorList
{
private:
	//attributes
	vector<string> v;

public:
	//constructors and deconstructors
	VectorList();
	~VectorList();

	//behaviors
	void add(string);

	//accessors and mutators
	void displayVector();

};

