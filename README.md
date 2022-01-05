# graphProperties
There are many graph properties. but here we provided a library in C++(graphProperty.CPP) that provides few properties of graphs. To execute these functionality, one need to include the header file graphProperty.h. We provided an example.cpp which shows how these properies can be executed.

**Usage**
`#include<bits/stdc++.h>
#include<boost/config.hpp>
#include<boost/graph/adjacency_list.hpp>
#include<boost/graph/erdos_renyi_generator.hpp>
#include<boost/random/linear_congruential.hpp>
#include<boost/graph/isomorphism.hpp>
#include<boost/graph/graph_utility.hpp>
#include<boost/graph/connected_components.hpp>
#include<boost/graph/graphviz.hpp>
#include <boost/graph/copy.hpp>
#include "graphProperty.h"
using namespace std;
 
int main()
{
   Graph g;
 
    boost::add_edge (0, 1, {0,0}, g);
    boost::add_edge (1, 3, {0,0}, g);
    boost::add_edge (1, 2, {0,0}, g);
    boost::add_edge (2, 3, {0,0}, g);
    boost::add_edge (3, 1, {0,0}, g);
    boost::add_edge (3, 2, {0,0}, g);
    boost::add_edge (1, 4, {0,0}, g);
    boost::add_edge (4, 5, {0,0}, g);
    boost::add_edge (2, 5, {0,0}, g);
 
    auto epair=edges(g);
    for(auto itr=epair.first;itr!=epair.second;itr++)
    {
      cout<<source(*itr,g)<<" -> "<<target(*itr,g)<<" ";
      cout<<endl;
    } 
    
    cout<<boolalpha;
    cout<<"There is path from vertex 0 to 3: "<<isPath(0,3,6,g);
    cout<<endl;
    cout<<"There is an edge from vertex 2 to 5: "<<isEdge(2,5,g);
    cout<<endl;
    cout<<"There is an edge from vertex 4 to 3: "<<isEdge(4,3,g);
    cout<<endl;
    cout<<"The graph is connected: "<<isConnected(g);
    cout<<endl;
    cout<<"The graphs contains two edges between the same vertex (in forward and backward direction): "<<loopEdgeExist(g);
    cout<<endl;
    
    return 0;
 }`

