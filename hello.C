#include <iostream>

void PrintMessage (string msg);

int main(int argc, char * argv[]) {

   string msg = "Hello World";
   if (argc> 1) {
      if (!strcmp(argv[1] , "Pig") ){
          msg = "ElloHay OrldWay!"
      }
   }

   PrintMessage(msg);

   return 0;
}

void PrintMessage(string msg) {
    cout << msg << endl;
}