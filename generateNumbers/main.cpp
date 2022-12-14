#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <stdio.h>
#include <cstring>

using namespace std;

int NUM_MAX = 1000000;
int A1000[1000], B4000[4000], C8000[8000], D10000[10000],E40000[40000], F80000[80000], G100000[100000],H400000[400000], I800000[800000], J1000000[1000000];
int T20[20];

void removeFile(string filename);
void writeFile(string flag,int *ar, int length);
void writeArrays(string flag);
void readArray(string filename, int *ar, int length);
void printArray(string flag,int *ar, int length);

void bubbleSort(int *ar, int length);
void reverse(int *arr, int lenght);

void GenerateRandomInputFiles();
void GenerateSortedInputFiles();
void GenerateReverseInputFiles();

void test(int *ar, int length);
void testAll();

int main()
{
    GenerateRandomInputFiles();
    GenerateSortedInputFiles();
    GenerateReverseInputFiles();
    return 0;
}

void GenerateRandomInputFiles()
{
    int randonNumber, first = 0;
    srand(time(0));
    for(int i = 0; i < NUM_MAX; i++)
    {
        randonNumber = rand()%(NUM_MAX+1-first)+first;
        cout<<"GENERATING:"<<randonNumber<<endl;
        if(i < 20) { T20[i] = randonNumber;} else { test(T20,20); break;} // DELETE
        if(i < 1000) { A1000[i] = randonNumber;}
        if(i < 4000) { B4000[i] = randonNumber;}
        if(i < 8000) { C8000[i] = randonNumber;}
        if(i < 10000) { D10000[i] = randonNumber;}
        if(i < 40000) { E40000[i] = randonNumber;}
        if(i < 80000) { F80000[i] = randonNumber;}
        if(i < 100000) { G100000[i] = randonNumber;}
        if(i < 400000) { H400000[i] = randonNumber;}
        if(i < 800000) { I800000[i] = randonNumber;}
        if(i < NUM_MAX) { J1000000[i] = randonNumber;}
        if(i==NUM_MAX-1) {cout<<"STARTED:"<<J1000000[0]<<", FINISHED:"<<J1000000[i]<<endl;}
        //writeArrays("Random");
    }
}

void GenerateSortedInputFiles()
{
     bubbleSort(A1000,1000);
     bubbleSort(B4000,4000);
     bubbleSort(C8000,8000);
     bubbleSort(D10000,10000);
     bubbleSort(E40000,40000);
     bubbleSort(F80000,80000);
     bubbleSort(G100000,100000);
     bubbleSort(H400000,400000);
     bubbleSort(I800000,800000);
     bubbleSort(J1000000,1000000);
    //writeArrays("Sorted");
}

void GenerateReverseInputFiles()
{
    reverse(A1000,1000);
    reverse(B4000,4000);
    reverse(C8000,8000);
    reverse(D10000,10000);
    reverse(E40000,40000);
    reverse(F80000,80000);
    reverse(G100000,100000);
    reverse(H400000,400000);
    reverse(I800000,800000);
    reverse(J1000000,1000000);
    //writeArrays("Reverse");
}

void bubbleSort(int *ar,int length)
{
 int temp;
 for(int i = 0; i< length; i++)
 {
   for(int j = i+1; j<length; j++)
   {
      if(ar[j] < ar[i])
      {
         temp = ar[i];
         ar[i] = ar[j];
         ar[j] = temp;
      }
    }
  }
}

void reverse(int *arr, int lenght)
{
    reverse(arr, arr + lenght);
}

void printArray(string flag, int *ar, int length)
{
    for(int i=0; i<length; i++)
    {
       cout<<flag<<ar[i]<<endl;
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

void writeArrays(string flag)
{
    writeFile("1000"+flag,A1000,1000);
    writeFile("4000"+flag,B4000,4000);
    writeFile("8000"+flag,C8000,8000);
    writeFile("10000"+flag,D10000,10000);
    writeFile("40000"+flag,E40000,40000);
    writeFile("80000"+flag,F80000,80000);
    writeFile("100000"+flag,G100000,100000);
    writeFile("400000"+flag,H400000,400000);
    writeFile("800000"+flag,I800000,800000);
    writeFile("1000000"+flag,J1000000,1000000);
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

/**
  g++ main.cpp -o main
  https://www.onlinegdb.com/online_c++_compiler
  https://www.codeblocks.org/downloads/binaries/
**/

void test(int *ar, int length)
{

  string prefix = to_string(length);
  string random = prefix + "Random";
  string sorted = prefix + "Sorted";
  string reversed = prefix +"Reverse";

  removeFile(random);
  removeFile(sorted);
  removeFile(reversed);

  cout<<endl<<"REPORT "<<endl;
  writeFile(random,ar,length);
  cout<<"Random[0]:"<<ar[0]<<endl;

  bubbleSort(ar,length);
  writeFile(sorted,ar,length);
  cout<<"Sorted[0]:"<<ar[0]<<" Sorted[LAST]:"<<ar[length-1]<<endl;

  reverse(ar,length);
  writeFile(reversed,ar,length);
  cout<<"Reverse[0]:"<<ar[0]<<endl;
}

void testAll()
{
  writeArrays("Random");
  writeArrays("Sorted");
  writeArrays("Reverse");
}
