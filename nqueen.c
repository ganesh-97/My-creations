#include<stdio.h>
#include<string.h>
int main()
{
    int **ptr,rs=4,cm=4,rows=0,cols=0,ro,cs,r,c,i,flag=0,diagonal=0;
    ptr=(int **)malloc(r * sizeof(int*));
    for(i=0;i<rs;i++)
        ptr[i]=(int*)malloc(c*sizeof(int));
    ptr[0][3]=1;
    ptr[1][2]=1;
    ptr[2][1]=1;
    ptr[3][0]=1;
    for(r=0;r<rs;r++){
            rows=0;
            cols=0;
            diagonal=0;
        for(c=0;c<cm;c++){
            if(ptr[r][c]==0)
                rows++;
            if(ptr[c][r]==0)
                cols++;
            if(r==0 && c==0 && ptr[r][c]==1){
                if(ptr[r+c][c]==1)
                    diagonal++;
            }
            if(r==0 && c==(cm-1) && ptr[r][c]==1){
                if(ptr[r+c][(cm-1)-c]==1)
                    diagonal++;
            }
            if(r==(rs-1) && c==0 && ptr[r][c]==1){
                if(ptr[r-c][c]==1)
                    diagonal++;
            }
            if(r==(rs-1) && c==(cm-1) && ptr[r][c]==1){
                if(ptr[r-c][(cs-1)-c]==1)
                    diagonal++;
            }
        }
        if(rows==3 && cols==3  && diagonal==1 )
            continue;
            else{
                flag=1;
                break;
            }
    }
    for(ro=0;ro<rs;ro++){
        for(cs=0;cs<cm;cs++){
            printf("%d ",ptr[ro][cs]);
        }
        printf("\n");
    }
    if(flag)
        printf("Invalid");
    else
        printf("Valid");
        return 0;
}
