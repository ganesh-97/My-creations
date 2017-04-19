#include<stdio.h>
int main()
{
    int j,i,temp,fbig,sbig,n,a[20];
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    for(j=0;j<n;j++)
        scanf("%d",&a[j]);
    fbig=a[0];
    sbig=a[1];
    if(sbig>fbig){
        temp=sbig;
        sbig=fbig;
        fbig=temp;
    }
    for(i=2;i<n;i++){
        if(a[i]>fbig){
            sbig=fbig;
            fbig=a[i];
        }
        else if(a[i]>sbig)
            sbig=a[i];
    }
    printf("%d %d",fbig,sbig);
    return 0;
    }
