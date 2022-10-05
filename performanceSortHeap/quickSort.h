#ifndef QUICKSORT_H_INCLUDED
#define QUICKSORT_H_INCLUDED

void quickSort(int *ar, int low, int high);
int partition_(int *ar, int l, int r);

void quickSort(int *ar, int low, int high)
{
    if (low < high)
    {
        int p = partition_(ar, low, high);
        quickSort(ar, 0, p - 1);
        quickSort(ar, p + 1, high);
    }
}

int partition_(int *ar, int l, int r)
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
#endif // QUICKSORT_H_INCLUDED
