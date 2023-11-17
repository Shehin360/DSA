#include<stdio.h>
int main()
{
	int n,i,j,arr[50],key,x;
	printf("Enter the size of array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
	}
	
	for(i=1;i<n;i++){
    	key=arr[i];
    	j=i-1;
    	while(j>=0&&arr[j]>key){
          arr[j+1]=arr[j];
          j=j-1;
     }
    arr[j+1]=key;
    for(x=0;x<n;x++)
    {
    	printf("%d \t",arr[x]);
    	
    }
    printf("\n");
  }
	
	printf("Sorted array");
	for(i=0;i<n;i++)
	{
		printf("%d \t",arr[i]);
	}
	
	
}
