#include <stdio.h>

int main()
{
	int a,b;
	char op;
	while(1) {
		scanf("%d %c %d",&a,&op,&b);
		switch(op) {
		case '+':
			printf("%d\n",a+b);
			break;
		case '-':
			printf("%d\n",a-b);
			break;
		case '*':
			printf("%d\n",a*b);
			break;
		case '/':
			printf("%d\n",a/b);
			break;
		default:
			return 0;
		}
		
	}
	return 0;
}
