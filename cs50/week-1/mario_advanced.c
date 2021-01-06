#include <cs50.h>
#include <stdio.h>
void mariof(void);
int main(void){
    mariof();
}

void mariof(void){
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
            for(int k = height; k>i+1; k--){
                    printf(" ");
                }
            for(int j=0; j<i+1; j++){
                
            printf("#");
                }
            printf("  ");
            for(int k=0; k<i+1; k++){
                printf("#");
            }
              printf("\n");
        }
           
    }}
while(condt);
}
