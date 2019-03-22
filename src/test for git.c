/*
 ============================================================================
 Name        : test.c
 Author      : me
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*#include <stdio.h>
#include <stdlib.h>

//style will be later (sorry)
float plus ()
{
	float a ;
	float b ;
	float ret ;
	while (2)
	{
	  printf("enter first number\n");
	  ret = scanf("%f",&a);
	  if (0 != ret)
	      {
	        printf("OK\n");
	      }
	  else
	      {
	        printf("invalid-not a number(or not)");
	        break;
	      }
	  printf("enter second number\n");
	  ret = scanf("%f",&b);
	  if (0 != ret)
	      {
	        printf("OK\n");
	      }
	 else
	      {
	        printf("invalid-not a number(or not)");
	        break;
	      }
     a = a + b;
     printf("%f",a);
	}
	return 0;
}

float min()
{
	float a ;
	float b ;
	float ret ;
	while (2)
	{
	  printf("enter first number\n");
	  ret = scanf("%f",&a);
	  if (0 != ret)
	      {
	        printf("OK\n");
	      }
	  else
	      {
	        printf("invalid-not a number(or not)");
	        break;
	      }
	  printf("enter second number\n");
	  ret = scanf("%f",&b);
	  if (0 != ret)
	      {
	        printf("OK\n");
	      }
	 else
	      {
	        printf("invalid-not a number(or not)");
	        break;
	      }
     a = a - b;
     printf("%f",a);
	}
	return 0;
}

unsigned int fact()
{
	unsigned int ret;
	puts ("enter a number");
	unsigned int a ;
	unsigned int b = 1;
	while (2)
		{
		printf("enter first number\n");
		ret = scanf("%u",&a);
		if (0 != ret)
	      	  {
			printf("OK\n");
	      	  }
		else
			{
			printf("invalid-not a number(or not)");
	        break;
			}
for (int i = 1;i<=a;i++)
{
b=b*i;
}
printf("%u",b);
}
	return 0;
}

float multiplication()
{
	float a;
	float b;
	float ret ;
	while (2)
	{
	  printf("enter first number\n");
	  ret = scanf("%f",&a);
	  if (0 != ret)
	      {
	        printf("OK\n");
	      }
	  else
	      {
	        printf("invalid-not a number(or not)");
	        break;
	      }
	  printf("enter second number\n");
	  ret = scanf("%f",&b);
	  if (0 != ret)
	      {
	        printf("OK\n");
	      }
	 else
	      {
	        printf("invalid-not a number(or not)");
	        break;
	      }
a= a*b;
printf("%f",b);
	}
return 0;}


float division()
{
	float ret ;
	float a;
	float b;
		while (2)
		{
		  printf("enter first number\n");
		  ret = scanf("%f",&a);
		  if (0 != ret)
		      {
		        printf("OK\n");
		      }
		  else
		      {
		        printf("invalid-not a number(or not)");
		        break;
		      }
		  printf("enter second number\n");
		  ret = scanf("%f",&b);
		  if (0 != ret)
		      {
		        printf("OK\n");
		      }
		 else
		      {
		        printf("invalid-not a number(or not)");
		        break;
		      }
a= a/b;
printf("%f",b);}
return 0;
}

float power()
{
	float ret ;
	float a;
	int b;
		while (2)
		{
		  printf("enter  number\n");
		  ret = scanf("%f",&a);
		  if (0 != ret)
		      {
		        printf("OK\n");
		      }
		  else
		      {
		        printf("invalid-not a number(or not)");
		        break;
		      }
		  printf("enter his power\n");
		  ret = scanf("%i",&b);
		  if (0 != ret)
		      {
		        printf("OK\n");
		      }
		 else
		      {
		        printf("invalid-not a number(or not)");
		        break;
		      }
for (int i = 1;i<=b;i++)
{
a*=a;
}

printf("%f",b);}
return 0;
}
das


int main()
{
char Y = 'Y';
int ok = 0;
char ch ='p';
puts("do u need a list of commandsY/N");
scanf("%c",&ch);
if (ch==Y) puts("+_f^");
puts("enter a commabd");
while (ok!=1)
{
scanf("%c",&ch);
switch(ch)
{
case '+' :plus() ; ok =ok+1;break;
case '-' :puts("2"); break;
case 'f' :puts("3"); break;
case '*' :puts("4"); break;
case '/' :puts("5"); break;
case '^' :puts("6"); break;
default :puts("if u entered a wrong command just do it again but correctly ");ch ='l';
}
}
return 0;
}123123124124124233412131232*/
int main()
{return 0;}
