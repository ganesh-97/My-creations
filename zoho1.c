#include<stdio.h>
int main()
{
    int i,num,a[10],j,sum=0,ans=0,k,l,sum1=0,maxmultiple=0;
    printf("Enter the elements in an array\n");
    for(i=0;i<5;i++)
        scanf("%d\n",&a[i]);
    scanf("%d",&num);
    for(j=0;j<5;sum=sum+a[j++]);
    maxmultiple=(sum%num)*num;
    if(sum>maxmultiple){
            for(k=0;k<5;k++){
                for(l=0;l<5;l++){
                    if(k!=l)
                        sum1=sum1+a[l];
                }
                if(sum1%num==0)
                    ans=a[k];
                sum1=0;
                }
                printf("Elements removed %d",ans);
            }
    else
        printf("No elements can be removed");
}
