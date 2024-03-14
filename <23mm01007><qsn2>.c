#include <stdio.h>
#include <string.h>
int main(){
    char a[10001];
    printf("Enter a string:-\n");
    gets(a);
    int k=0;
    for(int i=0;i<strlen(a);i++){
        if((a[i]>='a'&&a[i]<='z') || (a[i]>='A'&&a[i]<='Z')){
        a[k]=a[i];
        k++;
        }
    }
    a[k]='\0';
    puts(a);
}