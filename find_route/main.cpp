#include <iostream>
#include <fstream>
#include <queue>
#include <sstream>
#include <stack>
#include "node.h"

// Change expanded to be nodes and then go down the nodes in order they were added finindg the matching node?
using namespace std;
vector<Node *> connections;
vector<string> cities;
vector<string> expandedCities;
//int currentPathDist = 0;
int main(int argc, char *argv[])
{
    string inputFile = argv[1];
    string originCity = argv[2];
    string destinationCity = argv[3];
    // string inputFile = "input1.txt";
    // string originCity = "London";
    // string destinationCity = "Frankfurt";
    int currentPathDist = 0;
    int lastDistance = 0;

    // typedef pair<int, Node> P;
    /**
     * @brief This is the que ranked of distance from root node
     * 
     */
    priority_queue<Node *, vector<Node *>, greater<Node *>> fringeList;

    ifstream file(inputFile);
    if (file.is_open())
    {
        string k;
        string city1;
        string city2;
        int theDist;
        getline(file, k);

        while (k != "END OF INPUT")
        {
            bool matchCity = false;
            /**
             * @brief This is for parsing the file
             * 
             * @return istringstream 
             */
            istringstream line(k);
            // cout << k << endl;
            line >> city1 >> city2 >> theDist;

            // Build the vertex list
            for (int i = 0; i < cities.size(); i++)
            {
                if (cities.at(i) == city1)
                {
                    matchCity = true;
                }
            }
            if (!matchCity)
            {
                cities.push_back(city1);
            }

            matchCity = false;
            for (int i = 0; i < cities.size(); i++)
            {
                if (cities.at(i) == city2)
                {
                    matchCity = true;
                }
            }
            if (!matchCity)
            {
                cities.push_back(city2);
            }
            // Build the connections list
            Node *newCity = new Node;
            newCity->name = city1;
            newCity->destination = city2;
            newCity->dist = theDist;
            newCity->pathDist = currentPathDist + theDist;

            connections.push_back(newCity);
            getline(file, k);
        }
    }

    else
    {
        cout << "Failed to open file: " << endl;
        return 0;
    }

    /**
     * @brief Loop through all connections looking for any that 
     *        use the origin Node and add them to the fringeList
     * 
     */
    for (auto connection : connections)
    {
        if (originCity == connection->name)
        {
            Node *newPotential = new Node;
            newPotential->name = connection->name;
            newPotential->destination = connection->destination;
            newPotential->dist = connection->dist;
            newPotential->pathDist = currentPathDist + connection->dist;
            fringeList.push(newPotential);
        }
        if (originCity == connection->destination)
        {
            Node *newPotential = new Node;
            newPotential->name = connection->destination;
            newPotential->destination = connection->name;
            newPotential->dist = connection->dist;
            newPotential->pathDist = currentPathDist + connection->dist;
            fringeList.push(newPotential);
        }
    }

    /////////////////////////Graph made/////////////////////////////////////////
    while (fringeList.size() != 0)
    {
        // Get first from fringe list and expand int
        bool expanded = false;
        Node *currentNode = fringeList.top();
        currentPathDist = currentNode->pathDist;

        fringeList.pop();
        /**
         * @brief Found a path
         * 
         */
        if (currentNode->name == destinationCity)
        {
            stack<Node *> path; // Just used to print out nodes
            // Every Node source->distance is the distance from root to current node
            cout << "distance: " << currentNode->source->pathDist << " km" << endl;
            cout << "route:" << endl;

            // Traverse back up the linked list tree of path
            Node *checker = currentNode->source;
            string parent = checker->name;
            while (parent != originCity)
            {
                path.push(checker);
                checker = checker->source;
                parent = checker->name;
            }
            path.push(checker);

            // Display them all
            while (path.size() != 0)
            {
                Node *node = path.top();
                path.pop();
                cout << node->name << " to " << node->destination << ", " << node->dist << " km" << endl;
            }

            return 0; // Exit
        }
        // If not the desitination
        else
        {
            // Is the current node desitination already checked, if so skip it
            for (auto city : expandedCities)
            {
                if (city == currentNode->destination)
                {
                    expanded = true;
                    break;
                }
            }
            // If a valid options expand it and add options to fringeList
            if (!expanded)
            {
                expandedCities.push_back(currentNode->name);

                for (auto connection : connections)
                {
                    // grab all possible connections from city
                    // Any connection involving next node we are going to
                    if (currentNode->destination == connection->name)
                    {
                        Node *newPotential = new Node;
                        newPotential->name = connection->name;
                        newPotential->destination = connection->destination;
                        newPotential->dist = connection->dist;
                        newPotential->pathDist = currentPathDist + connection->dist;
                        newPotential->source = currentNode;
                        fringeList.push(newPotential);
                    }
                    if (currentNode->destination == connection->destination)
                    {
                        Node *newPotential = new Node;
                        newPotential->name = connection->destination;
                        newPotential->destination = connection->name;
                        newPotential->dist = connection->dist;
                        newPotential->pathDist = currentPathDist + connection->dist;
                        newPotential->source = currentNode;
                        fringeList.push(newPotential);
                    }
                }
            }
        }
    }
    // If we got here there are no more potential paths to check
    cout << "distance: infinity" << endl;
    cout << "route:" << endl;
    cout << "none" << endl;
}
