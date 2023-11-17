#include <stdio.h>

int main() {
    int arr[] = {2, 5, 7, 12, 16, 23, 38, 45, 56, 72};
    
    int searchkey; 
    int left = 0; 
    int right = sizeof(arr) / sizeof(arr[0]) - 1;
    int flag = 0;
	printf("Enter the element to search:");
    	scanf("%d",&searchkey);
    
    while (left <= right) {
        int mid = left + (right - left) / 2; 

        if (arr[mid] == searchkey) {
            printf("Element %d found at index %d \n", searchkey, mid);
            flag = 1;
            break; 
        } else if (arr[mid] < searchkey) {
            left = mid + 1; 
        } else {
            right = mid - 1;
        }
    }

    if (!flag) {
        printf("Element %d not found in the array.\n", searchkey);
    }

    return 0;
}

