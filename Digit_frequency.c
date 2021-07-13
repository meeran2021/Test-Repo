#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int f=0,a[11]={0,1,2,3,4,5,6,7,8,9};
    char s[1000];
    scanf("%s",s);
    for(int i=0;i<10;i++)
    {
        for(int j=0; j<strlen(s);j++)
        {
            if(a[i]==s[j])
            {
                f++;
                //continue;
            }
        }
        printf("%d ",f);
    }  
    return 0;
}
