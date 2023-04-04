#pragma once
#include <string>
#define SIZE 10


class Graph {
public:
    Graph();
    // добавление вершины
    void addVertex(int vnumber);
    // добавление ребра
    void addEdge(int v1, int v2);
    void depthInner(int current, bool visited[]);
    void depth(int start);

private:
    bool edgeExists(int v1, int v2);
    bool vertexExists(int vnumber);

    int matrix[SIZE][SIZE]; // матрица смежности

    int vertexes[SIZE]; // хранилище вершин
    int vertexCount; // количество добавленных вершин
};