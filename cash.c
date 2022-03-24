#include <stdio.h>
#include <cs50.h>

int main(void)

{

    //Used Coins

    float q =25 ;
    float d =10  ;
    float n =5 ;
    float p =1 ;
    float answer=0 ;


    // Ask for change

    float chg;

    do {     chg = get_float("Enter your change ( in $ ) :") ;

            chg = chg * 100 ;
    }

    while ( chg < 0  ) ;

    //Reply

    if ( chg == 0 )

    {
        printf("Thx no change .") ;
    }




    //claculate coins num

    else
    {

        do {

        if ( chg >= q )
        {
            chg = chg - q ;
            answer++ ;

        }

        else if (chg >= d )
        {
            chg = chg - d ;
            answer++ ;
        }

        else if ( chg >= n )
        {
            chg = chg - n ;
            answer ++ ;
        }

        else
        {
            chg = chg - p ;
            answer ++ ;
        }

        }

        while ( chg > 0  ) ;

        printf ("%f" , answer) ;




    }


    }









