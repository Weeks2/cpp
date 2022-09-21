#include <iostream>
#include <chrono>
#include <unistd.h>

using namespace std;

#include "bubbleSort.h"
#include "insertionSort.h"
#include "quickSort.h"

int main()
{
    auto start = chrono::steady_clock::now();
    sleep(3);
    auto end = chrono::steady_clock::now();
    cout << "time in milliseconds:"<< chrono::duration_cast<chrono::milliseconds>(end - start).count()<< " ms" << endl;

    return 0;
}
