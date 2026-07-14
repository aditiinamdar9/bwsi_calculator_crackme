#include <stdio.h>

void check_answer(double result) {
	if (result == 42575349) {
		printf("NWSI{C0ng4t5l41on3!}\n");
	}	
}

int main() {
	double num1, num2, result;
	char op;

	printf("Enter first number: ");
	scanf("%lf", &num1);

	printf("Enter operator (+, -, *, /): ");
	scanf(" %c", &op);
	
	printf("Enter second number: ");
	scanf("%lf", &num2);

	if (op == '+') {
		result = num1 + num2;
		printf("Result: %.2lf\n", result);
		check_answer(result);
	}
	else if (op == '-') {
		result = num1 - num2;
		printf("Result: %.2lf\n", result);
		check_answer(result);
	}

	else if (op == '*') {
		result = num1 * num2;
		printf("Result: %.2lf\n", result);
		check_answer(result);
	}
	
	else if (op == '/') {
		if (num2 == 0)
			printf("Cannot divide by zero!\n");
		else {
			result = num1 / num2;
			printf("Result: %.2lf\n", result);
			check_answer(result);
		}
	}
	else {
		printf("Invalid operator!\n");
	}
	return 0;
}
