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
	}
}
