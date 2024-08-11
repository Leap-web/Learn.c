#include <stdio.h>
#include <string.h>

struct bus{
    char nameBus[15];
    char passenger[15];
    int buffet_price;
    int price;
    
};

int main(){
    struct bus Prime_bus;
    struct bus Normal_bus;

    strcpy(Prime_bus.nameBus, "Prime");
    strcpy(Prime_bus.passenger, "8 passenger only");
    Prime_bus.buffet_price = 2000;
    Prime_bus.price = 780000; 

    strcpy(Normal_bus.nameBus, "Normal");
    strcpy(Normal_bus.passenger, "50 passenger");
    Normal_bus.buffet_price = 500;
    Normal_bus.price = 240000; 

    printf("%s", Prime_bus.nameBus);
    printf("\n%s", Prime_bus.passenger);
    printf("\n$%.2ld", Prime_bus.buffet_price);
    printf("\n$%.2ld", Prime_bus.price);

    printf("\n\n%s", Normal_bus.nameBus);
    printf("\n%s", Normal_bus.passenger);
    printf("\n$%.2ld", Normal_bus.buffet_price);
    printf("\n$%.2ld", Normal_bus.price);    
    return 0;
}
