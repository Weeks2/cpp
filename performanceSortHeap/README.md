
1. Write three functions to code for the following three sorting algorithms in C++. 

Make your own header files to declare all the functions you need to implement each of these sorting algorithms. 
For example, for quicksort, you will have a header file such as "quicksort.h", in which you will declare all the functions that you need to perform quicksort.
Then you will include these header files in your main cpp program, in which you will implement and call all these functions. 

The input to all these sorts is the array of unsorted integers and the size of the array. 
For example: “void QuickSort(int array[], int arraylength)”. 
The output of each of these sorts is the sorted array of integers printed on the console. 
Test these sorts with the unsorted array - A [89, 373, 1, 783, 23, 987, 12, 65, 28, 17].

All these functions should sort from smallest to largest value. Note: Quicksort’s pivot should be chosen as the last element.

<b> Merge Sort </b>  void MergeSort(int array[], int copyArray[], int minIndex, int maxIndex) {…}
<b> Quick Sort </b>  void QuickSort(int array[], int arraySize, int startIndex, int endIndex) {…}
<b> Heap Sort  </b>  void HeapSort(int array[], int arrayLength) {…}

2) Use 30 files you generated in part 1 of this assignment to give as the input to your three sorting functions and measure the duration of each function. 

Comment the statements you used to print the sorted array after each sorting function, as you need to measure only the time taken to sort. 

The output of each sort is the time taken in milliseconds to sort the given unsorted array. 
You can use "#include <chrono>" or "#include<time.h>" to measure the duration of a function in C++. 

While measuring the time you only need to measure the time taken by each sorting algorithm to convert the unsorted array into a sorted array. 

Note: The additional time taken, such as to construct your input array and to print your sorted array to console should not be included while measuring the duration of the sort. 

3) Repeat the above duration measurement of each sort 3 times to calculate the average duration of each sort for each input file. 
Plot 3 graphs for the 3 datasets, one graph for each type of array: sorted, unsorted, or reverse sorted. 

The x-axis of the graph will be the dataset size (n) (i.e., same as your array size), and the y-axis will be the average of the three executions for each dataset size. 

Thus, your x-axis will have 10 labels and value of runtime on the y-axis for each label. Create three of these graphs, one for each of the data sets (sorted, unsorted and reverse sorted) where the six (include the data you generated in part 2) sorting algorithms (Selection Sort, Bubble Sort, Insertion Sort, Quick Sort, Merge Sort, and Heap Sort) are in the same graph sharing the same axis labels. 
Add Legend entry for each curve on the graph and use a different pattern like dotted, dashed, straight line, and different bullet dimensions and color for each curve of a sorting algorithm. 

The result of this should be one graph for each kind of dataset where all six algorithms are plotted together. 

Note: You have to generate datasets (i.e., unsorted, sorted or reverse sorted arrays) only once and you can reuse the same datasets across three executions of each sort and also across different sorting algorithms. 

4) Explain the different performance of all six of the algorithms (Selection Sort, Bubble Sort, Insertion Sort, Quick Sort, Merge Sort, and Heap Sort) with respect to the different kinds of inputs. 
How did the different data sets affect the time complexity of the algorithms? For each algorithm explain why its performance improved, decreased or stayed the same with the specific data set.

The final PDF should contain all 3 graphs each of which has plotted six algorithms. 
It should then include your observations on all six of the algorithms.

Submit the PDF with your name, the images of the graphs, and your pointwise explanations of your observations from everything you do in this assignment and the results you observe. 

You should also submit an additional zip folder within which you need to have all your code files,  README file with the compile and execution instructions, and your pre-compiled ".exe" executable files. 
On top of all the files, you need to mention your name as comments.

All submitted PDF files must be named as "<your-name>_<assignment-name>.pdf". 
For example, it will be "jankibhimani_sorting.pdf" for Prof. 

Janki Bhimani. You need to submit the single main file that implements all the above functions and is named as "<your-name>_sort.cpp". 
All submitted code header files must be named as "<your-name>_<sort-name>". 
For example, "jankibhimani_quicksort.h". 
The zip folder containing all the files except PDF should be named as "<your-name>_code.zip". 
For example, it will be "jankibhimani_code.zip".