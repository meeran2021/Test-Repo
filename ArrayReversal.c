#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr,*temp, i,j;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) 
    {
        scanf("%d", arr + i);
    }
    temp = (int*) malloc(num * sizeof(int));
    for(j=0,i=num;j<num && i>=0;j++,i--)
    {
        *(temp+j)=*(arr+i);
    }
    for(i=0,j=0;i<num && j<num;i++,j++)
    {
        *(arr+i)=*(temp+j);
    }


    /* Write the logic to reverse the array. */

   // for(j = 0; j < num; j++)
     //   printf("%d ", *(temp + j));
    return 0;
}