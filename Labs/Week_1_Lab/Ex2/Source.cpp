/******************************
*  Week 1 lab - exercise 1:   *
*   a simple ArrayList class  *
*******************************/

#include <cstdlib>

#include "ArrayList.h"

using namespace std;

/*
* Program to test the ArrayList class.
*/
int main()
{
	ArrayList myList;
	
	for (int i = 0; i < 1000; i++)
	{

		myList.add(rand() % 500);	//add some random numbers to the list

	}

	//the list contains 6 numbers; the first one is -1
	myList.display();


	return 0;
}

