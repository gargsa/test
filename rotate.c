/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void rotateRight(int* a, int k)
{
  int i;
  while (k--) 
  {
      int j = a[8];
      for (i=8; i>0; i--)
      {
          a[i] = a[i-1];
      }
      a[i] = j;
  }
}

void rotateLeft(int* a, int k)
{
  int i;
  while (k--) 
  {
      int j = a[0];
      for (i=0; i<8; i++)
      {
          a[i] = a[i+1];
      }
      a[i] = j;
  }
}

int main()
{
    printf("Hello World\n");
    int a[9] = {1,2,3,4,5,6,7,8,9};
    int k=4;
    rotateRight(a, k);

    for (int i=0; i<9;i++)
        printf("%d ", a[i]);
        
    printf("\n");
    rotateLeft(a, k);

    for (int i=0; i<9;i++)
        printf("%d ", a[i]);        
        
    printf("\n");
    return 0;
}

