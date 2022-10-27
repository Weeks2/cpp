#ifndef UTILS_H_INCLUDED
#define UTILS_H_INCLUDED

#include <string>
#include <fstream>
#include <sstream>

using namespace std;

int ar[7][7];

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
         int a[7];
         stringToArray(numberString,a);
         for (int i = 0; i < 7; i++)
         {
            ar[ii][i] = a[i];
         }
         ii++;
      }
      newfile.close();
    }
}
#endif // UTILS_H_INCLUDED
