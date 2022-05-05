#include<stdio.h>

int add(int , int );
int sum(int , int );
int multipication(int , int );
int dev(int , int );

int main()
{
	int x , y ;
	printf("ENTER TWO NUMBWERS \n");
	scanf("%d %d",&x,&y);
	add(x, y);
	sum(x, y);
	multipication(x, y);
	dev(x, y);
	
}
int add(int a,int b)
{
	int add;
	add=a+b;
	printf("the additionf of the number is  =  %d\n",add);
}
int sum(int d,int e)
{
	int sub;
	sub=d-e;
	printf("the subtraction of the number is  =  %d\n",sub);
 } 
int multipication(int f,int g)
{
	int into=f*g;
	printf("the multification of the number is  = %d\n",into);
}
int dev(int h,int i)
{
	int dev;
	dev=h/i;
	printf("the devide of the number is = %d\n",dev);
}
