#include<stdio.h>
int main()
{
  int n,arr[50],i,j,temp,x;
  	printf("Enter the array size");
  	scanf("%d",&n);
  	
  	printf("Enter the array elements");
  	for(i=0;i<n;i++)
  	{
  	scanf("%d",&arr[i]);
  	}
  	
  	for(i=0;i<n-1;i++){
  	for(j=i+1;j<n;j++)
  	{
  		if(arr[i]>arr[j])
  		{
  			temp=arr[i];
  			arr[i]=arr[j];
  			arr[j]=temp;
  	for(x=0;x<n;x++)
       	{
    	printf("%d \t",arr[x]);
    	
        }
     	printf("\n");
  		}
  	}
  		
  	}
  	
  	printf("Sorted array");
  	for(i=0;i<n;i++)
  	{
  	printf("%d",arr[i]);
  	}
  	
}
