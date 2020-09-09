/******************************
*  Week 1 lab - exercise 2:   *
*   a simple Bag class  *
*******************************/

#include <algorithm>
#include <iostream>
#include <iomanip>

#include "Bag.h"
using namespace std;

int main()
{
  
    Bag myItems;
    const int desiredItems = 10;
    for (int i = 0; i < desiredItems; i++)
    {
        myItems.add(rand() % 20);	//add some random numbers to the list
    }
    myItems.print();        //display items in bag 
    myItems.count();        //display item recurrance

    cout<<"\nNumber of items in bag:"<<myItems.getLength()<<"\n\n"; //show number of items in bag


    return 0;
}