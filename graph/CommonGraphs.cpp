#include "CommonGraphs.hpp"

namespace graphs
{

Graph Petersen()
{
	Graph G(10);

	G.add_edges({{0,1},{0,4},{0, 5},{1, 2},{1, 6},{2, 3},{2, 7},{3, 4},{3, 8},{4, 9},{5, 7},{5, 8},{6, 8},{6, 9},{7, 9}});
	
	return G;
}



}