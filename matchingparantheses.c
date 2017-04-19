#include<stdio.h>
#include<string.h>
static int top=0;
struct stack{
int data;
}a[10];
int main()
{
    char str[100];int flag=0,i;
    printf("Enter the string\n");
    gets(str);
    for(i=0;i<strlen(str);i++){
        if(str[i]=='(' || str[i]=='[' || str[i]=='{' ){
            top++;
            a[top].data=str[i];
           }
           else if(str[i]==')' || str[i]==']' || str[i]=='}' ){
           if(a[top].data=='\0' || a[top].data=='(' && str[i]!=')' || a[top].data=='[' && str[i]!=']' || a[top].data=='{' && str[i]!='}'){
                flag=1;
                break;
            }
            else{
                a[top].data='\0';
                top--;
            }
           }
           else
            continue;
    }
    if(a[top].data=='\0' && flag==0)
         printf("Balanced");
    else
        printf("Not balanced parantheses is %d",top);
    return 0;
}
