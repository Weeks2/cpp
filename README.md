# cpp
https://www.onlinegdb.com/online_c++_compiler
<pre>

Escriba tres funciones que generen cada una 10 archivos de conjunto de datos únicos de enteros separados por una coma ",". 
Los tamaños de estos 10 conjuntos de datos 
son (n) – 1000, 4000, 8000, 10000, 40000, 80000, 100000, 400000, 800000, 1000000. 

Función 1:  generar enteros aleatorios entre 0 y 1.000.000 como elementos de cada conjunto de datos.
Función 2:  generar un archivo con una lista ordenada de enteros de menor a mayor. 
Función 3:  generar un archivo con una lista ordenada inversamente con valores que van de mayor a menor. 

Por ejemplo:

1000Sorted file tendrá de 0 a 999, 
1000Reverse.txt tendrá de 999 a 0 y 
1000Random.txt tendrá números aleatorios entre 0 y 1,000,000.

</pre>


<pre>
Files : 

<b>
#include "bubbleSort.h"
#include "insertionSort.h"
#include "quickSort.h"
Main program: main_sorting.cpp
</b>  <hr>
Write three functions to code for the following three sorting algorithms in C++. 
Make your own header files to declare all the functions you need to implement each of these sorting algorithms. 
For example, for bubblesort, you will have a header file such as "bubblesort.h", in which you will declare all the functions that you need to perform bubblesort. 

Then you will include these header files in your main cpp program, in which you will implement and call all these functions. 
The input to all these sorts is the array of unsorted integers and the size of the array. 
For example: “void SelectionSort(int array[], int arraylength)”. 
The output of each of these sorts is the sorted array of integers printed on the console. 
Test these sorts with the unsorted array - A [89, 373, 1, 783, 23, 987, 12, 65, 28, 17]. 

All these functions should sort from smallest to largest value. Note: Bubble sort should be the optimized version
Selection Sort - void SelectionSort(int array[], int arrayLength) {…}
Bubble Sort - void BubbleSort(int array[], int arrayLength) {…}
Insertion Sort - void InsertionSort(int array[], int arrayLength) {…}

Use 30 files you genenerated in part 1 of this assignment to give as the input to your three sorting functions and measure the duration of each function. 

Comment the statements you used to print the sorted array after each sorting function, as you need to measure only the time taken to sort. 
The output of each sort is the time taken in milliseconds to sort the given unsorted array. 

You can use "#include <chrono>" or "#include<time.h>" to measure the duration of a function in C++.
 While measuring the time you only need to measure the time taken by each sorting algorithm to convert the unsorted array into a sorted array. 

Note: The additional time taken, such as to construct your input array and to print your sorted array to console should not be included while measuring the duration of the sort.
Repeat the above duration measurement for each sort for each input file. 
Plot 3 graphs for the 3 datasets, one graph for each type of array: sorted, unsorted, or reverse sorted. 
The x-axis of the graph will be the dataset size (n) (i.e., same as your array size), and the y-axis will be the average of the three executions for each dataset size. 
Thus, your x-axis will have 10 labels and value of runtime on the y-axis for each label. 

Create three of these graphs, one for each of the data sets (sorted, unsorted and reverse sorted) where the three sorting algorithms (Selection Sort, Bubble Sort, and Insertion Sort) are in the same graph sharing the same axis labels. 
Add Legend entry for each curve on the graph and use a different pattern like dotted, dashed, straight line, and different bullet dimensions and color for each curve of a sorting algorithm. 
The result of this should be one graph for each kind of dataset where all three algorithms are plotted together. 
Note: You have to generate datasets (i.e., unsorted, sorted or reverse sorted arrays) only once and you can reuse the same datasets across three executions of each sort and also across different sorting algorithms.
</pre>
