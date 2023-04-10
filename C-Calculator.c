#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[])
{
	float valueOne;
	float valueTwo;
	char operator;
	float answer;

	printf("Enter Calculation:\n");
	scanf("%f %c %f", &valueOne, &operator, &valueTwo);

	switch(operator)
	{
		case '+': answer = valueOne + valueTwo;
		break;
		case '-': answer = valueOne - valueTwo;
		break;
		case '/': answer = valueOne / valueTwo;
		break;
		case '*': answer = valueOne * valueTwo;
		break;
		case '^': answer = pow(valueOne, valueTwo);
		break;
		case ' ': answer = sqtr(valueTwo);
		break;
		default: printf("Invalid");
		
	}

	printf("%.9g %c %.9g = %.6g\n", valueOne, operator, valueTwo, answer);
	
	return 0;
}
