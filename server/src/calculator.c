#include "calculator.h"

int add(int a, int b){
	return a + b;
}

int sub(int a, int b){
	return a - b;
}

int mult(int a, int b){
	return a * b;
}

int division(int a, int b){
	if(b == 0){
		return b;
	} else {
		return a / b;
	}
}
