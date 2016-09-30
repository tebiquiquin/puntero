#include <stdio.h>

int calc(int *p){
	int sum;
	
	for(sum = 0; *p != '\0'; p++){
		sum += *p;
	}
	return sum;
}


void multp(int mat[], int mat2[]){
	int mul;
	int *p11;
	int *p12;
	int *p21;
	int *p22;
	p11 = &mat[0];
	p12 = &p11[0];
	p21 = &mat[0];
	p22 = &p21[0];
}

int main(int argc, char *argv[]) {
	int a;
	int *p;
	int lista[10] = {0,1,2,3,4,5};
	p=&lista[0];
	a = calc(p);
	printf("La suma es: %d",a);
	return 0;
}

