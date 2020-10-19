#include <stdio.h>
int main(){
    int x=50,y=100;
    switch (x)
    {
    case 50:
    printf("burasi birinci parca ",x);
        break;
     switch (y)
     {
     case 100:
       printf("burasi ikinci parca ",y);

         break;
     
     
     }    
   
    }
    printf("x in degeri: %d \n",x);
    printf("y nin degeri: %d",y);

    return 0;
}