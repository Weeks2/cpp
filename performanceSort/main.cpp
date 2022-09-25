#include <iostream>
#include <chrono>
#include <unistd.h>
#include <stdlib.h>

using namespace std;

#include "utilsSort.h"
#include "bubbleSort.h"
#include "insertionSort.h"
#include "quickSort.h"

int A1000[1000],B4000[4000],C8000[8000],D10000[10000];

void generateArray(string file,int *ar, int length);
void sortArray(string file, string method, int *ar, int length);
void process(string file, int *ar, int length);
void plotDataset();

int main()
{
    cout<<"V1.0"<<"-----------------"<<endl;
    
    process("A1000",A1000,1000);
    process("B4000",B4000,4000);
    process("C8000",C8000,8000);
    process("D10000",D10000,10000);

    plotDataset();

    return 0;
}

void generateArray(string file, int *ar, int length)
{
    fillArray(ar,length);
    writeFile(file,ar,length);
    printArray(file + " GENERATED -> ", ar, length);
}

void sortArray(string file, string method, int *ar, int length)
{
    auto start = chrono::steady_clock::now();
    readArray(file,ar,length);
    
    if(method=="bubblesort")  { bubbleSort_opt(ar, length); }
    if(method=="quicksort")   { quickSort(ar, 0, length - 1); }
    if(method=="insertionsort") { insertionSort(ar, length); }
    
    auto end = chrono::steady_clock::now();
    writeDataSetLine("dataset", method, chrono::duration_cast<chrono::milliseconds>(end - start).count(), length);
}

void process(string file, int *ar, int length) 
{
    generateArray(file,ar,length);
    sortArray(file, "bubblesort",ar, length);
    sortArray(file, "quicksort",ar, length);
    sortArray(file, "insertionsort",ar, length);   
}

void plotDataset()
{
    system("python3 dataset.py");
    fstream newfile;
    newfile.open("dataset.csv", ios::in);
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
