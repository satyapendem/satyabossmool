#include<stdio.h>
int main()
{
  int a[]={20,5,10,3,8,17};
  int n=5,i,j,temp;
    printf("the input array is:\n");
   for(i=0;i<=n;i++)
   printf("%5d",a[i]);
   printf("\n sorted array is:\n");

  for(i=0;i<=n;i++)
   {
    for(j=0;j<=(n-i-1);j++)
     {
     if(a[j]>a[j+1])
 	{      
   	temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
	}
	}
	}

   for(i=0;i<=n;i++)
    printf("%5d",a[i]);
  	return 0;
}
