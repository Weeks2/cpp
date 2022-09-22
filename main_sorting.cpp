#include <iostream>
#include <chrono>
#include <unistd.h>

using namespace std;

#include "utilsSort.h"
#include "bubbleSort.h"
#include "insertionSort.h"
#include "quickSort.h"

int A1000[1000],B4000[4000],C8000[8000],D10000[10000];

void generateArray(string file,int *ar, int length);
void orderArrayBubbleSort(string file,int *ar, int length);
void orderArrayQuickSort(string file,int *ar, int length);
void orderArrayInsertionSort(string file,int *ar, int length);


int main()
{
    generateArray("A1000",A1000,1000);
    generateArray("B4000",B4000,4000);
    generateArray("C8000",C8000,8000);
    generateArray("D10000",D10000,10000);

    orderArrayBubbleSort("A1000",A1000,1000);
    orderArrayBubbleSort("B4000",B4000,4000);
    orderArrayBubbleSort("C8000",C8000,8000);
    orderArrayBubbleSort("D10000",D10000,10000);


    orderArrayQuickSort("A1000",A1000,1000);
    orderArrayQuickSort("B4000",B4000,4000);
    orderArrayQuickSort("C8000",C8000,8000);
    orderArrayQuickSort("D10000",D10000,10000);


    orderArrayInsertionSort("A1000",A1000,1000);
    orderArrayInsertionSort("B4000",B4000,4000);
    orderArrayInsertionSort("C8000",C8000,8000);
    orderArrayInsertionSort("D10000",D10000,10000);


    return 0;
}

void orderArrayBubbleSort(string file, int *ar, int length)
{
    auto start = chrono::steady_clock::now();
    readArray(file,ar,length);
    bubbleSort_opt(ar, length);
    auto end = chrono::steady_clock::now();
    float elapsed = chrono::duration_cast<chrono::milliseconds>(end - start).count();
    writeDataSetLine(file + "_time_bubblesort", elapsed,length);
    cout << "time elapsed:"<< elapsed<< " ms" << endl;
}

void orderArrayQuickSort(string file, int *ar, int length)
{
    auto start = chrono::steady_clock::now();
    readArray(file,ar,length);
    quickSort(ar, 0, length - 1);
    auto end = chrono::steady_clock::now();
    float elapsed = chrono::duration_cast<chrono::milliseconds>(end - start).count();
    writeDataSetLine(file + "_time_quicksort", elapsed,length);
    cout << "time elapsed:"<< elapsed<< " ms" << endl;
}

void orderArrayInsertionSort(string file, int *ar, int length)
{
    auto start = chrono::steady_clock::now();
    readArray(file,ar,length);
    insertionSort(ar, length);
    auto end = chrono::steady_clock::now();
    float elapsed = chrono::duration_cast<chrono::milliseconds>(end - start).count();
    writeDataSetLine(file + "_time_insertionsort", elapsed,length);
    cout << "time elapsed:"<< elapsed<< " ms" << endl;
}


void generateArray(string file, int *ar, int length)
{
    fillArray(ar,length);
    writeFile(file,ar,length);
    printArray(file + " GENERATED -> ", ar, length);

}
