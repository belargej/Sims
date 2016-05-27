#include <iostream>
#include <fstream>

#include "main.h"

int main(int argc, char* argv[]){

  std::cout << "Hello" << std::endl;

  if(argc!=2) return 0;
  
  ReadInput(argv[1]);

  return 0;
}
