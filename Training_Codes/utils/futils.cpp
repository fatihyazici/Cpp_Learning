#include <iostream>
#include <vector>

#include <fstream>


#include "futils.h"

using namespace std;




void rname()
{
    ifstream read_name_file("names.txt");

    char* name;
    read_name_file.read(name, 1);


    cout<< name;
}

int main () {

  std::ifstream is ("names.txt", std::ifstream::binary);
  if (is) {
    // get length of file:
    is.seekg (0, is.end);
    int length = is.tellg();
    is.seekg (0, is.beg);

    char * buffer = new char [length];

    std::cout << "Reading " << length << " characters... ";
    // read data as a block:
    is.read (buffer,length);

    if (is)
      std::cout << "all characters read successfully.";
    else
      std::cout << "error: only " << is.gcount() << " could be read";
    is.close();


    // ...buffer contains the entire file...

    delete[] buffer;
  }
  return 0;
}