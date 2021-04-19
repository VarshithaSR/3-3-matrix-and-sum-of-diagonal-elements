#include<stdio.h>
int main()
{
   int mat[3][3];
   int i, j;
   for(i=0; i<3; i++) {
      for(j=0;j<3;j++) {
         printf("Enter value for mat[%d][%d]:", i, j);
         scanf("%d", &mat[i][j]);
      }
   }
   printf("Three Dimensional array elements:\n");
   for(i=0; i<3; i++) {
      for(j=0;j<3;j++) {
         printf("%d ", mat[i][j]);
         if(j==2){
            printf("\n");
         }
      }
   }
    int sum=mat[0][0]+mat[1][1]+mat[2][2];
    printf("\nthe sum of the diaogonal elements is: %d",sum);
    return 0;
}
