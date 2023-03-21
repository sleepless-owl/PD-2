//Here, we will write a C program that prints the 10th values of the Fibonacci series in the form of output.
#include<stdio.h>

int numberfibonacci(int);

void main (){

int a,b;

printf("please enter the value of the n number here : ");

scanf("%d",&a);

b= numberfibonacci(a);

printf("%d",b);

}

int numberfibonacci(int a){

if (a==0){

return 0;

}

else if (a == 1){

return 1;

}

	else{

		return numberfibonacci(a-1) + numberfibonacci(a-2);

	}
}
