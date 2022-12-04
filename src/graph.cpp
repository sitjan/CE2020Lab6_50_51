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

void Graph ::removeVertex( char VertexToRemove){ //function to remove vertex from the graph
    if(vertexExist(VertexToRemove)){
    int vertexposi = findPostion(VertexToRemove);
    for (int i=0;i< vertices.size(); i++){
        data[vertexposi][i] = 0;
        data[i][vertexposi] = 0;
        }
    vertices[vertexposi].name= NULL;
    
    }
}

void Graph :: removeedge(char vertex1, char vertex2){ //function to remove edge from the graph
    if(vertexExist(vertex1)&& vertexExist(vertex2)){
        int vertex1Posi = findPostion(vertex1); //2 A
        int vertex2Posi = findPostion(vertex2); //3 B //edge: AB ,BA
        data[vertex1Posi][vertex2Posi]=0;
        data[vertex2Posi][vertex1Posi]=0;
    }
    else{
        cout <<"The vertices of the edge donot exist."<<endl;
    }
}


    int Graph ::   Vertices(){//function to return the number of vertices
        int j;
        for (int i = 0; i < vertices.size(); i++)
        {
         if (vertices[i].name == NULL){
                continue;
            }
        j++; 
        }
        return j;
    } 
    
        int Graph ::    numEdges(){  //function to return the number of edges
            int i,j,k;
              for (int i = 0; i < vertices.size(); i++)
                 {
                    for  (j = 0; j <vertices.size();j++){
                        if (i == j){
                            continue;
                        }
                        if (data[i][j]== 1){
                            k++;
                        }
                    } 
                if (data [i][i] == 1){
                    k++;
                }
                }
                return k ;
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
bool Graph:: neighbour(char vertex1,char vertex2){
    //check their respective position if they form an edge joining each other.
    int vertex1Posi = findPostion(vertex1);
    int vertex2Posi = findPostion(vertex2);
    if(data[vertex1Posi][vertex2Posi]==1 || data[vertex2Posi][vertex1Posi]==1){
        return true;
    }
    return false;
}
string Graph:: neighbours(char vertex1){
    // check all the posible position of that row and column of the vertex if they contain 1
    int vertex1Posi = findPostion(vertex1);
    string neighbours="";
    for (size_t i = 0; i < data.size(); i++)
    {
        if(i==vertex1Posi){
            continue;
        }else if(data[i][vertex1Posi]==1 || data[vertex1Posi][i]==1){
            neighbours=neighbours+vertices[i].name;
        }
    }
}
int Graph:: indegree(char vertex1){
    int vertex1Posi = findPostion(vertex1);
    int indegree=0;
    for (int i = 0; i < vertices.size(); i++)
    {
        if(data[i][vertex1Posi]==1){
            indegree++;
        }
    }
    return indegree;
}
int Graph::outdegree(char vertex1)
{
    int vertex1Posi = findPostion(vertex1);
    int outdegree = 0;
    for (int i = 0; i < vertices.size(); i++)
    {
        if (data[vertex1Posi][i] == 1)
        {
            outdegree++;
        }
    }
    return outdegree;
}
int Graph:: degree(char vertex1){
        return indegree(vertex1) + outdegree(vertex1);
}