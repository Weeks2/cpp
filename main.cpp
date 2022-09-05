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
    for(int i = 0; i< 1000000; i++)
    {
        randonNumber = rand()%(1000000+1-first)+first;
        if(i < 1000) 
        {
            A1000[i] = randonNumber;
        }
        else 
        { 
            sortA1000();
            cout<<A1000[0]<<"--1"<<endl;
            cout<<A1000[1]<<"--2"<<endl;
            cout<<A1000[2]<<"--3"<<endl;
            cout<<A1000[997]<<"--997"<<endl;
            cout<<A1000[998]<<"--998"<<endl;
            cout<<A1000[999]<<"--999"<<endl;
            break;
        }
    }
}
