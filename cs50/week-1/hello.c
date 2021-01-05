#include <cs50.h>
#include <stdio.h>
int main(void){
    string nameOfUser = get_string("Can you tell me your name? ");
    printf("Hello, %s\n",nameOfUser);
}
