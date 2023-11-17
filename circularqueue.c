#include<stdio.h>
#define n 7
 int Q[n];
 int f=-1;
 int r=-1;
 
 void enqueue(int element){
 
 	if(f==-1&& r==-1)
 	{
 	 	f=0;
 	 	r=0;
 	 	Q[r]=element;
 	 	}
 	 else if((r+1)%n==f){
 	 
 	 printf("queue is empty");
 	 
 	 }
 	 else{
 	 
 	 	r=(r+1)%n;
 	 	Q[r]=element;
 	 }
 	 
 	 
 	
 }
 
 int dequeue(){
 
 	if((f==-1)&&(r==-1))
 	{
 		printf("Queue is full");
 		}
 	else if(f==r){
 		printf("\nThe dequeued element is %d", Q[f]);
		 f=-1;
 		r=-1;
 		}
 	else{
 	printf("Dequeued element is :%d",Q[f]);
 	f=(f+1)%n;
 	}
 	
 	
 }
 void display(){
 
 int i=f;
 if(f==-1&&r==-1)
 {
 printf("queue is empty");
 
 }
 else{
 printf("Elements in a queue are:");
 while(i<r){
 printf("%d",Q[i]);
 i=(i+1)%n;
 }
 }
 }
 
 int main(){
 int ch=1,x;
 while(ch<4 && ch!=0)   
    {  
    printf("\n Press 1: Insert an element");  
    printf("\nPress 2: Delete an element");  
    printf("\nPress 3: Display the element");  
    printf("\nEnter your choice");
 
 scanf("%d",&ch);
 
 switch(ch){
 
 case 1:
 printf("Enter the element to be inserted");
 scanf("%d",&x);
 enqueue(x);
 break;
 
 case 2:
 dequeue();
 break;
 
 case 3:
 display();
 break;
 }
 
 }
 return 0;
 }
