#include<stdio.h>
int main()
 {
	int i,j,temp,n,a[10];
	printf("enter the size of an array:");
	scanf("%d",&n);
	printf("enter the elements of the array");
	for(i=0;i<n;i++)
	    {
		    scanf("%d",&a[i]);
	    }
	{
	for(i=0;i<n-1;i++)
	{
	for(j=0;j<n-i-1;j++)
	{
		if(a[j]<a[j+1])
		{
			temp=a[j];
		        a[j]=a[j+1];
			a[j+1]=temp;
	}
	}
	}
printf("sorted list of elements");
for(i=0;i<n;i++)
printf("%d",a[i]);
}
}
