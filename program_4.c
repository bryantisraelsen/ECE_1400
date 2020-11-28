/*********************************************************
Function Title: Main
Summary: Calculates pi from an infinite series of numbers
Inputs: None
Outputs: None
Complie instructions: gcc program_4.c -o program_4.exe
*******************************************************
Pseudocode

Begin
	define integer variables
	define float variables
	ask for integer n
	scan in integer n
	set j to 1
	set pi to 0
	Loop while j<=n
		if j % 2 is 0
		Then
			k = 2 * j - 1
			u = 4 / k
			pi = pi - u
		Else
			y = 2 * j - 1
			i = 4 / y
			pi = pi + i
		End If
		Add one to j
	End Loop when j>n
	print value of pi using n terms
End
*********************************************************/
#include <stdio.h>
int main(){								//Begin
    int n, j;							//define integer variables
    float pi, u, i, y, k;				//define float variables	
    printf("Enter an integer n. ");		//ask for integer n
    printf("The value of pi will be calculated using ");
	printf("n terms of an infinite series.");
    printf("\nn: ");
    scanf("%d", &n);					//scan in integer n
    j = 1;								//set j to 1
    pi = 0;								//set pi to 0
    while(j<=n){						//Loop (while j<=n)
											
        if (j % 2 == 0)						//if j % 2 is 0
		{									//Then
            k = 2 * j - 1;						//k = 2 * j - 1
            u = 4 / k;							//u = 4 / k
            pi = pi - u;						//pi = pi - u
        }
        else{								//Else
            y = 2 * j - 1;						//y = 2 * j - 1
            i = 4 / y; 							//i = 4 / y
            pi = pi + i;						//pi = pi + i

        }									//End If
        j++;								//Add one to j
    }									//End Loop when j>n
    printf("The approximation of pi using %d terms is %f."
	, n, pi);					 		//print value of pi using n terms
    
    return 0;
}										//End