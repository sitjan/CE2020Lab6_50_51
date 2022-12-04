#include "graph.h"
#include <iostream>
using namespace std;
bool Graph :: isEmpty() {
    return data.size()==0?true:false;
    }
bool Graph:: isDirected(){
    return isDirected;
}

void Graph:: addVertex(char newVertex){
    Vertex vertex;
    vertex.name = newVertex;
    vertex.position = vertices.size();
    noOfVertex +=1;
}

bool Graph :: vertexExist (char vertexTofind){
    for (int i=0 ; i<vertices.size(); i++){
        if (vertexTofind == vertices[i].name)
        {
            return true;
            break;
        }
        else {
            return false;
        }
    }
}
void Graph:: addEdge(char Vertex1, char Vertex2){//vertex1 A, vertex2 B
    if(vertexExist(Vertex1)&& vertexExist(Vertex2)){
        int vertex1Posi = findPostion(Vertex1); //2 A
        int vertex2Posi = findPostion(Vertex2); //3 B //edge: AB ,BA
        data[vertex1Posi][vertex2Posi]=1;
        data[vertex2Posi][vertex1Posi]=1;
    }
    else{
        cout <<"The vertices of the edge donot exist."<<endl;
    }
}

//vertices list = {vertex1,vertex2}
//vertex1 : {'A',0}

int Graph:: findPostion(char vertex1){
    for (int i = 0; i < vertices.size(); i++)
    {
        if(vertices[i].name = vertex1){
            return vertices[i].position;
        }
    }
}