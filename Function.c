#include<stdio.h>

int add(int , int );
int sum(int , int );
int multipication(int , int );
float dev(float , float );

int main()
{
	int num1 , num2 ;
	float n1, n2;
	printf("FIND ADDITION, SUBSTRACTION, MULTIPLICATION, DIVISION : \n\n");
	printf("ENTER TWO NUMBWERS  : \n");
	scanf("%d %d",&num1,&num2);
	add(num1, num2);
  sum(num1, num2);
	multipication(num1, num2);
	dev(num1, num2);
	
}
int add(int num1,int num2)
{
	int add;
	add=num1+num2;
	printf("The Additionn Of Number Is  :  %d\n",add);
}
int sum(int num1,int num2)
{
	int sub;
	sub=num1-num2;
	printf("The Subtraction Of The Number Is  :  %d\n",sub);
 } 
int multipication(int num1,int num2)
{
	int multipication;
	multipication=num1*num2;
	printf("The Multification Of The Number Is  :  %d\n",multipication);
}
float dev(float n1,float n2)
{
	float dev;
	dev=n1/n2;
	printf("The Divition Of The Number is : %.2f\n",dev);
}
