#include<iostream>
#include<stdlib.h>
#include<string>
#include<time.h>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

int partition(int *ar, int l, int r);
void quickSort(int *ar, int low, int high);
void fillArray(int *ar, int length);
void printArray(string flag,int *ar, int length);

int main()
{
    int length = 100000; // 1M RESTRICCION MEMORY
    int ar[length];
    fillArray(ar,length);
    printArray("GENERATED:",ar,length);
    cout<<endl;
    quickSort(ar, 0, length - 1);
    printArray("SORTED:",ar,length);
    return 0;
}

void fillArray(int *ar, int length)
{
    int randonNumber, first = 0;
    srand(time(0));
    for (int i = 0; i < length; i++)
    {
        randonNumber = rand()%(1000000+1-first)+first;
        ar[i] = randonNumber;
    }
}

void printArray(string flag, int *ar, int length)
{
    for(int i=0; i<length; i++)
    {
       cout<<flag<<ar[i]<<endl;
    }
}

void quickSort(int *ar, int low, int high)
{
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
