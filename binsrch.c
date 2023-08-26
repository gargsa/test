/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int findNumber(int* a, int size, int num)
{
    int l=0;
    int u = size-1;
    int m; 
    
    while(l<=u)
    {
        m = l + (u-l)/2;
        if (num<a[m])
            u = m-1;
        else if(num>a[m])
            l = m+1;
        else
           return m;
    }
    return -1;
}
int main()
{
    int a[] = {2,3,4,5,6,7,8,9};
    int size = sizeof (a)/sizeof(int);
    int num = 1;
    int pos = findNumber(a, size, num);
    printf ("number position is=%d\n", pos);
    printf("Hello World");

    return 0;
}

