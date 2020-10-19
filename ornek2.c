#include <stdio.h>
int main(){
    int sayi1,sayi2,sayi3,toplamn; 
    float ortalama; 

    printf("3 tane sayi giriniz: "); 

    scanf("%d %d %d", &sayi1, &sayi2, &sayi3); 
    
    toplamn = sayi1 + sayi2 + sayi3; 

    ortalama = (float)toplamn/3; 

    printf("%d + %d + %d = %d", sayi1, sayi2, sayi3, toplamn);

    printf("\n");
    printf("%f",ortalama);
    return 0; 

    


}