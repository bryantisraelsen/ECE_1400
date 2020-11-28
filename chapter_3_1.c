/******************************************************************************
* 
* Program: chapter_3_1.c
* Function Title: Main
* Summary: list biggest and smallest integer out of a list of five
*
* Inputs: None
* Outputs: None
*
* Compile Instructions: gcc chapter_3_1.c -o chapter_3_1.exe
* Pseudocode:
* Begin
*   Define variables
*   Ask for 5 digits 
*   Scan in 5 digits 
*   print "Largest integer: "
*   If a>b,c,d,e
*   Then
*       print a
*   Else 
*       If b>a,c,d,e
*       Then
*           print b
*       Else 
*           If c>a,b,d,e
*           Then
*               print c
*           Else
*               If d>a,b,c,e
*               Then
*                   print d
*               Else 
                    print e
                EndIf
            EndIf
        EndIf
    EndIf
    print "Smallest integer: "
    If a<b,c,d,e
    Then
        print a
    Else
        If b<a,c,d,e
        Then
            print b
        Else
            If c<a,b,d,e
            Then
                print c
            Else
                If d<a,b,c,e
                Then
                    print d
                Else
                    print e
                EndIf
            EndIf
        EndIf
    EndIf
* End
******************************************************************************/
#include <stdio.h>
int main() {                                        //Begin
    int a, b, c, d, e;                              //Define variables
    printf("Enter five integers in any order: ");   //Ask for 5 digits
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);    //Scan in 5 digits
    printf("Largest integer: ");                    //print "Largest integer: "
    if (a > b && a > c && a > d && a > e)           //If a>b,c,d,e
    {                                               //Then
        printf("%d", a);                            //print a
    }
    else                                            //Else
    if (b > a && b > c && b > d && b > e)           //If b>a,c,d,e
    {                                               //Then
        printf("%d", b);                            //print b
    }
    else                                            //Else
    if (c > a && c > b && c > d && c > e)           //If c>a,b,d,e
    {                                               //Then
        printf("%d", c);                            //print c
    }
    else                                            //Else
    if (d > a && d > b && d > c && d > e)           //If d>a,b,c,e
    {                                               //Then
        printf("%d", d);                            //print d
    }
    else                                            //Else
    {
        printf("%d", e);                            //print e
    }                                               //EndIf
                                                    //EndIf
                                                    //EndIf
                                                    //EndIf

    printf("\nSmallest integer: ");             //print "Smallest integer: "
    if (a < b && a < c && a < d && a < e)       //If a<b,c,d,e   
    {                                           //Then
        printf("%d", a);                        //print a
    }
    else                                        //Else
    if (b < a && b < c && b < d && b < e)       //If b<a,c,d,e
    {                                           //Then
        printf("%d", b);                        //print b
    }
    else                                        //Else
    if (c < a && c < b && c < d && c < e)       //If c<a,b,d,e
    {                                           //Then
        printf("%d", c);                        //print c
    }
    else                                        //Else
    if (d < a && d < b && d < c && d < e)       //If d<a,b,c,e
    {                                           //Then
        printf("%d", d);                        //print d   
    }
    else                                        //Else
    {
        printf("%d", e);                        //print e
                                                //EndIf
                                                //EndIf
    }                                           //EndIf
                                                //EndIf

    return 0;
}                                               //End
