//stack.cpp

#include "Stack.h"
#include <iostream>
using namespace std;

void Stack::Clear ( )
{
  used = 0;
}
void Stack::Push (const int &entry)
{
  if (size ( ) >= maxtop)
	  cout << "ERROR: Cannot push onto full stack.\n";
  //put entry in available slot and increment number of items
  else
  {
    data[used] = entry;
    used++;
  }
}


void Stack::Pop (int & Item)
{
  if (IsEmpty ( ) )
  { cout << "ERROR: Cannot pop from empty stack.\n";
  }
  //copy of item from stack and decrement used (top)
  else
  {
    used--;
    Item = data[used];
  }
}

void Stack::PrintStack (ofstream & OutFile) 
{
  int Item;
  Stack temp;
  
  //pop stack and print items, store on temp stack
  while (!IsEmpty ( ))
  {
	  Pop (Item);
	  OutFile << Item << endl;
	  temp.Push(Item);
  }
  
  //restore stack
  while (!temp.IsEmpty ( ))
  {
	  temp.Pop (Item);
	  Push(Item);
  }
}
