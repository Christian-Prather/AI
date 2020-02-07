1- Group members:

Christian Prather    CWID: 107
Abdulaziz AlFozan    CWID: 10845158
-------------------------------------
2- Programming Language: C++
-------------------------------------
3- OS: Linux (Ubunut 19.04) & Mac OS
-------------------------------------
4- Compile Instructions: 
Program was tested with two compile options 1) Clion with this option the run command was not able to handle the arguments being passed in to you must locate the compiled executable and run it from command line.
The other option is to com the code with gcc and cmake this was done with Visual Studio code and the cmake plugin from Microsoft called "CMake Tools" before installing the extension please make sure you have cmake instlled (on linux this is as simple as sudo apt install cmake) once you have both you should be able to hit f7 in vs code and it will compile. The first time this is done it will need to configure.
-------------------------------------
5- Code Structure:
 
The code consists of different parts:

TABLE OF CONTENTS:

	*FIRST: READING THE FILE AND THE INITIAL AND FINAL CITIES USING fstream.
	*SECOND: PARSING THE EACH LINE IN THE INPUTFILE using istringstream.
	*THIRD: MAKING THE GRAPH.
	*FOURTH: FINDING THE PATH.
	*FIFTH: PRINTING THE RESULT.


 ***FIRST: READING THE FILE AND THE INITIAL AND FINAL CITIES USING fstream:
	
-The file is read using ifstream from the fstream library.	
-If the file exists it will be read, else, it will return a message that the file 	was not found.
- The starting city will be saved in a string named originCity the final city will be saved in a string named destinationCity and the file name will be saved in a string called  inputFile.

 ***SECOND: PARSING THE EACH LINE IN THE INPUTFILE using istringstream: 

- Each line in the file will be fetched using the getline function with a each line named k.
- Then the line will be parsed to string(city 1), string (city2) and int (theD) which is the distance between the two cities.

- Each of city1, city2 and theD will be pushed to each of their corresponding vectors which are : first, second and dist.

- The parsing will continue until it reaches the end of the txt file or it reaches the line "END OF INPUT" .

 ***THIRD: MAKING THE GRAPH:

- A class Node was created in a  separate file (node.h) and it had multiple variables defined:
	string name: the name of the first city.
	string destination: the name of the second city.
	Node* source: a Node created to link connected  cities together.
	int dist: the distance between those two cities only.
	int pathDist: the total distance between the second city (string destination) and 	the origin city (the root).
	A friend operator overloading was done to build the comparison inside the priority  	queue.
- After parsing each line inside the txt file, a new Node is created under the name newCity and the information in each line are put in newCity, in addition the current path distance from the origin which is defined as currentPathDist.

-Each Node newCity will then be pushed to a vector of nodes under the name connections.

- Any nodes with that have the origin city that was entered by the user as the first city will be pushed into the fringeList (a priority queue of nodes).

 ***FOURTH: FINDING THE PATH:

The path will be found using the priority queue (fringeList), inside a while loop with the condition that the size of fringeList does not equal zero, inside the loop, this will happen:
	- The priority queue will have the node with the  least path from the origin at 	the top of it, the top node will be extracted from the queue.
	- If the name in node matches that destination that we want to reach, then the 		program will track the parent of each node starting from the destination and 		ending with the origin city to build the wanted path, this will be done through   	*Node source that was defined in the Node class, the program will then break from 	the loop.


	-If the destination city is not found then the program will expand the current  	node and push its children into the fringeList (priority queue), it will check  	with a vector of strings (expandedCities) to check if the Node was expanded or  	not. If it is then it will not expand it again. The program will continue with 		that until the destination city is found.

***FIFTH: PRINTING THE RESULT: 

- If the fringeList is empty from the beginning or became empty and the shortest path to the destination city was not found, then it will return the result as infinity.

- Else, it will track the path from the destination city to the origin city and it will print the shortest path in the wanted format.


       
Execution: ah

