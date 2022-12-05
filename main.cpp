#include <iostream>
#include "graph.h"
using namespace std;

int main(){
    Graph g1;
    cout<<"Graph g1 created"<<endl;
    if(g1.isEmpty()){//checking whether the graph is empty or not
        cout<<"The graph is empty"<<endl;
    }
    g1.addVertex('A');
    if (g1.isEmpty())
    {
        cout << "The graph is empty" << endl;
    }else{
        cout<<"The graph is not empty"<<endl;
    }
    g1.addVertex('B');//adding vertex B
    g1.addVertex('C');//adding vertex C
    g1.addEdge('A','C'); //adding edge AC
    g1.addVertex('D');//adding edge D
    g1.addEdge('B','D'); //Adding edge BD
    g1.removeedge('B','D'); // removing edge BD
    g1.addEdge('A','D');// adding edge AD
    g1.addEdge('A', 'B'); //Adding edge AB
    g1.addEdge('A','A');//Adding edge AA
    g1.addEdge('B', 'B');//Adding edge BB
    g1.printMatrix();
    cout<<"The number of edges are: "<<g1.numEdges()<<endl;
    cout << "The number of vertices are: " << g1.Vertices() << endl;
    cout << "The number of vertices are: " << g1.Vertices() << endl;
    cout << "The number of edges are: " << g1.numEdges() << endl;
    cout <<"InDegree of A "<<g1.indegree('A')<<endl;
    cout << "OutDegree of A " << g1.outdegree('A') << endl;
    cout << "Total degree of A " << g1.degree('A') << endl;
    string n;
    g1.addEdge('B','D'); //adding edge BD again
    n = g1.neighbours('B');//showing the neighbors of B
    cout<<"The neighbours of B are :: "<<n<<endl;
    if(g1.neighbour('C','D')){//checking whether C and D are neighbors or not
        cout<<"C and D are neigbors"<<endl;
    }else{
        cout<<"They are not neigbors"<<endl;
    }
}