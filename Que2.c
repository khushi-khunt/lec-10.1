#include<stdio.h>
/*
Input:
Enter any number: 15

Output:
The given number is divisible by both 3 & 5.
*/
void name(){
	int num;
	
	printf("Enter any num:-");
	scanf("%d",&num);
	 
	 if(num%3==0 && num%5==0){
	 	printf("The given number is divisible by both 3 & 5.");
	 }else{
	 	printf("The given number is not divisible by both 3 & 5.");
	 }	 
}

void main(){
	name();
}
