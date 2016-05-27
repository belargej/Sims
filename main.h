#ifndef MAIN_H
#define MAIN_H

#include <fstream>


void ReadInput(std::string InFile){
  std::ifstream in;
  in.open(InFile.c_str());
  if(in.fail()) return;
  std::string eat;
  while(!(in.eof())){
    getline(in,eat);
    std::cout << eat << std::endl;
    
  }
  

}

#endif 
