#include <iostream>
using namespace std;

int main() {

  int age1 = 12;
  int age2 = 31;
  int age3 = 29;
  int* amy;
  int* bob;
  int** carol;
  
  //add code below this line
  
  amy = &age1;
  cout << "Amy's age is: ";
  cout << *amy << endl; //do not edit
  
  bob = &age2;
  cout << "Bob's age is: ";
  cout << *bob << endl; //do not edit
  
  int* temp = &age3;
  carol = &temp;
  cout << "Carol's age is: ";
  cout << **carol << endl; //do not edit
  
  
  //add code above this line 
  
  return 0;
  
}