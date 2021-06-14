#include <stdio.h>
#include <stdlib.h>

int main()
{
       int y;

      do{
         printf("******** \n:  ");
         printf("Please enter 1 to buy \n:  ");
         printf("Please enter 2 to sell \n:  ");
         printf("Please enter 3 to print data \n:  ");
          printf("Please enter 4 to exit \n:  ");
          printf("******** \n:  ");


    scanf("%d",&y);
     switch(y)
     {
        case 1:
        {            int z,b;

           printf("------------------------------ NOTE ------------------------------ \n:  ");
         printf("Dresses  barcood --> 333  \n:  ");
         printf("Pants   barcood --> 444\n:  ");
          printf("T-shirts barcood --> 555\n:  ");
          printf("------------------------------------------------------ \n:  ");
        for(int i = 0; i < 1000; i++)
        {

          printf("please enter number of items \n");
          scanf("%d",&z);
             printf("please enter one barcode from menu\n");
             scanf("%d",&b);

          if(b==333||b==444||b==555)

              break;

          else
          {
             printf("------------------------------------------------------ \n:  ");
           printf("Enter the right barcode \n");
            printf("------------------------------------------------------ \n:  ");
           continue;
          }

        }

           buy(z, b);
          inventory();
        }
        break;
        case 2:
        {
          int z,b;
           printf("------------------------------ NOTE ------------------------------ \n:  ");
         printf("Dresses  barcood --> 333  \n:  ");
         printf("Pants   barcood --> 444\n:  ");
          printf("T-shirts barcood --> 555\n:  ");
          printf("------------------------------------------------------ \n:  ");

          for(int i = 0; i < 1000; i++)
        {

          printf("please enter number of items \n");
          scanf("%d",&z);
             printf("please enter one barcode from menu\n");
             scanf("%d",&b);

          if(b==333||b==444||b==555)

              break;

          else
          {
             printf("------------------------------------------------------ \n:  ");
           printf("Enter the right barcode \n");
            printf("------------------------------------------------------ \n:  ");
           continue;
          }

        }

           sell(z, b);
          inventory();
        }
        break;
        case 3:
        {
          print();
          break;
        }
        case 4:
        {
          exit(0);
        }
        default:
        {
          printf("Choose One of the Four options");
          break;
        }
     }
      }while(1);


}

