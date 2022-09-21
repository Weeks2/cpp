#ifndef UTILSSORT_H_INCLUDED
#define UTILSSORT_H_INCLUDED

#include <stdlib.h>
#include <time.h>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <stdio.h>
#include <cstring>

void fillArray(int *ar, int length);
void readArray(string filename, int *ar, int length);
void printArray(string flag,int *ar, int length);

void removeFile(string filename);
void writeFile(string flag,int *ar, int length);


void fillArray(int *ar, int length)
{
    cout<<"GERETING NUMBERS:"<<length;
    int randonNumber, first = 0;
    srand(time(0));
    for (int i = 0; i < length; i++)
    {
        randonNumber = rand()%(1000000+1-first)+first;
        ar[i] = randonNumber;

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
      while(getline(newfile, numberString,','))
      {
         ar[i] = stoi(numberString);
      }
      newfile.close();
    }
}

void printArray(string flag, int *ar, int length)
{
    for(int i=0; i<length; i++)
    {
       cout<<flag<<ar[i]<<endl;
    }
}

void removeFile(string filename)
{
    string filename_ = filename + ".csv";
    int n = filename_.length();
    char letters[n + 1];
    strcpy(letters,filename_.c_str());

    if(remove(letters) != 0 )
    {
     //cout<<"!DELETED "<<filename<<endl;
     //perror( "Error deleting file" );
    }
    else
    {
     cout<<"DELETED "<<filename_<<endl;
     //puts( "File successfully deleted" );
    }
}

void writeFile(string flag,int *ar, int length)
{
    fstream fout;
    fout.open(flag+".csv", ios::out | ios::app);

    for (int i = 0; i < length; i++)
    {
        fout << ar[i] << (i < length-1 ? ",":"");
    }
}

#endif // UTILSSORT_H_INCLUDED
