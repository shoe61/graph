//              UNIT NAME : 
//              PURPOSE   : 
//              WRITTEN FOR : 
//              WRITTEN BY : 
//              DATE : 

//#include <ctype>
#include <iostream>
#include <fstream>
#include "DiGraph.h"
#include "EnhDiG.h"
#include "Stack.h"
using namespace std;

void OpenFiles (ifstream & infile, ofstream & outfile);

int main ( )
// PreCondition : none
// PosrCondition : The prerequisites for the courses in a program of study  
//                 are read from an input file, and the prerequisites for  
//                 each course selected by the user are found and sent to  
//                 the output file.  The process is repeated  until the user  
//                 decides to stop looking for prerequisites  
// ErrorCondition : none  
{
  

  // open input & output files
 
 
    // read data file into G


  //5A find complement
  //print graph and print complement graph
  
  
  // 5B find, and print to outfile, prerequisites for selected courses
  
  
  // while user selects courses to process
      //get valid course
	  //find linear order
	  //print linear order
	  
	  //do you want to go again?
	 
	 
  //5A and 5B close files



  return 0;
}

void OpenFiles (ifstream & infile, ofstream & outfile)
{
  cout << "Enter name of data file> ";
  cin >> infilename;
  infile.open (infilename);

  cout << "Enter name of output file > ";
  cin >> outfilename;
  outfile.open (outfilename);
}
