/*
 ============================================================================
 Name        : test.c
 Author      : me
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 #include <stdio.h>
#include <stdlib.h>

//style will be later (sorry)
float plus_print ()
{
	float a ;
	float b ;
	float ret ;
	printf("enter first number\n");
	ret = scanf("%f",&a);
	if (0 != ret)
	{
		printf("OK\n");
	}
	else
	{
		printf("invalid-not a number(or not)");
	    return 0;
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
	    return 0;
	}
    a = a + b;
    printf("%f",a);
	return 0;
}

float min_print()
{
	float a ;
	float b ;
	float ret ;
	printf("enter first number\n");
	ret = scanf("%f",&a);
	if (0 != ret)
	{
		printf("OK\n");
	}
    else
	{
    	printf("invalid-not a number(or not)");
	    return 0 ;
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
	    return 0;
	}
    a = a - b;
    printf("%f",a);
	return 0;
}

unsigned int fact_print()
{
	unsigned int ret;
	puts ("enter a number");
	unsigned int a ;
	unsigned int b = 1;
	printf("enter first number\n");
	ret = scanf("%u",&a);
	if (0 != ret)
	{
		printf("OK\n");
	}
	else
	{
		printf("invalid-not a number(or not)");
	    return 0;
	}
	for (int i = 1;i<=a;i++)
	{
		b=b*i;
	}
	printf("%u",b);
	return 0;
}

float multiplication_print()
{
	float a;
	float b;
	float ret ;
	printf("enter first number\n");
	ret = scanf("%f",&a);
	if (0 != ret)
	{
		printf("OK\n");
	}
	else
	{
		printf("invalid-not a number(or not)");
		return 0;
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
	    return 0;
	}
	a= a*b;
	printf("%f",b);
	return 0;}

float division_print()
{
	float ret ;
	float a;
	float b;
	printf("enter first number\n");
	ret = scanf("%f",&a);
	if (0 != ret)
	{
		printf("OK\n");
	}
	else
	{
		printf("invalid-not a number(or not)");
		return 0;
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
		return 0;
	}
	a= a/b;
	printf("%f",a);
	return 0;
}

float power_print()
{
	float ret ;
	float a;
	int b;
	printf("enter  number\n");
	ret = scanf("%f",&a);
	if (0 != ret)
	{
		printf("OK\n");
	}
	else
	{
		printf("invalid-not a number(or not)");
		return 0;
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
		return 0;
	}
	for (int i = 1;i<=b;i++)
	{
		a*=a;
	}
	printf("%f",b);
	return 0;
}


int main()
{
	char Y = 'Y';
	int ok = 0;
	int q = 34;
	char ch ='p';
	puts("do u need a list of commandsY/N");
	scanf("%c",&ch);
	if (ch==Y) puts("+_f^");
	puts("enter a command");
	while (ok!=1)
	{
			scanf("%c",&ch);
			switch(ch)
			{
				case '+' :plus_print() ; puts("do u want to repeat");scanf("%i",&q);
				if (q==0) {ok+=1;break;}
				else break;
				case '-' :min_print(); puts("do u want to repeat");scanf("%i",&q);
				if (q==0) {ok+=1;break;}
				else break;
				case 'f' :fact_print();puts("do u want to repeat");scanf("%i",&q);
				if (q==0) {ok+=1;break;}
				else break;
				case '*' :multiplication_print(); puts("do u want to repeat");scanf("%i",&q);
				if (q==0) {ok+=1;break;}
				else break;
				case '/' :division_print(); puts("do u want to repeat");scanf("%i",&q);
				if (q==0) {ok+=1;break;}
				else break;
				case '^' :power_print(); puts("do u want to repeat");scanf("%i",&q);
				if (q==0) {ok+=1;break;}
				else break;
				default :puts("another cycle don't forget commands +-f^*/  ");ch ='l';break;
			}
	}
	return 0;
}
