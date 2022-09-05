#include<iostream>
#include<stdlib.h>
#include<time.h>
#include <fstream>
using namespace std;

void GenerateRandomInputFiles();
void GenerateSortedInputFiles();
void GenerateReverseInputFiles(); 

int A1000[1000], B4000[4000], C8000[8000], D10000[10000], E40000[40000], F80000[80000], G100000[100000], H400000[400000], I800000[800000], J1000000[1000000];

void sortA1000() 
{
  int i, j,temp;
 for( i = 0; i< 1000; i++) 
 {
   for( j = i+1; j<1000; j++)
   {
      if(A1000[j] < A1000[i]) 
      {
         temp = A1000[i];
         A1000[i] = A1000[j];
         A1000[j] = temp;
      }
    }    
  }
}

int main()
{
    GenerateRandomInputFiles();
    cout<<endl;
    return 0;
}

void GenerateRandomInputFiles() 
{
    int randonNumber, first = 0;
    srand(time(0));
    cout<<"starting"<<endl;
    for(int i = 0; i< 1000000; i++)
    {
        randonNumber = rand()%(1000000+1-first)+first;
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
        if(i==1000000) {cout<<J1000000[i]<<"end";}
        cout<<i<<endl;
    }
    cout<<"fisnihed"<<endl;
}
