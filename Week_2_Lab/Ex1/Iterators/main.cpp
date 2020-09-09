/*******************************
*  Week 2 lesson:              *
*   using iterators            *
*******************************/

#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<int> numbers;

	for (int i=0; i<10; i++)
		numbers.push_back(rand()%100);

	list<int>::iterator it;

	for (it = numbers.begin(); it!=numbers.end(); ++it)
	{
		cout << *it << " ";
	}

	cout << endl;

	return 0;
}