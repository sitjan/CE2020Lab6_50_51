#include <iostream>
#include "graph.h"
using namespace std;

int main(){
    Graph g1;
    if(g1.isEmpty()){
        cout<<"The graph is empty.(Contains no vertices.)"<<endl;
    }
    if(g1.isDirected()){
        cout<<"The graph is directed."<<endl;
    }else{
        cout<<"The graph is not directed."<<endl;
    }
    g1.addVertex('A');
    g1.addVertex('A');
    g1.addVertex('A');
}
   
