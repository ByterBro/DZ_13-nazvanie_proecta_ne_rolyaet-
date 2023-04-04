#include "graph.h"
#include <iostream>
#include <string>
using namespace std;
#define SIZE 10

Graph::Graph() {
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {

            matrix[i][j] = 0;
        }
        vertexes[i] = 0;
    }
    vertexCount = 0;
}

void Graph::addVertex(int vnumber)
{
    vertexes[vertexCount] = vnumber;
    vertexCount++;
}

void Graph::addEdge(int v1, int v2)
{
    matrix[v1][v2] = 1;
    matrix[v2][v1] = 1;
}
bool Graph::edgeExists(int v1, int v2)
{
    return matrix[v1][v2] > 0;
}
bool Graph::vertexExists(int v)
{
    for (int i = 0; i < vertexCount; i++)
        if (vertexes[i] == v)
            return true;
    return false;
}
void Graph::depth(int start)
{
    bool visited[SIZE];
    for (int i = 0; i < SIZE; i++)
        visited[i] = false; 
    depthInner(start, visited);

    cout << endl;
}

void Graph::depthInner(int current, bool visited[])
{   
    std::cout << "v" << current << " -> " << endl;
    visited[current] = true; 
    for (int i = 0; i < SIZE-2; i++)
    {   
        int weight = 1;
        if (edgeExists(current, i) && !visited[i])
            if (weight != 3)
            {   
                weight += 1;
                cout << "v" << current<<" -> ";
                depthInner(i, visited); 
            }
            else
            {
                cout << endl;
            }
            

    }
}

