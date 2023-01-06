#include <stdio.h>

int main ()
{
    char user[20];
    printf("Whats your name?\n") 
    scanf(user);
    printf ("Hello %s!. have a awesome day!\n",&user);
    
    return 0;
}
