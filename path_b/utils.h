#ifndef UTILS_H_INCLUDED
#define UTILS_H_INCLUDED

const int COUNT = 7; 

#include <string>
#include <fstream>
#include <sstream>

using namespace std;

int ar[COUNT][COUNT];

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

void readArray(string filename)
{
    fstream newfile;
    newfile.open(filename+".csv", ios::in);
    string numberString;
    int i = 0;
    if (newfile.is_open())
    {
      int ii = 0;
      while(getline(newfile, numberString,'\n'))
      {
         int a[COUNT];
         stringToArray(numberString,a);
         for (int i = 0; i < COUNT; i++)
         {
            ar[ii][i] = a[i];
         }
         ii++;
      }
      newfile.close();
    }
}
#endif // UTILS_H_INCLUDED
