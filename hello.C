#include <iostream>
#include <string.h>

/*
A program to say hello to the world
*/

using namespace std;

void PrintMessage (string msg);

int main(int argc, char * argv[]) {

   string msg = "Hello World";

   if (argc> 1) {
      if (!strcmp(argv[1] , "Pig") ){
          msg = "ElloHay OrldWay!";
      }
   }
//
   PrintMessage(msg);

   cout << "Hello to you too" << endl;

   return 0;
}

void PrintMessage(string msg) {
    cout << msg << endl;
}
