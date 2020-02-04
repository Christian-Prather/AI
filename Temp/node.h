#ifndef NODE_CLASS
#define NODE_CLASS

#include<vector>
#include <string>
using namespace std;
   
   class Node
   {
    public:
        string name;
        vector <pair<Node*, int>> children;


    };

  

#endif