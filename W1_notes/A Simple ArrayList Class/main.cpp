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

	if (!myList.isEmpty()) myList.removeAt(0);
	else myList.add(-1);
	
	//the list contains -1
	myList.display();

	for (int i = 0; i < 5; i++)
	{
		myList.add(rand()%100);		//add some random numbers to the list
	}

	//the list contains 6 numbers; the first one is -1
	myList.display();


	if (!myList.isEmpty()) myList.removeAt(0);
	else myList.add(-1);
	
	//the list contains 5 numbers; -1 has been removed
	myList.display();

	return 0;
}

