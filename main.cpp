#include <iostream>
#include <cstring>

using namespace std;




int main() {
  int** list = new int *[20];
  for (int a; a < 20; a++) {
    list[a] = new int[20];
  }
  bool running = true;
  for (int i = 0; i < 20; i++) {
    for (int j = 0; j < 20; j++) {
      list[i][j] = -1;
    }
  }
  char** array = new char *[20];
  for (int a; a < 20; a++) {
    array[a] = new char[10];
  }
  int index = 0;
  while (running == true) {
    cout << "would you like to Add a vertex(AV), Add an Edge(AE), Print (P), Remove a vertex(RV), Remove an edge(RE), or find shortest path(F)" << endl;
    char input[10];
    cin >> input;
    if (strcmp(input, "AV") == 0) {//
      cout << "eneter label" << endl;
      cin >> array[index];
      cout << array[index] << endl;
      index++;
    }
    else if (strcmp(input, "AE") == 0) {//Calls the print function
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
      for (int i = 0; i < 20; i++) {
	if (strcmp(array[i], input1) == 0) {
	  cout << "hi" << endl;
	  tempIndex1 = i;
	  temp1 = true;
	}
      }
      for (int j = 0; j < 20; j++) {
        if (strcmp(array[j], input2) == 0) {
	  cout << "hello" << endl;
          tempIndex2 = j;
	  temp2 = true;
        }
      }
      if (temp1 == true && temp2 == true) {
	cout << "here" << endl;
	list[tempIndex1][tempIndex2] = numput;
	cout << list[tempIndex1][tempIndex2] << endl;
      }
      
    }
    else if (strcmp(input, "P") == 0) {//Calls the delete function
      for (int i = 0; i < 20; i++) {
	for (int j = 0; j < 20; j++) {
	  cout << list[i][j] << " ";
	}
	cout << endl;
      }
    }
    else if (strcmp(input, "RV") == 0) {//Calls the print function
      char input[10];
      cout << "enter vertex name" << endl;
      
    }
    else if (strcmp(input, "RE") == 0) {//Calls the delete function
      
    }
    else if (strcmp(input, "F") == 0) {//Calls the delete function
      
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
