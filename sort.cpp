 
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <algorithm>

using namespace std;


int main()
{
   const int MAX = 10;
   vector<int> a( MAX );

   for ( size_t i = 0; i < MAX; i++ ) a[i] = rand() % 1000;
   sort( a.begin(), a.end() );

   string dummy;
   cout << "Press enter if you dare!";   getline( cin, dummy );
   for ( size_t i = 0; i < MAX; i++ ) cout << a[i] << '\n';
}
