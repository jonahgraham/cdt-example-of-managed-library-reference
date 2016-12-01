/*
 * main.c
 *
 *  Created on: 1 Dec 2016
 *      Author: jonah
 */


#include <stdio.h>
#include <mylib.h>

int main() {
	int val = mylibfunc();
	printf("My Lib Func returned %d\n", val);
	return 0;
}
