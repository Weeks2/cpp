#include <iostream>
#include "utils.h"
using namespace std;

int main() 
{
    int COUNT = 7;
    readArray("matriz");
    for (int i = 0; i < COUNT; i++)
    {
        for (int j = 0; j < COUNT; j++)
        {
            cout<<ar[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}