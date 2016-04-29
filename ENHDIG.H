
/*
UNIT NAME : EnhDiGraph.h
PURPOSE   : Enhanced DiGraph Operations Specifications
WRITTEN FOR : CS 345
WRITTEN BY : Catherine Stringfellow
DATE : November 7, 1998
*/

#pragma once
#include <fstream>
#include <iostream>
#include "DiGraph.h"
#include "Stack.h"
using namespace std;

typedef bool ControlData [MAXVERTICES];

// operations

void ReadDiGraph (DiGraph & G, ifstream & InFile, ofstream & OutFile);
// PreCondition : G is created.  The first line of InFile contains the
//                number of vertices in the graph,, the following lines
//                are the edges (vertex pairs) of the Graph
// PostCondition : Graph G is the DiGraph specified by InFile
// ErrorCondition : Error if the size is invalid, or if there are invalid edges

void PrintDiGraph (DiGraph & G, ofstream & OutFile);
// PreCondition  : G is created
// PostCondition : outfile's first line is the size of the graph, the
//                 succeeding lines contain a list of vertices and the
//                 vertices to which they are adjacent
// ErrorCondition : none

void Complement (DiGraph & G, DiGraph & GComp);
// PreCondition : G and GComp are created
// PostCondition : G = #G, GComp is the same size as G and has edges between
//                 exactly those pairs of vertices not directly
//                 connected in G
// ErrorCondition : none

void FindLinearOrder (DiGraph & G, int Course, Stack & Prerequisites);
// requires : G is created, Prerequisites is created, Course is a valid course
// ensures : G = #G; Prerequisites contains the sequence of courses that have
//           to be taken before Course, with Course itself at the top
// checks : Course is a valid course

void PrintLinearOrder (ofstream & OutFile, Stack & Prereq);
// requires : OutFile has been opened for output; PreReq is created,
//            and its top item is the "target course" for which the rest
//            of the items on the stack are prerequisites
// checks : none

