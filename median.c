//a = 1,3,4,6,8,9,10,12,14 - 9
//b = 5,7,11,13,15,16 - 6
//1,3,4,5,6,7,8,9,10,11,12,13,14,15,16
/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//brute force method with no extra space

#include <stdio.h>

int main()
{
    printf("Hello World\n");
    //find the median of 2 sorted arrays. brute force, merge
    //given 2 sorted array, merge them
    int a[] = {2,4,5,6,8,11};
    int b[] = {1,3,7,9};
    int sizea = sizeof(a)/sizeof(int);
    int sizeb = sizeof(b)/sizeof(int);
    int med = (sizea+sizeb)/2;
    int founda=0, foundb=0;
    int i=0,j=0,k=0;
    while (i<sizea&&j<sizeb)
    {
        if (a[i]<b[j])
        {
            i++; k++;
            if(k == med )
            {
                founda=1;
                break;
            }
        }
        else {
            j++;k++;
            if(k == med)
            {
                foundb=1;
                break;
            }
        }


    }

    printf("median of arrays=%d %d\n", founda, (founda ? a[i]:b[j]) );
    return 0;
}

