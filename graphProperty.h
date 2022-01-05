#ifndef GRAPHPROPERTY_H_
#define GRAPHPROPERTY_H_
#include<bits/stdc++.h>

using boost::make_iterator_range;
using namespace boost;

typedef boost::adjacency_list_traits<boost::vecS, boost::vecS, boost::directedS> Traits;
struct EdgeProps {
    long capacity;
    long residual_capacity;
    Traits::edge_descriptor reverse;
};

typedef boost::adjacency_list<boost::vecS,boost::vecS,boost::directedS,boost::property<boost::vertex_index_t,std::string>,EdgeProps> Graph;
bool isPath(int src, int dest,int n,Graph g);
bool isEdge(int src, int dest, Graph g);
bool isConnected(Graph g);
bool loopEdgeExist(Graph g);


#endif
