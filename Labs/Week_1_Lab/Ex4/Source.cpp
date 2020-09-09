/*******************************
*  Week 1 lesson:              *
*   using the vector container *
*******************************/

#include <iostream>
#include <vector>
#include <string>
#include <vector>
#include "VectorList.h"

// provides definition of vector
using std::vector;

// make vector accessible
using namespace std;

int main()
{	

	VectorList v;
	string keyWord=" ";



	while (true)
	{
		cout << "KeyWord: ";
		getline(cin, keyWord);
		v.add(keyWord);
		
		cout << "vector: ";
		v.displayVector();
	}
	return 0;
}