#include <stdio.h>
#include <math.h>

#define REQUIRED_PARAMETERS 3

int main(int argc, char *argv[]){
	
double a,b,c; //coefficients
double d; //determinate
double root1,root2; //roots

if(argc < REQUIRED_PARAMETERS + 1){
	printf("Invalid parameters, please provide three numbers\n");
	return 0;
}

//parse arguments to doubles
int aCheck = sscanf(argv[1],"%lf",&a);
int bCheck = sscanf(argv[2],"%lf",&b);
int cCheck = sscanf(argv[3],"%lf",&c);

//make sure arguments are numbers
if(aCheck == 0 || bCheck == 0 || cCheck == 0){
	printf("All three arguments must be numbers\n");
	return 0;
}

//calculate determinate
d = b * b - 4 * a * c;

printf("A: %lf B: %lf C: %lf", a, b, c);
printf("\nDeterminate: %lf", d);
	
//test to make sure result is not imaginary
if(d >= 0){
	root1 = (-b + sqrt(d)) / (2 * a);
	root2 = (-b - sqrt(d)) / (2 * a);
	printf("\nFirst Root is %.8lf", root1);
	printf("\nSecond Root is %.8lf\n", root2);
} else {
	printf("\nRoots are imaginary\n");
}

return 0;
}
	
