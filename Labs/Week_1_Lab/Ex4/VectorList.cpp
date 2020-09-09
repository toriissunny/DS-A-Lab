#include "VectorList.h"

	//constructors and deconstructors
	VectorList::VectorList()
	{
		v;
	}
	VectorList::~VectorList()
	{
		v.clear();
	}
	//behaviors
	void VectorList::add(string keyWord)
	{
	
		if (keyWord != " ")
		{
			v.push_back(keyWord);
		
		}
			
		
	}
	//accessors and mutators
	void VectorList::displayVector()
	{
		
		for (int i = 0; i < v.size(); i++)
			cout << v[i] << " ";

		cout << "\n\n";
	}
