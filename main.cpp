#include <iostream> 
#include <stdio.h> 
#include <stdlib.h> 
using namespace std; 

int main (int argc, char*argv[]) 
{ 
  char operand; 
  operand = argv [2][0]; 
  if ((isdigit (argv [1][0])) && (isdigit (argv [3][0]))) 
    { 
    switch (operand) 
      { 
      case '+': 
      cout<< atoi (argv[1]) + atoi (argv[3])<< endl; 
        break; 
      case '-': 
      cout<< atoi (argv[1]) - atoi (argv[3])<< endl; 
        break; 
          default: 
      cerr<< "error"« endl; 
      }; 
    } 
  else { cerr<<"ERROR"<< endl;}; 
}
