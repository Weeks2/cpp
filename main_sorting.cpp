#include <iostream>
#include <chrono>
#include <unistd.h>

using namespace std;

#include "utilsSort.h"
#include "bubbleSort.h"
#include "insertionSort.h"
#include "quickSort.h"

int main()
{
    auto start = chrono::steady_clock::now();

    int length = 100;
    int ar[length];
    fillArray(ar,length);
    printArray("GENERATED -> ",ar,length);
    bubbleSort_opt(ar, length);

    auto end = chrono::steady_clock::now();
    cout << "time elapsed:"<< chrono::duration_cast<chrono::milliseconds>(end - start).count()<< " ms" << endl;
    return 0;
}
