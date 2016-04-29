//Catherine Stringfellow
//File : SortedList.h
//Date: March 3, 2006
//This file describes the class SortedList - an unordered sequence of items 
//to used to store big numbers

#ifndef SortedList_h
#define SortedList_h

#include <iostream>
using namespace std;

typedef int ItemType;

class SortedList
{
  private:
	class ListNode
	{
		friend SortedList;
		ItemType item;
        ListNode *next;
		ListNode (int item1, ListNode *next1 = NULL)
		{
			item = item1;
			next = next1;
		}		
	};
	
	int length;
	ListNode *currentNodePtr;
	ListNode *head;

  public:
    SortedList ( );

	void clearList ( );
	//Purpose:Make the list empty
    //Requires:
	//Returns: 
	
	bool isFull ( ) const;
	//Returns: False
	
	bool isEmpty ( ) const;
	//Returns: True if the list is empty and false otherwise
	
	int getLength ( ) const;
	//Returns: the number of items in the list
		
	void insertitem (const ItemType & item);
	//Purpose: Inserts the item in the Unsorted list in the proper place
	//         current position will be at the item inserted
	//Requires: nothing
		
	bool searchitem (const ItemType & item);
	//Returns: True if item found in Unsorted list or false otherwise
	//         current position will be at the item if found
	
	void removeitem (const ItemType & item);
	//Purpose: Removes the first occurrence of the item from the Unsorted list 
	//current position will be at the item after the item removed, otherwise it will be at the end
		
	void resetList ( );
	//set the current position to the first item in the list if there is one
		
	bool atEnd ();
	//Returns: True if current position is at the end of the list

	void retrieveNextitem (ItemType & item);
	//Returns: The item that the current position is at, if current position
	//         is at a item AND  the current position is advanced to the next item

	~SortedList ( );
	//Destructs the list

};

#endif
