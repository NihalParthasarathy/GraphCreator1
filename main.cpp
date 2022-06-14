//Nihal Parthasrathy
//6/14/2022
//This code makes a grpah using an adjecency matrix where you can add vertexes, add edges, delete vertexs, delete edges, and print the matric out
#include <iostream>
#include <cstring>

using namespace std;


int main() {
  //Makes the adjancency matrix
  int** list = new int *[20];
  for (int a; a < 20; a++) {
    list[a] = new int[20];
  }
  bool running = true;

  //Sets everything in the list to -1
  for (int i = 0; i < 20; i++) {
    for (int j = 0; j < 20; j++) {
      list[i][j] = -1;
    }
  }
  //Sets the double array up
  char** array = new char *[20];
  for (int a; a < 20; a++) {
    array[a] = new char[10];
  }
  int index = 0;
  while (running == true) {//While loop
    cout << "would you like to Add a vertex(AV), Add an Edge(AE), Print (P), Remove a vertex(RV), Remove an edge(RE), or find shortest path(F)" << endl;
    char input[10];
    cin >> input;
    
    if (strcmp(input, "AV") == 0) {//Adds vertex to the vertex label array
      cout << "eneter label" << endl;
      cin >> array[index];
      index++;
    }
    else if (strcmp(input, "AE") == 0) {//Adds an edge to the vertex
      //Decleration of varubles
      char input1[10];
      char input2[10];
      int numput;
      int tempIndex1;
      int tempIndex2;
      bool temp1 = false;
      bool temp2 = false;
      
      cout << "enter first node name" << endl;
      cin >> input1;
      cout << "eneter second node name" << endl;
      cin >> input2;
      cout << "enter weight" << endl;
      cin >> numput;
      
      for (int i = 0; i < 20; i++) {//Finds if the vertex name is in the vertex label array
	if (strcmp(array[i], input1) == 0) {
	  tempIndex1 = i;
	  temp1 = true;
	}
      }
      for (int j = 0; j < 20; j++) {//Finds if the second vertex is in the label array
        if (strcmp(array[j], input2) == 0) {
          tempIndex2 = j;
	  temp2 = true;
        }
      }
      if (temp1 == true && temp2 == true) {//If both of the vertex in the array put the edge in
	list[tempIndex1][tempIndex2] = numput;
      }
      
    }
    else if (strcmp(input, "P") == 0) {//Prints out the adjacency matrix
      for (int i = 0; i < 20; i++) {
	for (int j = 0; j < 20; j++) {
	  cout << list[i][j] << " ";
	}
	cout << endl;
      }
    }
    else if (strcmp(input, "RV") == 0) {//Removes the vertex and all its edges
      char input[10];
      cout << "enter vertex name" << endl;
      cin >> input;
      for (int i = 0; i < 20; i++) {
	if (strcmp(array[i], input) == 0) {//Removes all the edges
	  for (int j = 0; j < 20; j++) {
	    list[i][j] = -1;
	    list[j][i] = -1;
	  }
	}
      }
      
    }
    else if (strcmp(input, "RE") == 0) {//Removes the edge from the matrix by setting to -1
      //Decleration
      char input1[10];
      char input2[10];
      int tempIndex1;
      int tempIndex2;
      bool temp1 = false;
      bool temp2 = false;
      
      cout << "enter vert 1" << endl;
      cin >> input1;
      cout << "eneter second vertex" << endl;
      cin >> input2;
      //If the first vertex is in the label array
      for (int i = 0; i < 20; i++) {
        if (strcmp(array[i], input1) == 0) {
          tempIndex1 = i;
          temp1 = true;
        }
      }
      //If the second charecor is in the label array
      for (int j = 0; j < 20; j++) {
        if (strcmp(array[j], input2) == 0) {
          tempIndex2 = j;
          temp2 = true;
        }
      }
      if (temp1 == true && temp2 == true) {//Sets the edge to -1
	list[tempIndex1][tempIndex2] = -1;
      }

    }
    else if (strcmp(input, "F") == 0) {//Calls the find function
      
    }
    else if (strcmp(input, "Q") == 0) {//Returns false
      running = false;
    }
    else {
      cout << "Please try again" << endl;
    }
  }
  return 0;
}

