#include <stdio.h>


int main(void)
{   
    //elevado(3,2);
    printf("%i\n",elevado(3,3));
    return 0;
}

int elevado (int base, int expoente){
    if (expoente == 0){
        return 1;
    }
    else if (expoente > 0)
    {
        return base * elevado(base,expoente - 1 );
    }
}