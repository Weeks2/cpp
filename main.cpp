/** 
Escriba tres funciones que generen cada una 10 archivos de conjunto de datos únicos de enteros separados por una coma ",". 
Los tamaños de estos 10 conjuntos de datos son (n) – 1000, 4000, 8000, 10000, 40000, 80000, 100000, 400000, 800000, 1000000. 

Función 1:  generar enteros aleatorios entre 0 y 1.000.000 como elementos de cada conjunto de datos.
Función 2:  generar un archivo con una lista ordenada de enteros de menor a mayor. 
Función 3:  generar un archivo con una lista ordenada inversamente con valores que van de mayor a menor. 

Por ejemplo, 

1000Sorted file tendrá de 0 a 999, 
1000Reverse.txt tendrá de 999 a 0 y 
1000Random.txt tendrá números aleatorios entre 0 y 1,000,000.

**/
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

void GenerateRandomInputFiles();
void GenerateSortedInputFiles();
void GenerateReverseInputFiles(); 

int A1000[1000], B4000[4000], C8000[8000], D10000[10000], E40000[40000], F80000[80000], G100000[100000], H400000[400000], I800000[800000], J1000000[1000000];

int main()
{
    GenerateRandomInputFiles();
    cout<<endl;
    return 0;
}

void GenerateRandomInputFiles() 
{
    int randonNumber, first = 0;
    srand(time(0));
    for(int i = 0; i< 1000000; i++)
    {
        randonNumber = rand()%(1000000+1-first)+first;
        if(i < 1000) 
        {
            A1000[i] = rnum;
        }
        else 
        { 
            cout<<A1000[999];
            break;
        }
    }
}
