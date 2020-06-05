#include <iostream>
#include <string.h>

/*
A program to say hello to the world
*/

using namespace std;


// this is a new comment

void PrintMessage (string msg);

int main(int argc, char * argv[])  {

   string msg = "Hello World";
   bool goodArg = true;

   if (argc> 1) {
      goodArg = false;
      if (!strcmp(argv[1] , "Pig") ){
          msg = "ElloHay OrldWay!";
	  goodArg = true;
      }
   }

   if (not goodArg) {
      cout << "Error: unknown language " << argv[1] << endl;
   } else {
      PrintMessage(msg);

      cout << "Hello to you too" << endl;
   }

   return 0;
}

void PrintMessage(string msg) {
    cout << msg << endl;
}
