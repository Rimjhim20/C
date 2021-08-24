#include <stdio.h>
int main(){
    int r1,c1,r2,c2;
    printf("\nEnter row of first matrix\n");
    scanf("%d",&r1);
     printf("Enter columns of first matrix\n");
    scanf("%d",&c1);
      printf("\nEnter row of second matrix\n");
    scanf("%d",&r2);
      printf("Enter columns of second matrix\n");
    scanf("%d",&c2);
    if(r1==r2 && c1==c2){
int a[r1][c1];
int b[r2][c2];
int c[r1][c2];
int i,j;
printf("Enter first matrix...\n");
for(i=0;i<r1;i++){
    for(j=0;j<c1;j++){
        scanf("%d",&a[i][j]);
    }
}
printf("Enter second matrix...\n");
for(i=0;i<r2;i++){
    for(j=0;j<c2;j++){
        scanf("%d",&b[i][j]);
    }
}
for(i=0;i<r1;i++){
    for(j=0;j<c2;j++){
    c[i][j]=a[i][j] +b[i][j];
    }
}
printf("First Matrix\n");
for(i=0;i<r1;i++){
    for(j=0;j<c1;j++){
    printf(" %d ",a[ i ] [ j ]);
    }
    printf("\n");
}
printf("Second Matrix \n");
for(i=0;i<r2;i++){
    for(j=0;j<c2;j++){
    printf( " %d ",b[ i ][ j ]);
    }
    printf("\n");
}
printf("Matrix Addition\n");
for(i=0;i<r1;i++){
    for(j=0;j<c2;j++){
    printf(" %d ",c[ i ][ j ]);
    }
    printf("\n");
}
    }else{
        printf("Addition is not Possible in this case.");
    }
}