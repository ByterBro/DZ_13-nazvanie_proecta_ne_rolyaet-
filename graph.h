#pragma once
#include <string>
#define SIZE 10


class Graph {
public:
    Graph();
    // ���������� �������
    void addVertex(int vnumber);
    // ���������� �����
    void addEdge(int v1, int v2);
    void depthInner(int current, bool visited[]);
    void depth(int start);

private:
    bool edgeExists(int v1, int v2);
    bool vertexExists(int vnumber);

    int matrix[SIZE][SIZE]; // ������� ���������

    int vertexes[SIZE]; // ��������� ������
    int vertexCount; // ���������� ����������� ������
};