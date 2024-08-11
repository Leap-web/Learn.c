#include <stdio.h>
#include <string.h>

typedef struct bus{
    char nameBus[15];
    char passenger[15];
    int buffet_price;
    int price;
    
};

int main(){
    struct bus Prime_bus = {"Prime_bus", "8 passengers", 2000, 780000 }; 
    struct bus Express_bus = {"Express_bus", "90 passengers", 250, 340000};



    printf("%s", Prime_bus.nameBus);
    printf("\n%s", Prime_bus.passenger);
    printf("\n$%.2ld", Prime_bus.buffet_price);
    printf("\n$%.2ld", Prime_bus.price);


    printf("\n\n%s", Express_bus.nameBus);
    printf("\n%s", Express_bus.passenger);
    printf("\n$%.2ld", Express_bus.buffet_price);
    printf("\n$%.2ld", Express_bus.price);
    return 0;
}