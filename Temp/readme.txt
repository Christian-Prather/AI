1- Group members:

Christian Prather    CWID: 107
Abdulaziz AlFozan    CWID: 10845158

2- Programming Language: C++

3- OS: Linux (Ubunut 19.04) & Mac OS

4- Compile Instructions: 
Program was tested with two compile options 1) Clion with this option the run command was not able to handle the arguments being passed in to you must locate the compiled executable and run it from command line.
The other option is to com the code with gcc and cmake this was done with Visual Studio code and the cmake plugin from Microsoft called "CMake Tools" before installing the extension please make sure you have cmake instlled (on linux this is as simple as sudo apt install cmake) once you have both you should be able to hit f7 in vs code and it will compile. The first time this is done it will need to configure.

Code Structure:
 
The code consists of different parts:

 FIRST: READING THE FILE AND THE INITIAL AND FINAL CITIES USING fstream:
	
-The file is read using ifstream from the fstream library.	
-If the file exists it will be read, else, it will return a message that the file 	was not found.
- The starting city will be saved in a string named originCity the final city will be saved in a string named destinationCity and the file name will be saved in a string called  inputFile.

 SECOND: PARSING THE EACH LINE IN THE INPUTFILE using istringstream: 

- Each line in the file will be fetched using the getline function with a each line named k.
- Then the line will be parsed to string(city 1), string (city2) and int (theD) which is the distance between the two cities.

- Each of city1, city2 and theD will be pushed to each of their corresponding vectors which are : first, second and dist.

- The parsing will continue until it reaches the end of the txt file or it reaches the line "END OF INPUT" .

 THIRD: MAKING THE GRAPH:

- A class Node was created in a  separate file and it had multiple variables defined:
	string name: the name of the first city.
	string destination: the name of the second city.
	Node* source: a Node created to link connected  cities together.
	int dist: the distance between those two cities only.
	int pathDist: the total distance between the second city (string destination) and 	the origin city (the root).
	A friend operator overloading was done to build the comparison inside the priority  	queue.
- After parsing each line inside the txt file, a new Node is created under the name newCity and the information in each line are put in newCity, in addition the current path distance from the origin which is defined as currentPathDist.

-Each Node newCity will then be pushed to a vector of nodes under the name connections.



	
       
Execution: ah

