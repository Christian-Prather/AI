#include <iostream>
#include <fstream>
#include <queue>
#include <sstream>
#include "node.h"
// Change expanded to be nodes and then go down the nodes in order they were added finindg the matching node?
using namespace std;
vector<Node*> connections;
vector<string> cities;
vector<string> expandedCities;
int currentPathDist = 0;
int main(int argc, char *argv[])
{
    string inputFile = argv[1];
    string originCity = argv[2];
    string destinationCity = argv[3];

    int distance = 0;

    // typedef pair<int, Node> P;
    /**
     * @brief This is the que ranked of distance from root node
     * 
     */
    priority_queue<Node*> fringeList;

    ifstream file(inputFile);
    if (file.is_open())
    {

        vector<string> first;
        vector<string> second;
        vector<int> dist;
        string k;
        string city1;
        string city2;
        int theD;
        getline(file, k);
        // bool firstCity = true;
        bool matchCity = false;

        while (k != "END OF INPUT")
        {

            /**
             * @brief This is for parsing the file
             * 
             * @return istringstream 
             */
            istringstream line(k);
            // cout << k << endl;
            line >> city1 >> city2 >> theD;
            first.push_back(city1);
            second.push_back(city2);
            dist.push_back(theD);

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
            Node* newCity = new Node;
            newCity->name = city1;
            newCity->destination = city2;
            newCity->dist = theD;
            newCity->pathDist = currentPathDist + theD;

            connections.push_back(newCity);
            if (newCity->name == originCity)
            {
                fringeList.push(newCity);
            }

            getline(file, k);
        }
    }

    else
    {
        cout << "Failed to open file: " << endl;
    }
    for (auto connection : connections)
    {
        cout << connection->dist << endl;
    }
    /////////////////////////Graph made/////////////////////////////////////////
    while (fringeList.size() != 0)
    {
        // Get first from fringe list and expand int
        bool expanded = false;
        Node* currentNode = fringeList.top();
        currentPathDist = currentNode->pathDist;
        

        fringeList.pop();
        cout << "Checking: " << currentNode->name << endl;
        if (currentNode->name == destinationCity)
        {
            cout << "FOUND!!!!" << endl;
//            for (auto traveredNode : expandedCities)
//            {
//                cout << traveredNode << endl;
//            }
            Node* checker = currentNode->source;
            string parent = checker->name;
            while (parent != originCity)
            {
                cout << " " << parent << " ";
                checker = checker->source;
                parent = checker->name;
            }

         
            break;
            // Put something here to end the program
        }
        else
        {
            /* code */

            for (auto city : expandedCities)
            {
                if (city == currentNode->destination)
                {
                    expanded = true;
                    break;
                }
            }
            if (!expanded)
            {
                expandedCities.push_back(currentNode->name);

                for (auto connection : connections)
                {
                    // grab all possible connections from city
                    if (connection->name == currentNode->destination)
                    {
                        // Matching Connection add it to fringe list
                        Node *parent = currentNode;
                        connection->source = currentNode;

                        fringeList.push(connection);
                    }
                }
            }
        }
    }
    cout << "No Possible path found at infinate dist" << endl;
}
