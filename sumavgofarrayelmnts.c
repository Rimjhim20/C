#include <stdio.h>
int main(){
    int num,a[100],i,sum=0;
    float avg;
    printf("Size of array:\n");
    scanf("%d",&num);
    printf("Enter array elements:\n");
    for(i=0;i<num;i++){
        scanf("%d",&a[i]);
    }

     for(i=0;i<num;i++){
       sum=sum+a[i];
       avg=sum/num;
    }
     printf("sum=%d \n",sum);
        printf("avg=%f \n",avg);
}