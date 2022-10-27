#ifndef UTILS_H_INCLUDED
#define UTILS_H_INCLUDED

#include <iostream>

using namespace std;



void arrayByReference(int *ar, int x, int y)
{
  int xx = *(ar + 0 * y + 0);
  cout << xx;
}

int main() 
{
  int graph[7][7] = {{100, 1, 7, 6, 0, 0, 0},{1, 0, 9, 0, 0, 3, 0},
                           {7, 9, 0, 0, 0, 0, 1}, 
                           {6, 0, 0, 0, 2, 0, 0},
                           {0, 0, 0, 2, 0, 0, 0}, 
                           {0, 3, 0, 0, 0, 0, 3},
                           {0, 0, 0, 0, 5, 3, 0}};
  

  arrayByReference((int*)graph,7,7);
 
}

#endif // UTILS_H_INCLUDED
