#include<stdio.h>
#include<math.h>
int stack[20];
int top=-1;

void push(int x)
{
	stack[++top]= x;
}

int pop()
{
	return stack[top--];	
}

int main()
{
	char exp[20];
	int i;
	char *e;
	int n1,n2,n3,num;
	printf("Enter the expression:");
	scanf("%s",exp);
	e=exp;
	while(*e !='\0')
	{
		if(isdigit(*e))
		{
			num=*e-48;
			push(num);
		}
		else
		{
			n1=pop();
			n2=pop();
			switch(*e)
			{
				case '+': n3=n1+n2;
				break;
				case '-': n3=n2-n1;
				break;
				case '*': n3=n2*n1;
				break;
				case '/': n3=n2/n1;
				break;
				case '^': n3=pow(n2,n1);

#elif

#endif
				break;		
			}
			push(n3);
		}
		e++;		
	}
	printf("\n the result of expression %s=%d\n",exp,pop());
	return 0;
}
