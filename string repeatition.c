#include<stdio.h>
#include<string.h>
char nonrepeating(char*,int);
int i,j,count=0;
int main()
{
    char *str="geeksforgeeks";
    printf("The kth non repeating element is %c",nonrepeating(str,3));
    return 0;
}
char nonrepeating(char *str,int k){
    char *a;
    a=str;
    int kth=0;
for(i=0;i<strlen(a);i++){
        count=0;
    for(j=0;j<strlen(a);j++){
        if(*(a+i) == *(a+j) && i!=j){
            count=1;
            break;
        }
    }
    if(count==0)
      kth++;
    if(kth==k)
        return *(a+i);
}
}
