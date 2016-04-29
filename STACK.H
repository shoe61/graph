
#ifndef Stack_H
#define Stack_H

#include <cstdlib>
#include <fstream>
#include <iostream>
using namespace std;

static const int maxtop = 30;

 class Stack
 {
	public:

		Stack ( ) {used = 0;}
		void Clear ( );
		void Push (const int & item);
		void Pop (int & item );
		bool  IsEmpty() const {return (used ==0);}          //inline methods
		bool  IsFull () const {return (used == maxtop-1);}
		void  PrintStack (ofstream & OutFile);
        int size ( ) const {return used; }

	private:
		  int used;
		  int data[maxtop];
};
#endif

