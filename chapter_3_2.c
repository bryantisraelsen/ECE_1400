/*
* Program: program_3_2.c
* Function Title: Main
* Summary: display english representation of two digit integer
* 
* input: None
* output: None
* Pseudocode
* Begin
*	define variables
*	Ask for two digit number
*	scan in number
*	divide by 10 to get 10 place digit (b)
*   find remainder to get 1 place digit (c)
*	print "The English representation of # is "
*   If b equals 0
*   Then
*       switch looking at c
*           case 0 print "zero"
*           case 1 print "one"
*           case 2 print "two"
*           case 3 print "three"
*           case 4 print "four"
*           case 5 print "five"
*           case 6 print "six"
*           case 7 print "seven"
*           case 8 print "eight"
*           case 9 print "nine"
*   Else 
      If b equals 1
*     Then
*               switch looking at c
*               case 0 print "ten"
*               case 1 print "eleven"
*               case 2 print "twelve"
*               case 3 print "thirteen"
*               case 4 print "fourteen"
*               case 5 print "fifteen"
*               case 6 print "sixteen"
*               case 7 print "seventeen"
*               case 8 print "eighteen"
*               case 9 print "nineteen"
        Else 
          If b equals 2
          Then
             print "twenty"
             switch looking at c
                case 0: do nothing
                case 1: print "-one"
                case 2 print "-two"
*               case 3 print "-three"
*               case 4 print "-four"
*               case 5 print "-five"
*               case 6 print "-six"
*               case 7 print "-seven"
*               case 8 print "-eight"
*               case 9 print "-nine"
*         Else 
            If b equals 3
*           Then
*               print "thirty"
*               switch looking at c
                    case 0: do nothing
                    case 1: print "-one"
                    case 2 print "-two"
*                   case 3 print "-three"
*                   case 4 print "-four"
*                   case 5 print "-five"
*                   case 6 print "-six"
*                   case 7 print "-seven"
*                   case 8 print "-eight"
*                   case 9 print "-nine"
*           Else 
                If b equals 4
*               Then 
                    print "fourty"
*                   switch looking at c
                        case 0: do nothing
                        case 1: print "-one"
                        case 2 print "-two"
*                       case 3 print "-three"
*                       case 4 print "-four"
*                       case 5 print "-five"
*                       case 6 print "-six"
*                       case 7 print "-seven"
*                       case 8 print "-eight"
*                       case 9 print "-nine"
*               Else 
                    If b equals 5
*                   Then 
                        print "fifty"
*                       switch looking at c
                            case 0: do nothing
                            case 1: print "-one"
                            case 2 print "-two"
*                           case 3 print "-three"
*                           case 4 print "-four"
*                           case 5 print "-five"
*                           case 6 print "-six"
*                           case 7 print "-seven"
*                           case 8 print "-eight"
*                           case 9 print "-nine"
*                   Else 
                        If b equals 6
*                       Then 
                            print "sixty"
*                           switch looking at c
                                case 0: do nothing
                                case 1: print "-one"
                                case 2 print "-two"
*                               case 3 print "-three"
*                               case 4 print "-four"
*                               case 5 print "-five"
*                               case 6 print "-six"
*                               case 7 print "-seven"
*                               case 8 print "-eight"
*                               case 9 print "-nine"
*                       Else 
                            If b eqauls 7
*                           Then 
                                print "seventy"
*                               switch looking at c
                                    case 0: do nothing
                                    case 1: print "-one"
                                    case 2 print "-two"
*                                   case 3 print "-three"
*                                   case 4 print "-four"
*                                   case 5 print "-five"
*                                   case 6 print "-six"
*                                   case 7 print "-seven"
*                                   case 8 print "-eight"
*                                   case 9 print "-nine"
*                           Else 
                                If b equals 8
*                               Then 
                                    print "eighty"
*                                   switch looking at c
                                        case 0: do nothing
                                        case 1: print "-one"
                                        case 2 print "-two"
*                                       case 3 print "-three"
*                                       case 4 print "-four"
*                                       case 5 print "-five"
*                                       case 6 print "-six"
*                                       case 7 print "-seven"
*                                       case 8 print "-eight"
*                                       case 9 print "-nine"
*                               Else 
*                                   print "ninety"
*                                       switch looking at c
                                            case 0: do nothing
                                            case 1: print "-one"
                                            case 2 print "-two"
*                                           case 3 print "-three"
*                                           case 4 print "-four"
*                                           case 5 print "-five"
*                                           case 6 print "-six"
*                                           case 7 print "-seven"
*                                           case 8 print "-eight"
*                                           case 9 print "-nine"
*                                   EndIf
                                EndIf
*                           EndIf
*                       EndIf
*                   EndIf
*               EndIf
*           EndIf
*       EndIf
*   EndIf
*                                   
*   print "."          
*       
* End
*/
#include <stdio.h>
int main() {                                        //Begin
    int a, b, c, d;                                 //define variables
    printf("Enter a two-digit number (1-99): ");    //Ask for two digit number
    scanf("%d", &a);                                //scan in number
    b = a / 10;                        //divide by 10 to get 10 place digit (b)
    c = a % 10;                       //find remainder to get 1 place digit (c)
    printf("The English representation of %d is " 
        , a);                     //print "The English representation of # is "
    if (b == 0)                     //If b equals 0
    {                               //Then
        switch (c) {                //switch looking at c
        case 0: printf("zero");     //case 0 print "zero"
            break;
        case 1: printf("one");      //case 1 print "one"
            break;
        case 2: printf("two");      //case 2 print "two"
            break;
        case 3: printf("three");    //case 3 print "three"
            break;
        case 4: printf("four");     //case 4 print "four"
            break;
        case 5: printf("five");     //case 5 print "five"
            break;
        case 6: printf("six");      //case 6 print "six"
            break;
        case 7: printf("seven");    //case 7 print "seven"
            break;
        case 8: printf("eight");    //case 8 print "eight"
            break;
        case 9: printf("nine");     //case 9  print "nine"
            break;
        }
    }
    else                                            //Else
        if (b == 1)                                 //If b equals 1
        {                                           //Then
            switch (c) {                            //switch looking at c           
            case 0: printf("ten");                  //case 0 print "ten"
                break;
            case 1: printf("eleven");               //case 1 print "eleven"
                break;
            case 2: printf("twelve");               //case 2 print "twelve"
                break;
            case 3: printf("thirteen");             //case 3 print "thirteen"
                break;
            case 4: printf("fourteen");             //case 4 print "fourteen"
                break;
            case 5: printf("fifteen");              //case 5 print "fifteen"
                break;
            case 6: printf("sixteen");              //case 6 print "sixteen"
                break;
            case 7: printf("seventeen");            //case 7 print "seventeen"
                break;
            case 8: printf("eighteen");             //case 8 print "eighteen"
                break;
            case 9: printf("nineteen");             //case 9 print "nineteen"
                break;

            }
        }
        else                                        //Else
            if (b == 2)                             //If b equals 2
            {                                       //Then
            printf("twenty");                       //print "twenty"
            switch (c) {                            //switch looking at c
            case 0: break;                          //case 0 do nothing
            case 1: printf("-one");                 //case 1 print "-one"
                break;
            case 2: printf("-two");                 //case 2 print "-two"
                break;
            case 3: printf("-three");               //case 3 print "-three"
                break;
            case 4: printf("-four");                //case 4 print "-four"
                break;
            case 5: printf("-five");                //case 5 print "-five"
                break;
            case 6: printf("-six");                 //case 6 print "-six"
                break;
            case 7: printf("-seven");               //case 7 print "-seven"
                break;
            case 8: printf("-eight");               //case 8 print "-eight"
                break;
            case 9: printf("-nine");                //case 9 print "-nine"
                break;
            }

        }
        else                                        //Else
        if (b == 3)                                 //If b equals 3
        {                                           //Then
            printf("thirty");                       //print "thirty"
            switch (c) {                            //switch looking at c
            case 0: break;                          //case 0 do nothing
            case 1: printf("-one");                 //case 1 print "-one"
                break;
            case 2: printf("-two");                 //case 2 print "-two"
                break;
            case 3: printf("-three");               //case 3 print "-three"
                break;
            case 4: printf("-four");                //case 4 print "-four"
                break;
            case 5: printf("-five");                //case 5 print "-five"
                break;
            case 6: printf("-six");                 //case 6 print "-six"
                break;
            case 7: printf("-seven");               //case 7 print "-seven"
                break;
            case 8: printf("-eight");               //case 8 print "-eight"
                break;
            case 9: printf("-nine");                //case 9 print "-nine"
                break;
            }
        }
        else                                    //Else
        if (b == 4)                             //If b equals 4
        {                                       //Then
            printf("forty");                    //print "forty"
            switch (c) {                        //switch looking at c
            case 0: break;                      //case 0 do nothing
            case 1: printf("-one");             //case 1 print "-one"
                break;
            case 2: printf("-two");             //case 2 print "-two"
                break;
            case 3: printf("-three");           //case 3 print "-three"
                break;
            case 4: printf("-four");            //case 4 print "-four"
                break;
            case 5: printf("-five");            //case 5 print "-five"
                break;
            case 6: printf("-six");             //case 6 print "-six"
                break;
            case 7: printf("-seven");           //case 7 print "-seven"
                break;
            case 8: printf("-eight");           //case 8 print "-eight"
                break;
            case 9: printf("-nine");            //case 9 print "-nine"
                break;
            }
        }

        else                                    //Else
        if (b == 5)                             //If b equals 5
        {                                       //Then         
            printf("fifty");                    //print "fifty"
            switch (c) {                        //switch looking at c
            case 0: break;                      //case 0 do nothing
            case 1: printf("-one");             //case 1 print "-one"
                break;
            case 2: printf("-two");             //case 2 print "-two"
                break;
            case 3: printf("-three");           //case 3 print "-three"
                break;
            case 4: printf("-four");            //case 4 print "-four"
                break;
            case 5: printf("-five");            //case 5 print "-five"
                break;
            case 6: printf("-six");             //case 6 print "-six"
                break;
            case 7: printf("-seven");           //case 7 print "-seven"
                break;
            case 8: printf("-eight");           //case 8 print "-eight"
                break;
            case 9: printf("-nine");            //case 9 print "-nine"
                break;
            }
        }
        else                                    //Else
        if (b == 6)                             //If b equals 6
        {                                       //Then
            printf("sixty");                    //print "sixty"
            switch (c) {                        //switch looking at c
            case 0: break;                      //case 0 do nothing
            case 1: printf("-one");             //case 1 print "-one"
                break;
            case 2: printf("-two");             //case 2 print "-two"
                break;
            case 3: printf("-three");           //case 3 print "-three"
                break;
            case 4: printf("-four");            //case 4 print "-four"
                break;
            case 5: printf("-five");            //case 5 print "-five"
                break;
            case 6: printf("-six");             //case 6 print "-six"
                break;
            case 7: printf("-seven");           //case 7 print "-seven"
                break;
            case 8: printf("-eight");           //case 8 print "-eight"
                break;
            case 9: printf("-nine");            //case 9 print "-nine"
                break;

            }
        }
        else                                    //Else
        if (b == 7)                             //If b equals 7
        {                                       //Then
            printf("seventy");                  //print "seventy"
            switch (c) {                        //switch looking at c
            case 0: break;                      //case 0 do nothing
            case 1: printf("-one");             //case 1 print "-one"
                break;
            case 2: printf("-two");             //case 2 print "-two"
                break;
            case 3: printf("-three");           //case 3 print "-three"
                break;
            case 4: printf("-four");            //case 4 print "-four"
                break;
            case 5: printf("-five");            //case 5 print "-five"
                break;
            case 6: printf("-six");             //case 6 print "-six"
                break;
            case 7: printf("-seven");           //case 7 print "-seven"
                break;
            case 8: printf("-eight");           //case 8 print "-eight"
                break;
            case 9: printf("-nine");            //case 9 print "-nine"
                break;
            }
        }
        else                                    //Else
        if (b == 8)                             //If b equals 8
        {                                       //Then
            printf("eighty");                   //print "eighty"
            switch (c) {                        //switch looking at c
            case 0: break;                      //case 0 do nothing
            case 1: printf("-one");             //case 1 print "-one"
                break;
            case 2: printf("-two");             //case 2 print "-two"
                break;
            case 3: printf("-three");           //case 3 print "-three"
                break;
            case 4: printf("-four");            //case 4 print "-four"
                break;
            case 5: printf("-five");            //case 5 print "-five"
                break;
            case 6: printf("-six");             //case 6 print "-six"
                break;
            case 7: printf("-seven");           //case 7 print "-seven"
                break;
            case 8: printf("-eight");           //case 8 print "-eight"
                break;
            case 9: printf("-nine");            //case 9 print "-nine"
                break;
            }
        }
        else {                                  //Else
            printf("ninety");                   //print "ninety"
            switch (c) {                        //switch looking at c
            case 0: break;                      //case 0 do nothing
            case 1: printf("-one");             //case 1 print "-one"
                break;
            case 2: printf("-two");             //case 2 print "-two"
                break;
            case 3: printf("-three");           //case 3 print "-three"
                break;
            case 4: printf("-four");            //case 4 print "-four"
                break;
            case 5: printf("-five");            //case 5 print "-five"
                break;
            case 6: printf("-six");             //case 6 print "-six"
                break;
            case 7: printf("-seven");           //case 7 print "-seven"
                break;
            case 8: printf("-eight");           //case 8 print "-eight"
                break;
            case 9: printf("-nine");            //case 9 print "-nine"
                break;
            }                                   //EndIf
        }                                       //EndIf
                                                //EndIf
                                                //EndIf
                                                //EndIf
                                                //EndIf
                                                //EndIf
                                                //EndIf
                                                //EndIf
    printf(".");                                //print "."
    return 0;
}                                               //End