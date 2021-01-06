//mario reverse pyramid 

#include <cs50.h>
#include <stdio.h>
int main(void){
    int height;
    bool condt = true;
    do{
    height = get_int("Height: ");
    if(height<1){
        condt = true;
    }
    else if(height>8){
        condt = true;
    }
    else{
        condt = false;
        for(int i=0; i<height; i++){
            for(int j=0; j<i+1; j++){
            printf("#");
                }
            printf("\n");
        }
    }
}
while(condt);
}
