#include<stdio.h>
int main()
{
	int arr[50],size;
	int i,j,temp;
	printf("Enter the size of array:");
	scanf("%d",&size);
	
	printf("Enter %d intergers to the array\n",size);
	for(i=0;i < size;i++){
	scanf("%d",&arr[i]);
	}
	
	
	...
	
	for(i = 0; i < size - 1; i++) {
        for(j = 0; j < size - i - 1; j++) {
           
            if(arr[j] > arr[j + 1]) {
                
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Sorted Array: ");
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
   printf("\n");
    
    
    
    
} 

