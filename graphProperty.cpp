#include<bits/stdc++.h>
#include<boost/config.hpp>
#include<boost/graph/adjacency_list.hpp>
#include<boost/graph/erdos_renyi_generator.hpp>
#include<boost/random/linear_congruential.hpp>
#include<boost/graph/graph_utility.hpp>
#include<boost/graph/connected_components.hpp>
#include "graphProperty.h"

using namespace std;


//Function to check whether there is an edge between two vertices or not.
bool isEdge(int src, int dest, Graph g)
{
  if(edge(src, dest, g).second == true)
  {
    return true;
  }
  return false;
}


//Function to check whether the graph is connected or not.
bool isConnected(Graph g)
{

  std::vector<int> component(num_vertices(g));
  int num = connected_components(g, &component[0]); 
  if(num==1)
  {
    return true;  
  }
  return false;
}


//Function to check whether there is a path between two vertices or not.
bool isPath(int src, int dest,int num_vertices, Graph g) {          //num_vertices--> number of vertices in graph g.
  bool visited[num_vertices] = {false};
  visited[src] = true;
  std::stack<int> next;
  next.push(src);

  while(!next.empty()) {
    int u = next.top();
    next.pop();

    for (int v = 0; v<num_vertices; ++v) {
      if (!visited[v] &&  edge(u,v,g).second==true) {
        visited[v] = true;
        next.push(v);
      }
    }
  }
  return visited[dest];
}


//Function to check if the graph contains two edges between the same vertex (in forward and backward direction) i.e. (x->y and y->x)
bool doesLoopEdgeExist(Graph g)
{
  auto epair=edges(g);
  for(auto itr1=epair.first;itr1!=epair.second;itr1++)
  {
    for(auto itr2=epair.first;itr2!=epair.second;itr2++)
    {
      if(source(*itr1,g)== target(*itr2,g) && target(*itr1,g)==source(*itr2,g))
      {
        return true;
      }
    }
  }
  return false;
}



