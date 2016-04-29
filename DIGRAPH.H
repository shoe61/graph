
/*---------------------------------------------------------------------------
UNIT NAME : DiGraph.h
PURPOSE   : Directed Graph Specification
WRITTEN FOR : Data Structures
WRITTEN BY : Catherine Stringfellow
DATE : November 7, 1998
---------------------------------------------------------------------------*/
#ifndef digraph_H
#define digraph_H

#pragma once
#include <iostream>
using namespace std;

static const int MAXVERTICES = 25;

class DiGraph
{
  public:

// operations

DiGraph (int n = MAXVERTICES);
// Requires : Graph has not been created and 0 <= n < MAXVERTICES
// Ensures : Graph Graph is created and has n vertices and no edges
// Error Condition : Error if n < 0 or n >= MAXVERTICES

DiGraph(DiGraph & other);
// Requires : other has been created and initialized
// Ensures : other is copied to this graph
// Checks : none

~DiGraph ();
// Requires : Graph is created
// Ensures : Graph is not created
// Checks : none

void SwapDiGraphs ( DiGraph & other);
// PreCondition : this graph and other are created and initialized
// PostCondition : this = #other and other = #this
// ErrorCondition : none

void AddEdge (int X, int Y );
// Requires : Graph is created, X and Y are distinct vertices in Graph, and
//                edge (X,Y) not in Graph
// Ensures : Graph is the same except an edge (X,Y) now exists
// Checks : Error if X or Y is not
//                  a vertex in Graph or if X and Y are not distinct or if
//                  edge (X,Y) is already in Graph

void RemoveEdge (int X, int Y);
// Requires : Graph is created, X and Y are distinct vertices in Graph and
//                edge (X,Y) is in Graph
// Ensures : Graph is the same except edge (X,Y) no longer exists
// Checks : Error if X or Y is not
//                  a vertex in Graph or if X and Y are not distinct or
//                  if edge (X,Y) is not in Graph

bool IsEdge (int X, int Y ) const;
// Requires : Graph is created, X and Y are vertices in Graph
// Ensures : Graph is unchanged, IsEdge is true iff edge (X,Y) is in Graph
// Checks : X or Y is not a vertex in Graph

int GetNumberOfVertices ( ) const;
// Requires : Graph is created
// Ensures : Graph is unchanged, GetNumberofVertices is the number of
//                 vertices in Graph
// Checks : none

  private:
	 int * adjList[][];
	 int size;
};


