/*****************************************************************
Function Title: Main
Summary: finds square root of number using newton's method
Inputs: None
Outputs: None
Complie instructions: gcc program_5.c -o program_5.exe
*******************************************************
Pseudocode

Begin
	define double variables
	define integer variable
	ask for positive number
	set y equal to 1
	set d equal to 12
	set a equal to 1
	set n equal to 1
	Loop
		If n % 2 is 0
		Then
			q equals x divided by y
			s equals y plus q
			a equals s divided by 2
			set y equal to a
		Else
			m equals x divided by y
			o equals y plus m
			d equals o divided by 2
			set y equal to d
		Increment n by 1
		hi equals d minus a
	End Loop when absolute value of hi is >= .00001
	print square root value (y)
End
*****************************************************************/
#include <stdio.h>
#include <math.h>
int main(){											//Begin
    double y, d, a, q, s, m, o, r, hi, qu, me, x;	//define double variables
    int n;											//define integer variable
    printf("Enter a positive number: ");			//ask for positive number
    scanf("%lfd", &x);
    y = 1;											//set y equal to 1
    d = 12;											//set d equal to 12
    a = 1;											//set a equal to 1
    n = 1;											//set n equal to 1
    do{												//Loop
        if (n % 2 == 0)								//If n % 2 is 0
		{											//Then
            q = x / y;								//q equals x divided by y
            s = y + q;								//s equals y plus q
            a = s / 2; 								//a equals s divided by 2
            y = a;									//set y equal to a
        }
        else{										//Else
            m = x / y;								//m equals x divided by y
            o = y + m;								//o equals y plus m
            d = o / 2;								//d equals o divided by 2
            y = d;									//set y equal to d
        }
    n++;											//Increment n by 1
    hi = d - a;										//hi equals d minus a
						//End Loop when absolute value of hi is >= .00001
    }while(fabs(hi) >= .00001);

    printf("Square root: %.5lf", y);		//print square root value (y)

    return 0;
}													//End