#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{    
    if (argc != 2)
    {
        printf("Wrong number of arguments. Please try again.\n");
        
        return 1;
    }
    else 
    {
        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            if (!isalpha(argv[1][i]))
            {
                printf("Key must be alphabetic chars only.");
                
                return 1;
            }    
        }
    }
    
    string k = argv[1];
    int kLen = strlen(k);
    
    string op = get_string("input: ");
    
    for (int i = 0, j = 0, n = strlen(op); i < n; i++)
    {            
        int letterKey = tolower(k[j % kLen]) - 'a';
        
        if (isupper(op[i]))
        {
            printf("%c", 'A' + (op[i] - 'A' + letterKey) % 26);
            
            j++;
        }
        else if (islower(op[i]))
        {
            printf("%c", 'a' + (op[i] - 'a' + letterKey) % 26);
            j++;
        }
        else
        {
            printf("%c", op[i]);
        }
    }
    
    printf("\n");
    
    return 0;
}

