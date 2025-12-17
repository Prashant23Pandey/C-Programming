#include<stdio.h>
int main()
   {
   int A[3][3],B[3][3],C[3][3],i,j;
   printf("Enter elements for 3X3 Matrix A: ");
   for(i=0;i<=2;i++)
   for(j=0;j<=2;j++)
   scanf("%d", &A[i][j]);
   printf("Enter elements for 3X3 Matrix B: ");
   for(i=0;i<=2;i++)
   for(j=0;j<=2;j++) 
   scanf("%d", &B[i][j]);
   for(i=0;i<=2;i++)
   for(j=0;j<=2;j++)
   C[i][j] = A[i][j] + B[i][j];
    printf("\n The Sum is :\n");
     for(i=0;i<=2;i++)
       {
        printf("\n\n");
        for(j=0;j<=2;j++)
           printf("\t %d", C[i][j]);
           }
    return 0;
   }