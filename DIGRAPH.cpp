
/*---------------------------------------------------------------------------
UNIT NAME : DiGraph.cpp
PURPOSE   : Directed Graph / Adjacency Matrix Implementation
WRITTEN FOR : Data Structures
WRITTEN BY : 
DATE : 
---------------------------------------------------------------------------*/
#include "digraph.H"
#include <iostream>
using namespace std;


DiGraph::DiGraph (int n)
// PreCondition : Graph has not been created and 0 <= n < MaxVertices
// PostCondition : Graph Graph is created and has n vertices and no edges
// Error Condition : Error if n < 0 or n >+ MaxVertices
{
	 
} //DiGraph

DiGraph::DiGraph(DiGraph & other)
// Requires : other has been created and initialized
// Ensures : other is copied to this graph
// Checks : none
{
	
}


DiGraph::~DiGraph ()
// PreCondition : Graph is created
// PostCondition : Graph is not created
// ErrorCondition : none
{
} //~DiGraph


void DiGraph::SwapDiGraphs ( DiGraph & other)
// PreCondition : this graph and other are created and initialized
// PostCondition : this = #other and other = #this
// ErrorCondition : none
{
  	
} // swap DiGraphs


void DiGraph::AddEdge (int X, int Y)
// PreCondition : Graph is created, X and Y are distinct vertices in Graph, and
//                edge (X,Y) not in Graph
// PostCondition : Graph is the same except an edge (X,Y) now exists
// ErrorCondition : Error if X or Y is not
//                  a vertex in Graph or if X and Y are not distinct or if
//                  edge (X,Y) is already in Graph
{
	
}  // Remove Edge


bool DiGraph::IsEdge (int X, int Y ) const
// PreCondition : Graph is created, X and Y are vertices in Graph
// PostCondition : Graph is unchanged, IsEdge is true if (f edge (X,Y) is in Graph
// ErrorCondition : X or Y is not a vertex in Graph
{
	 

} //IsEdge

int DiGraph::GetNumberOfVertices ( ) const
// PreCondition : Graph is created
// PostCondition : Graph is unchanged, GetNumberofVertices is the number of
//                 vertices in Graph
// ErrorCondition : none
{
	
}    // GetNumberOfVertices


