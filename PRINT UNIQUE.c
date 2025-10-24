#include<stdio.h>
int main()
{
    int i,j,k,a,count;
    int arr[100];
    scanf("%d",&a);
    int printed[100]={0};
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<a;i++)
    { 
        if(printed[arr[i]]==0)
        {
       for(j=i+1;j<a;j++)
       {
           if(arr[i]==arr[j])
           {
               printed[arr[j]]=1;
           }
       }
       printf("%d",arr[i]);
        }
    }
}