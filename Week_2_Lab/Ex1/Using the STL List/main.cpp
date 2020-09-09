/*******************************
*  Week 2 lesson:              *
*   using the list container *
*******************************/

#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<int> numbers;

	for (int i=0; i<10; i++)
		numbers.push_back(rand()%100);

	while(!numbers.empty())
	{
		int x = numbers.front();
		cout << x << " ";
		
		numbers.pop_front();
	}

	cout << endl;

	return 0;
}