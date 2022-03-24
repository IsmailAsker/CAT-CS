#include <stdio.h>
#include <ctype.h>
#include <cs50.h>
#include <string.h>


int main(void)
{

    //Defining variables and the string array .

    string text = get_string("Enter text : ") ;

    int sent = 0;
    int let = 0;
    int word =0;

    int useless =0 ; // I have a question for supervisors here .

    //Length of array
    int length = strlen(text) ;



    //Counting
    for (int i =0 ; i <length ; i++ )
    {

        //Count Sentences

        if ( text[i] == '.' || text[i] == '!' || text[i] == '?'   )
        {
            sent++ ;


        }

        //Cout Words
         else if ( text[i] == ' ' )
         {

             word++ ;

         }

         //Cout letters

         else if ( text[i] >= 'A'  && text[i] <= 'Z' )

         {

             let++ ;

         }
         else if( text[i] >= 'a' && text[i] <= 'z' )

         {

             let++;

         }

         // I have  question about this last else . What should i put in it ??

         else
         {

            useless++;

         }





    }

    //To count the last word in the text  **  I'm not sure about that **

    word++;



    printf("number of letters : %i \n " , let ) ;

    printf( "number of words : %i \n" , word ) ;

    printf( "number of sent : %i \n" , sent) ;


    //Counting averages needed for Coleman-Liau formula

   float letavg = ( ( float ) let /  word ) * 100 ;

   float sentavg = ( ( float ) sent / word ) * 100 ;


    //Coleman-Liau formula
   float index =   0.0588 * letavg  -  0.296 * sentavg  - 15.8 ;

   float fraction = index - (int) index ;



    //Round the resulting index number to the nearest whole number
   if ( fraction >= 0.5  )
   {

       index++;

   }


    //Getting only integral part
   int result = (int) index;



    //Checking results for the grades
    if ( result < 1)
    {
        printf("Before grade 1");

    }

    else if( result >=16 )
    {
        printf("Grade : 16+ " ) ;
    }
    else
    {

        printf("Grade : %i" , result) ;

    }




}
