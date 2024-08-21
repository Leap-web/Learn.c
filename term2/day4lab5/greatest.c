#include <stdio.h>
void greatest(int x, int y){
    if(x>y){
        printf("the greatest number is %d",x);
    }
    else{
        printf("the greatest number is %d",y);
    }
}
    int main(){
        int x, y;
        printf("enter the two numbers : ");
        scanf("%d%d", &x, &y);
        greatest(x,y);

        return 0;
    }
 
    

