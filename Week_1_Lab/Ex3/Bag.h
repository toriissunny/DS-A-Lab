/******************************
*  Week 1 lab - exercise 2:   *
*   a simple Bag class  *
*******************************/

#include <iomanip>
#include <string>
using namespace std;

class Bag
{
private:
	//attributes
	int SIZE;		//size of the array that stores the list items
	int* items;		//array to store the list items
	int  length;	//amount of elements in the list
	bool sortStatus;
public:
	//constructors-deconstructores
	Bag();
	~Bag();

	//behaviors
	void	add(int);		//add items in arr
	void	sort();			//sort items in arr
	void	removeAt(int);	//remove items in arr

	//accessors mutators
	bool	isEmpty();		//check arr is empty
	void	print();		//display current state of arr
	void	count();		//display item recurrences
	int		getLength();	//display number of items in arr


};