#include <stdio.h>
    void swap(char *x1,char *x2)
    {
        int x=*x1;
        *x1=*x2;
        *x2=x;
    }
    void per(char *arr,int st,int ls)
    {
        int i=0;
        if(st==ls)
        {
            int k;
            for(k=0;k<ls;k++)
            {
                printf("%c ",arr[k]);
            }
        printf("\n");
    }
        else
        {
            for(i=st;i<ls;i++)
            {
                swap(arr+st,arr+i);
                per(arr,st+1,ls);
                swap(arr+st,arr+i);
            }
        }

}
int main()
{
    char arr[4]={'f','l','o','w'};
    int st=0;
    int ls=4;
    per(arr,st,ls);

}
