/*Ezigbo Ugochukwu 9/23/2020 GENG102*/
/*This program computes the equivalent resistance of a parallel circuit*/

#include <stdio.h>
#include <math.h>

int main (void)
{
	float R1, R2, R3, R;
	
	/*Get input values*/
	printf("Enter the three resistors");
	scanf("%f %f %f", &R1, &R2, &R3);
	
	/*Calculate*/
	R=1/((1/R1)+(1/R2)+(1/R3));
	
	/*Display solution*/
	printf("The equivalent resistance of the parallel circuit is %.2f. /n", R);
	
	/*exit*/
	return 0;
}
/*Enter the three resistors2 6 5
The equivalent resistance of the parallel circuit is 1.15. /n
Enter the three resistors3 7 4
The equivalent resistance of the parallel circuit is 1.38. /n*/

