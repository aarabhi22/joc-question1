#include<stdio.h>
void main()
{
    int a[10],flag=0,i,j,n;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                flag=1;
            }
        }
    }
    if(flag==1)
    {
        printf("array is not distinct\n");
    }
    else
        printf("array is distinct\n");
}
