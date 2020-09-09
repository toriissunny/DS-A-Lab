/******************************
*  Week 1 lab - exercise 2:   *
*   a simple Bag class  *
*******************************/

#include "Bag.h"
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>

using namespace std;


Bag::Bag()
{
	SIZE = 100;
	items = new int[SIZE];
	length = 0;
	sortStatus = 0;
}


///Destructor. Deallocates the dynamic array list.
Bag::~Bag()
{
	delete[] items;
	items = NULL;
}

///Check if Bag is empty
bool Bag::isEmpty()
{
	if (length == 0)
		return 0;
	else
		return 1;
}

///Display items in bag
void Bag::print()
{
	if (sortStatus == 1)
	{
		cout << "Organized Bag-->Items[";
	}
	else
		cout << "Bag-->Items[";

	
	for (int i = 0; i < length; i++)
		cout << items[i] << " ";
	cout << "]\n\n";
}

//add items into bag
void Bag::add(int x)
{
	if (length == SIZE)
	{
		SIZE = SIZE * 2; //increase size of arr by 2

		int* doubleArr = new int[SIZE]; // create new array w/t SIZE
		for (int i = 0; i < length; i++) //copy old array data to new array
		{
			doubleArr[i] = items[i];
		}

		delete items;		//delete old arr
		items = doubleArr;	//make new array old array but with new fixed length size
	}

	items[length] = x;
	length++;
}

///Sort Bag
void Bag::sort()
{
	for (int index = 0; index < length; index++)
	{
		int i, key, j;
		for (i = 1; i < length; i++)
		{
			key = items[i];
			j = i - 1;

			while (j >= 0 && items[j] > key)
			{
				items[j + 1] = items[j];
				j = j - 1;
			}
			items[j + 1] = key;
		}
	}
	sortStatus = 1; //set sort to true
	
}

///Count Recurrance of items in bag
void Bag::count()
{
	//sort items if they have not been sorted to find dupes easily
	if(sortStatus!=1)
	{
		Bag::sort();
		Bag::print();
	}
	int itemCounter = 1; //set counter for amount of x items apears in bag

	for (int i = 0; i < length; i++) //loop through arr to find dupes
	{
		//increase itemCounter if there are dupes
		if (items[i] == items[i + 1])
		{
			itemCounter++;				
		}

		//reset counter and display item recurrance
		if(items[i]!= items[i+1])
		{
			cout << "Item: "<< items[i] << " / " <<"Recurrence:" << itemCounter << endl;
			itemCounter = 1;
				
		}
	}
	
}

///	Get # of Items in Bag
int Bag::getLength()
{
	return length;
}

///Remove item at position 
void Bag::removeAt(int pos)
{
	if (pos < 0 || pos >= length)
	{
		cout << "Removal Error: invalid position" << endl;
	}
	else
	{
		for (int i = pos; i < length - 1; i++)
			items[i] = items[i + 1];
		length--;
	}
}