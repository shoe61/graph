#include "SortedList.h"

SortedList::SortedList ( )
{   length = 0;
    currentNodePtr = NULL;
	head = NULL;
}
void SortedList::clearList ( )
{   	
	ListNode *nextNodePtr;
	currentNodePtr = head;
	while (currentNodePtr != NULL)
	{
		nextNodePtr = currentNodePtr -> next;
		delete currentNodePtr;
		currentNodePtr = nextNodePtr;
	}
	head = NULL;
	currentNodePtr = NULL;
	length = 0;
 }

bool SortedList::isFull ( ) const
{  return false;
 }
bool SortedList::isEmpty ( ) const
{  return (length == 0);
}
int SortedList::getLength ( ) const
{  return length;
}

void SortedList::insertitem (const ItemType& item)
{
    ListNode *previousNodePtr;
	if (head == NULL || head->item >= item)
	{
		 //new node goes at beginning
		head = new ListNode (item, head);
		currentNodePtr = head;
	}
	else
	{
        previousNodePtr = head;
		currentNodePtr = head->next;
		//find the insertion point
		while (currentNodePtr != NULL && currentNodePtr->item < item)
		{
           previousNodePtr = currentNodePtr;
		   currentNodePtr = currentNodePtr->next;
		}
		//create the new node and insert it just before currentNodePtr
		previousNodePtr->next = new ListNode (item, currentNodePtr);
		currentNodePtr = previousNodePtr->next;
		
	}
    length++;		         
}

bool SortedList::searchitem (const ItemType & item)
{
    bool found = false;
	currentNodePtr = head;
    //find item
    while( (currentNodePtr != NULL) && (!found))
    {
         if (item == currentNodePtr->item)
            found = true;
         else
            currentNodePtr = currentNodePtr->next;
    }
	return found;
}

void SortedList::removeitem (const ItemType& item)
{
   ListNode *previousNodePtr;

   //if the list is empty, do nothing
   if (!head)
	   return;

   //Determine if the first node is the one to delete
   if (head->item == item)
   {
      currentNodePtr = head;
	  head = head->next;
	  delete currentNodePtr;
	  currentNodePtr = head;
   }
   else
   {
      //initialize currentNodePtr to head of list
	   currentNodePtr = head;

	  //skip all nodes whose item member is not equal to item
	   while (currentNodePtr != NULL && currentNodePtr->item != item)
	   {
          previousNodePtr = currentNodePtr;
		  currentNodePtr = currentNodePtr-> next;
	   }
	   //link the previous node to the node after currentNodePtr, then delete currrentNodePtr
	   if (currentNodePtr)
	   {
           previousNodePtr->next = currentNodePtr->next;
		   delete currentNodePtr;
		   currentNodePtr = previousNodePtr->next;
	   }
   }


   length --;
}

void SortedList::resetList ( )
{   
	currentNodePtr = head;
}


void SortedList::retrieveNextitem (ItemType & item)
{ 
     if (currentNodePtr != NULL)
	 {
		 item = currentNodePtr->item; 
         currentNodePtr = currentNodePtr->next;   
	 }
}

	
bool SortedList::atEnd ()
{
	return (currentNodePtr ==NULL);
}

SortedList::~SortedList ( )
{   
	clearList ();
	length = -1;
}
