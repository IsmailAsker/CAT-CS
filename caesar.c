#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <stdlib.h>


//Getting key 
int main(int argc, string argv[])
{

    if ( argc == 2 )

    {

     string text = get_string( "Enter plain text :- " ) ;

     char cypher[strlen(text)]  ;

    int k = atoi(argv[1]) ;

    if ( k > 0 )
    {

    
    //Cypher each caracter with the key ( k )
     for ( int i = 0 ; i < strlen ( text ) ; i++ )

     {

          if ( text[ i ] >= 'A' && text[ i ] <= 'Z' )


          {
              text [i] = text [i] - 65 ;
            
            cypher[i] = ( text [i] + k ) %26 ;

            cypher [i] = cypher[i] + 65 ;

          }


           else  if ( text[ i ] >= 'a' && text[ i ] <= 'z' )


          {

               text [i] = text [i] - 97 ;

            cypher[i] = ( text [i] + k ) %26 ;

            cypher [i] = cypher[i] + 97 ;

          }

          else

          {

              cypher [ i ] =  text [ i ]  ;


          }



     }

    
    //printing Cyphertext
     printf("Cypher text : ") ;

     for (int i = 0 ; i < strlen ( cypher ) ; i++ )

     {

          printf("%c" , cypher[ i ]) ;


     }
     printf("\n");





}



else

{

    printf("Type only two words please : ./ ( your program name ) and  Key number  \n ") ;

    return 0 ;

}



}



else
{
    printf("Enter ./(name of your programm ) and POSITIVE key num ") ;

}



}