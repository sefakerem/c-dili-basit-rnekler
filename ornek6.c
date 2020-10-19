#include <stdio.h>
int main() {
    char grade = 'A';
    
    
    switch(grade) {
    
    case 'A':
        printf("Muhtesemsin");
        break;
    case 'B':
    printf("Basarilisin boyle devam et");

    break;
    case 'C':
    printf("Tebrikler" );
    break;
    case 'D':
    printf("Gecebildin" );
    break;
    case 'F':
    printf("Tekrar denemelisin");
    break;



    default:
    printf("gecersiz not " );
        
    }
    printf("Senin Dereceli notun %d",grade);
    return 0;
}
