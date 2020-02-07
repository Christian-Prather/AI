#ifndef NODE_CLASS
#define NODE_CLASS

#include <vector>
#include <string>
using namespace std;

/**
 * @brief A node class to represent a connection in the graph (edge) poorly named
 * 
 */
class Node
{
public:
    string name;        // Name of node
    string destination; // Name of node we are looking at
    Node *source;       // Pointer for this nodes path from root
    int dist;           // Dist between name and destination
    int pathDist;       // Distance of path from node to this node

    // Overload required since priority_que is using Node objects
    bool operator<(const Node &n1)
    {
        return (this->pathDist < n1.pathDist);
    }
};

#endif