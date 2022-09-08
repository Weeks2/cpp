#include<iostream>
#include<stdlib.h>
#include<time.h>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>
using namespace std;

int NUM_MAX = 1000000;
int A1000[1000], B4000[4000], C8000[8000], D10000[10000],E40000[40000], F80000[80000], G100000[100000],H400000[400000], I800000[800000], J1000000[1000000];

void reverse(int *arr, int lenght);
int partition(int *ar, int l, int r);

void quickSort(int *ar, int low, int high);
void bubbleSort(int *ar, int length);
void printArray(string flag,int *ar, int length);

void GenerateRandomInputFiles();
void GenerateSortedInputFiles();
void GenerateReverseInputFiles();


int main()
{
    GenerateRandomInputFiles();
    //printArray("A1000:",A1000,1000);
   // GenerateSortedInputFiles();
    //GenerateReverseInputFiles();
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
        if(i < 1000) { A1000[i] = randonNumber;}
        if(i < 4000) { B4000[i] = randonNumber;}
        /**
        if(i < 8000) { C8000[i] = randonNumber;}
        if(i < 10000) { D10000[i] = randonNumber;}
        if(i < 40000) { E40000[i] = randonNumber;}
        if(i < 80000) { F80000[i] = randonNumber;}
        if(i < 100000) { G100000[i] = randonNumber;}
        if(i < 400000) { H400000[i] = randonNumber;}
        if(i < 800000) { I800000[i] = randonNumber;}
        if(i < NUM_MAX) { J1000000[i] = randonNumber;}
        if(i==NUM_MAX-1) {cout<<"STARTED:"<<J1000000[0]<<", FINISHED:"<<J1000000[i]<<endl;}
        **/
    }
}
void GenerateSortedInputFiles()
{
     bubbleSort(A1000,1000);
     bubbleSort(B4000,4000);
     /**
     bubbleSort(C8000,8000);
     bubbleSort(D10000,10000);
     bubbleSort(E40000,40000);
     bubbleSort(F80000,80000);
     bubbleSort(G100000,100000);
     bubbleSort(H400000,400000);
     bubbleSort(I800000,800000);
     bubbleSort(J1000000,1000000);
     **/
}
void GenerateReverseInputFiles()
{
    reverse(A1000,1000);
    /**
    reverse(B4000,4000);
    reverse(C8000,8000);
    reverse(D10000,10000);
    reverse(E40000,40000);
    reverse(F80000,80000);
    reverse(G100000,100000);
    reverse(H400000,400000);
    reverse(I800000,800000);
    reverse(J1000000,1000000);
    **/
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
         //cout<<"bubbleSort:"<<temp<<endl;
      }
    }

  }
}

void quickSort(int *ar, int low, int high)
{
    //quickSort(ar, 0, length - 1);
    if (low < high)
    {
        int p = partition(ar, low, high);
        quickSort(ar, 0, p - 1);
        quickSort(ar, p + 1, high);
        cout<<"QUICKSORT PARTITION:"<<p<<endl;
    }
}

int partition(int *ar, int l, int r)
{
    int pivot = ar[r];
    int i = l;
    for (int j = l; j < r; j++)
    {
        if (ar[j] <= pivot)
        {
            int t = ar[j];
            ar[j] = ar[i];
            ar[i] = t;
            i++;
        }
    }
    int t = ar[i];
    ar[i] = ar[r];
    ar[r] = t;
    return i;
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
