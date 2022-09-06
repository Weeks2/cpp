#include<iostream>
#include<stdlib.h>
#include<time.h>
#include <fstream>
using namespace std;

void bubbleSort(int *arraySize, int len);
void GenerateRandomInputFiles();
void GenerateSortedInputFiles();
void GenerateReverseInputFiles(); 

int A1000[1000], B4000[4000], C8000[8000], D10000[10000], E40000[40000], F80000[80000], G100000[100000], H400000[400000], I800000[800000], J1000000[1000000];

int main()
{
    GenerateRandomInputFiles();
    //GenerateSortedInputFiles();
    //GenerateReverseInputFiles(); 
    cout<<endl;
    return 0;
}

void GenerateRandomInputFiles() 
{
    int randonNumber, first = 0;
    srand(time(0));
    for(int i = 0; i < 1000000; i++)
    {
        randonNumber = rand()%(1000000+1-first)+first;
        cout<<randonNumber<<endl;
        if(i < 1000) { A1000[i] = randonNumber;}
        if(i < 4000) { B4000[i] = randonNumber;}
        if(i < 8000) { C8000[i] = randonNumber;}
        if(i < 10000) { D10000[i] = randonNumber;}
        if(i < 40000) { E40000[i] = randonNumber;}
        if(i < 80000) { F80000[i] = randonNumber;}
        if(i < 100000) { G100000[i] = randonNumber;}
        if(i < 400000) { H400000[i] = randonNumber;}
        if(i < 800000) { I800000[i] = randonNumber;}
        if(i < 1000000) { J1000000[i] = randonNumber;}
        if(i==1000000-1) {cout<<"STARTED:"<<J1000000[0]<<", FINISHED:"<<J1000000[i]<<endl;}       
     }
}

void GenerateSortedInputFiles() {}
void GenerateReverseInputFiles() {}

void bubbleSort(int arraySize[], int len)
{
 int temp;
 for(int i = 0; i< len; i++)
 {
   for(int j = i+1; j<len; j++)
   {
      if(arraySize[j] < arraySize[i])
      {
         temp = arraySize[i];
         arraySize[i] = arraySize[j];
         arraySize[j] = temp;
      }
    }
  }
}
