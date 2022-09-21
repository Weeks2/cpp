#ifndef INSERTIONSORT_H_INCLUDED
#define INSERTIONSORT_H_INCLUDED

void insertionSort(int *ar, int length);

void insertionSort(int *ar, int length)
{
    int i, key, j;
    for (i = 1; i < length; i++)
    {
        key = ar[i];
        j = i - 1;

        while (j >= 0 && ar[j] > key)
        {
            ar[j + 1] = ar[j];
            j = j - 1;
        }
        ar[j + 1] = key;
    }
}

#endif // INSERTIONSORT_H_INCLUDED
