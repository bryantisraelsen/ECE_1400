#include <stdio.h>
void pay_amount
(int dollars, int *twenties, int *tens, int *fives, int *twos,int *ones);
/*****************************************************************
Function title: main
Summary: ask for dollar amount and print results
Inputs: none
Outputs: int 0
Pseudocode
Begin
	define int variables
	ask for dollar value
	scan in dollar value
	run other function
	print explaining results
	print how many 20s are needed
	print how many 10s are needed
	print how many 5s are needed
	print how many 2s are needed
	print how many 1s are needed
End
*****************************************************************/
int main(){										//Begin
	int d, twe, te, f, tw, o;					//define int variables
	printf("Enter an amount to be broken into bills: $");//ask for dollar value
	scanf("%d", &d);							//scan in dollar value
	pay_amount(d, &twe, &te, &f, &tw, &o);		//run other function
	printf("The following numbers of the"); 	//print explaining results
	printf(" specified bills are required:\n");
	printf("$20: %d\n", twe);				//print how many 20s are needed
	printf("$10: %d\n", te);				//print how many 10s are needed
	printf("$5: %d\n", f);					//print how many 5s are needed
	printf("$2: %d\n", tw);					//print how many 2s are needed
	printf("$1: %d", o);					//print how many 1s are needed
	return 0;
}											//End
/***********************************************************************
Function title: main
Summary: computes how many of each dollar bill is needed for amount given
Inputs: d (dollar amount), twe address (twe is the variable for the number 
		of twenties), te address (te is the variable for the number of tens),
		f address (f is the variable for the number of fives), tw address (tw 
		is the variable for the number of twos), o address (o is the variable
		for the number of ones)
Outputs: none technically (but the amounts of the number of bills are stored
		in variables in the main function through pointers)
Pseudocode
Begin
	define variables for function
	*twenties equals dollars divided by 20
	gg is *twenties times 20
	dollars equals dollars minus gg
	*tens equals dollars divided by 10
	hh is *tens times 10
	dollars equals dollars minus hh
	*fives equals dollars divided by 5
	ii is *fives times 5
	dollars equals dollars minus ii
	*twos equals dollars divided by 2
	jj is *twos times 2
	dollars equals dollars minus jj
	*ones equals dollars
End
***********************************************************************/
void pay_amount
(int dollars, int *twenties, int *tens, int *fives, int *twos,int *ones){//Begin
	int gg, hh, ii, jj;					//define variables for function
	*twenties = dollars / 20;		//*twenties equals dollars divided by 20
	gg = *twenties * 20;				//gg is *twenties times 20			
	dollars -= gg;						//dollars equals dollars minus gg
	*tens = dollars / 10;				//*tens equals dollars divided by 10
	hh = *tens * 10;					//hh is *tens times 10
	dollars -= hh;						//dollars equals dollars minus hh
	*fives = dollars / 5;				//*fives equals dollars divided by 5
	ii = *fives * 5;					//ii is *fives times 5
	dollars -= ii;						//dollars equals dollars minus ii
	*twos = dollars / 2;				//*twos equals dollars divided by 2
	jj = *twos * 2;						//jj is *twos times 2
	dollars -= jj;						//dollars equals dollars minus jj
	*ones = dollars;					//*ones equals dollars
}										//End