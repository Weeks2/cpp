#ifndef BUBBLESORT_H_INCLUDED
#define BUBBLESORT_H_INCLUDED

void bubbleSort_opt(int *ar, int length);

void bubbleSort_opt(int *ar, int length)
{
    for(int i = 0; i < length; i++)
    {
      bool flag = false;
       for(int j=0; j < length-i-1; j++)
       {
          if(ar[j]>ar[j+1])
          {
             flag = true;
             int temp = ar[j+1];
             ar[j+1] = ar[j];
             ar[j] = temp;
          }
       }
      // No Swapping happened, array is sorted
      if(!flag){
         return;
      }
   }
}
#endif // BUBBLESORT_H_INCLUDED
