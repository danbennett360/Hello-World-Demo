#include <iostream>

/*
A program to say hello to the world 
*/

int main(int argc, char * argv[]) {

   string msg = "Hello World";
   if (argc> 1) {
      if (!strcmp(argv[1] , "Pig") ){
          msg = "ElloHay OrldWay!"
      }
   }
   cout << msg << endl;
   return 0;
}