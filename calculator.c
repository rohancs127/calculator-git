#include<stdio.h>
void main()
{
	int a,b,res;
	char op;
	printf("Enter operator");
	scanf("%s",op);
	printf("Enter operands");
	scanf("%d%d",&a,&b);
	switch(op)
	{
		case '+': res=a+b;
			  printf("%d",res);
			  break;
		case '-': res= a-b;
			  printf("%d", res);
			  break;
		case '*': res = a*b;
			  printf("%d", res);
			  break;
		default: printf("wrong entry!!!\n");
			 break;
	}
}
