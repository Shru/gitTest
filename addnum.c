/* Filename: addnum.c
 * Add numbers
 * Author: shruti
 * Date: 01/26/2017
 */

#include<stdio.h>

void main(int argc, char *argv[]){
	int i, n;
	float sum = 0;
	printf("How many numbers do you want to add?\n");
	scanf("%d", &n);
	float num[n];
	printf("Enter %d numbers:\n", n);
	for (i=0; i<n; i++){
		scanf("%f", (num+i));
		sum += *(num+i);
	}
	printf("Sum = %f\n", sum);
}
