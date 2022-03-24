#include <stdio.h>
#include <cs50.h>

int main(void)
{

    //Ask for Height

   int h;
   do
   {
       h = get_int("Height : ");
   }
   while (h < 1 || h>8) ;

   int space = h;

    //Bulding pyramid with loops

    for(int i = 0 ; i < h ;i++ )
    {

        // Custom num of spaces

    for (int s = 0; s<space;s++)

    {
        printf(" ");
    }
    space--;

        //Blocks for rows
        for(int j = 0 ; j<=i ;j++ )
        {


            printf("#");


        }

        printf("  ");
        for(int x=0 ; x<=i ;x++)
        {
            printf("#");
        }



        printf("\n");

    }

}