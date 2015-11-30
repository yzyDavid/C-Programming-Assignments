#include <stdio.h>

int main(void)
{
	char operator;
	int operand1, operand2, res;
	int repeat, ri;

	scanf("%d", &repeat);
	for(ri = 1; ri <= repeat; ri++){
		scanf("%d", &operand1);
		operator = getchar();
		while(operator!='=')
		{
			scanf("%d",&operand2);
			switch(operator)
			{
				case '+':
					res=operand1+operand2;
					break;
				case '-':
					res=operand1-operand2;
					break;
				case '*':
					res=operand1*operand2;
					break;
				case '/':
					res=operand1/operand2;
					break;
			}
			operand1=res;
			operator = getchar();
		}
		getchar();
		printf("%d\n", res);
	}
}
