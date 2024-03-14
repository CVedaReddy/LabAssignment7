#include<stdio.h>
#include<stdlib.h>
int main()
{
    
    char str[100],c;
    int count=0;
    printf("enter the string:");
    gets(str);
    for((c='a')||(c='A');(c<='z')||(c<='Z');c++)
    {
        count =0;
        for(int i=0;str[i]!=0; i++)
        {
            if(c==str[i])
            count++;

        }
        if(count >0)
        printf ( " %c found in %d times \n  " ,c,count);

    }
    return 0;
}
