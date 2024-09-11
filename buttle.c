void buttle(int *ch,int len)
{
    int i=0,j=0;
    for(i=0;i<len-1;i++)
    {
        for(j=0;j<len-1-i;j++)
        {
            if(ch[j]>ch[j+1])
            {
                int t=ch[j];
                ch[j]=ch[j+1];
                ch[j+1]=t;

            }
            
        }
    }
}
#include<stdio.h>
int main()
{
    int ch[]={1,3,4,52,6,7,38};
    int lenth=sizeof(ch)/sizeof(ch[0]);
    buttle(ch,lenth);
    int i=0;
    for(i=0;i<lenth;i++)
    {
        printf("%d ",ch[i]);
    }
    return 0;
}
