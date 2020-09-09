/*******************************
*  Week 2 lesson:              *
*   a simple LinkedList class  *
*******************************/

#include <iostream>
#include "LinkedList.h"

using namespace std;

/*
* Initializes the list to empty creating a dummy header node.
*/
LinkedList::LinkedList()
{
	first = new Node;
	first->next = NULL;
}

/*
* Destructor. Deallocates all the nodes of the linked list,
* including the header node.
*/
LinkedList::~LinkedList()
{
	Node *temp;   

	while (first != NULL)
	{
		temp=first;
		first=first->next;
		delete temp;
	}
}

/*
* Determines whether the list is empty.
*
* Returns true if the list is empty, false otherwise.
*/
bool LinkedList::isEmpty()
{
	return first->next == NULL;
}

/*
* Prints the list elements.
*/
void LinkedList::display()
{
	Node * current = first->next;

	while(current != NULL)
	{
		cout << current->info << " ";
		current = current->next;
	}

	cout << endl;
}

/*
* Adds the element x to the beginning of the list.
*
* x: element to be added to the list.
*/
void LinkedList::add(int x)
{
	Node *p = new Node;

	p->info = x;
	p->next = first->next;

	first->next = p;
}

/*
* Removes the first occurrence of x from the list. If x is not found,
* the list remains unchanged.
*
* x: element to be removed from the list.
*/
void LinkedList::remove(int x)
{
	Node * old = first->next,
		 * p = first;

	//Finding the address of the node before the one to be deleted
	bool found = false;
	while (old != NULL && !found)
	{
		if (old->info == x) found = true;
		else
		{
			p = old;
			old = p->next;
		}
	}
	
	//if x is in the list, remove it.
	if (found)
	{
		p->next = old->next;
		delete old;
	}
}
