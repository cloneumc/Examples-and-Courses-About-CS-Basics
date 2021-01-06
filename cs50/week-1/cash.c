#include<cs50.h>
#include<stdio.h>
#include<math.h>
void cashOutF(void);
int main(void){
    cashOutF();
    }

void cashOutF (void){
    bool condt = true;
    int quarter = 25;
    int dime = 10;
    int nickel = 5;
    int penny = 1;
    int numOfQ = 0;
    int numOfD = 0;
    int numOfN = 0;
    int numOfP = 0;
    int numOfCoins;
    float customerpayment;
    do{
    customerpayment = get_float("Change: ");
    if(customerpayment<=0){
        condt = true;
    }
    else{
        condt = false;
        int cp = round(customerpayment*100);
        while(cp>=quarter){
            cp -= quarter;
            numOfQ += 1;
           // printf("%i\n",cp);
            }
        while(cp>=dime){
            cp -= dime;
            numOfD +=1;
            //printf("%i\n",cp);
        }
        while(cp>=nickel){
            cp -= nickel;
            numOfN +=1;
           // printf("%i\n",cp);
        }
        while(cp>=penny){
            cp -= penny;
            numOfP +=1;
            //printf("%i\n",cp);
        }

    }
    }
    while(condt);
numOfCoins = numOfQ + numOfD + numOfN + numOfP;
//printf("number of quarters %i\n",numOfQ);
//printf("number of dimes %i\n",numOfD);
//printf("number of nickels %i\n",numOfN);
//printf("number of pennies %i\n",numOfP);
//printf("number of coins %i\n",numOfCoins);
printf("%i\n",numOfCoins);
}
