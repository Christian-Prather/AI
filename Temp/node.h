#ifndef NODE_CLASS
#define NODE_CLASS

#include<vector>
#include <string>
using namespace std;
   
   class Node
   {
    public:
        string name;
        string destination;
        Node* source;
        int dist;
        int pathDist;

friend bool operator < (const Node & n1, const Node & n2)
{   
    return !(n1.pathDist < n2.pathDist);

}
    };

  

#endif