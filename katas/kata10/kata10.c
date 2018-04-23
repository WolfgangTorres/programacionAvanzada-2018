#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int validUtf8(int *data, int size) {
        printf("Inicio del metodo, tamaño: %d\n", size);
        int count = 0;
        for (int i=0; i < size; i++) {
            printf("Count: %d",count);
            if (count == 0) {
                if ((data[i] >> 5) == 0b110)
                {
                    count = 1;
                }
                else if ((data[i] >> 4) == 0b1110) 
                {
                    
                    count = 2;
                }
                else if ((data[i] >> 3) == 0b11110)
                { 
                    
                    count = 3;
                }
                else if ((data[i] >> 7)== 0b1)
                {
                   
                    return 0;
                }
            } 
            else {
                if ((data[i] >> 6) != 0b10) 
                {
                    printf("Salio en el Loop: %d\n", i);
                    return 0;
                } 
                count--;
            }
            
            
        }
        if(count == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
        
}

int main(){

    int data[] = {235, 140, 4};
    int respuesta = validUtf8(data, 3);
    if(respuesta)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }

}