// pyramid pattern
#include <bits/stdc++.h>
using namespace std;
void printPattern(int n)
{
    int j, k;
    for (int i=0; i<=n; i++)
    {
        // if row number is odd
        if (i%2 != 0)
        {
           
            for (j=k; j<k+i; j++)
                cout << j ;
            cout << j++ << endl;    
            k = j;    
        }
    }
}
 
// Driver program to test above
int main()
{
    int n = 5;
    printPattern(n);
    return 0;
}
