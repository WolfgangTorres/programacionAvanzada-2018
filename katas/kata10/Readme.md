Kata10:

A character in UTF8 can be from 1 to 4 bytes long, subjected to the following rules:

1. For 1-byte character, the first bit is a 0, followed by its unicode code.
2. For n-bytes character, the first n-bits are all one's, the n+1 bit is 0, followed by n-1 bytes with most significant 2 bits being 10.

This is how the UTF-8 encoding would work:

   Char. number range  |        UTF-8 octet sequence
      (hexadecimal)    |              (binary)
   --------------------+---------------------------------------------
   0000 0000-0000 007F | 0xxxxxxx
   0000 0080-0000 07FF | 110xxxxx 10xxxxxx
   0000 0800-0000 FFFF | 1110xxxx 10xxxxxx 10xxxxxx
   0001 0000-0010 FFFF | 11110xxx 10xxxxxx 10xxxxxx 10xxxxxx

Given an array of integers representing the data, return whether it is a valid utf-8 encoding.

## break down:

Estara ordenado el arreglo? En este caso el arreglo no importa si esta ordenado o no, lo que importa es que los numeros si den correctamente la codificacion utf8, como la que muestra la tabla.

Si habra numeros que den el target?? no necesariamete tiene que haber.

El caso mas sencillo cual sera?? El caso mas sencillo seria el primero que fuera de un byte el caracter

Si no fuera el caso mas sencillo como lo haria?? Lo que se me ocurre es recorrer el arreglo con un for y hacer un shif hacia la derecha para ver si los numeros forman una secuencia utf8.

Contexto

Pasas el arreglo con los numeros al metodo, en el metodo usas un for para recorrerlos, con el primer elemento tenemos 3 opciones de acuerdo con la tabla:
    1. Haciendo shift a la derecha con 5 y viendo que despues de hacerle shift de igual a 6.
    2. Haciendo shift a la derecha con 4 y viendo que de 14 despues de hacerle shift.
    3. haciendo shift a la derecha con 3 y viendo que de 30 despues de hacerle shift.
        Si no da ninguna de estas esta mal y se regresa falso.
Y para los numero restantes tienen que dar 2 al hacerle shift por 6 a la derecha. Mientras den 2 esta bien, si dan cualquier otro numero esta mal y se regresa false, si todo sale bien se regresa true.

