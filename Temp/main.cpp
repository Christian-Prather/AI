#include <iostream>
#include <fstream>
#include <queue>
#include <sstream>
#include "node.h"
using namespace std;

int main(int argc, char* argv[]) 
{
    string inputFile = argv[1];
    string originCity = argv[2];
    string destinationCity = argv[3];





    int distance = 0;

    priority_queue<pair<Node*, int>> cities;
    vector <Node *> masterList;

    // string start1;
    // string file1;
    // string end;
    // cout << "find_route ";
    // cin >> file1 >> start1 >> end;

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

    while(k != "END OF INPUT")
    {
       

        istringstream line(k);
        // cout << k << endl;
        line >> city1 >> city2 >> theD;
        first.push_back(city1);
        second.push_back(city2);
        dist.push_back(theD);
         getline(file, k);
    }

    int indexOfNode1 = 0;
    int indexOfNode2 = 0;
    bool matchedFirst = false;
    bool matchedSecond = false;
    int parsedIndex = 0;

    for(int i =0; i<first.size(); i++)
    {
        cout << first.at(i) << " " << second.at(i) << " " << dist.at(i) << endl;
        // Generate the nodes
        for (int j = 0; j < masterList.size(); j++)
        {
            if (masterList.at(j)->name == first.at(i))
            {
                // Theres a matching Node we need to jsut append to its children
                //masterList.at(j)->children.push_back()
                matchedFirst = true;
                indexOfNode1 = j;
                         

            }
            if (masterList.at(j)->name == second.at(i))
            {
                // Found a mathcing second node
                matchedSecond = true;
                indexOfNode2 = j;

            } 

        }

        //Build the nodes
        if(matchedFirst)
        {
            if(matchedSecond)
            {

                masterList.at(indexOfNode1)->children.push_back(make_pair(masterList.at(indexOfNode2), dist.at(i)));
            }
            else
            {
                Node* temp = new Node();
                temp->name = second.at(i);
                masterList.push_back(temp);

                masterList.at(indexOfNode1)->children.push_back(make_pair(temp, dist.at(i)));

            }
            
        }
         else if(matchedSecond)
        {
            if(matchedFirst)
            {

                masterList.at(indexOfNode1)->children.push_back(make_pair(masterList.at(indexOfNode2), dist.at(i)));
            }
            else
            {
                Node* temp = new Node();
                temp->name = second.at(i);
                masterList.push_back(temp);

                masterList.at(indexOfNode2)->children.push_back(make_pair(temp, dist.at(i)));
                
            }
            
        }



    }
    }

    else
    {
        cout << "Failed to open file: " << endl;
    }
    
}
