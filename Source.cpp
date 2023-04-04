#include "graph.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{	

	Graph g;
	g.addVertex(0);
	g.addVertex(1);
	g.addVertex(2);
	g.addVertex(3);
	g.addVertex(4);
	g.addVertex(5);
	g.addVertex(6);
	g.addVertex(7);
	g.addVertex(8);
	g.addVertex(9);
	g.addEdge(0, 1);
	g.addEdge(1, 2);
	g.addEdge(1, 3);
	g.addEdge(1, 4);
	g.addEdge(2, 5);
	g.addEdge(2, 6);
	g.addEdge(0, 7);
	g.addEdge(5, 8);
	g.addEdge(8, 9);
	g.depth(0);
}