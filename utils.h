#ifndef UTILS_H_INCLUDED
#define UTILS_H_INCLUDED

#include <string>
#include <fstream>
#include <sstream>
using namespace std;

void stringToArray(string numbers, int *ar)
{
    string T;    
    stringstream X(numbers);     
    int count = 0;
    while (getline(X, T, ',')) {
        ar[count] = stoi(T);
        count++;    
    }    
}


void readArray(string filename, int *ar, int length)
{
    fstream newfile;
    newfile.open(filename+".csv", ios::in);
    string numberString;
    int i = 0;
    if (newfile.is_open())
    {
      while(getline(newfile, numberString,'\n'))
      {
         cout<<numberString<<endl;
      }
      newfile.close();
    }
}

#endif // UTILS_H_INCLUDED
