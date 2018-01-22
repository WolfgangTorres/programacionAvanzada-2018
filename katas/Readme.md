Kata0:

Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].


break down:

Estara ordenado el arreglo? No 

Si habra numeros que den el target?? Al menos dos elementos tienen que dar el target

El caso mas sencillo cual sera?? Cuando en el arreglo solo haya dos elementos -> return[0,1]

Si no fuera el caso mas sencillo como lo haria?? El target menos un elemento y despues recorrer el arreglo para ver si se encuentra el resultado en el arreglo -> 9-2 = 7; encontrar 7 en el arreglo

Contexto

Se puede hacer obtener un elemento del arreglo y ese elemento lo restas del target y el valor que te da de la resta lo buscas en el arreglo, si no se encuentra, pasas hacer la resta con el siguiente elemento. Esto seria n^2

La otra forma seria utlizando hashtable esto seria nlogn

Funciona
Le pasas el arreglo, el tamaño del arreglo y el target. 
Obtiene el primer elemento lo resta con el target y el resultado lo busca en el arreglo. Si encuentra el resultado regresa los indices de los elementos. Si no lo encuentra se pasa al siguiente elemnto hace la resta y repite el proceso.


Kata1:

Given two lists Aand B, and B is an anagram of A. B is an anagram of A means B is made by randomizing the order of the elements in A.

We want to find an index mapping P, from A to B. A mapping P[i] = j means the ith element in A appears in B at index j.

These lists A and B may contain duplicates. If there are multiple answers, output any of them.


break down:

Estara ordenado el arreglo? No 

Si tendran los dos arreglos los mismos numeros?? Si

El caso mas sencillo cual sera?? Cuando en el arreglo solo haya dos elementos y se encuentren en la misma posicion -> return[0,1]

Si no fuera el caso mas sencillo como lo haria?? Agarrar el primer elemento del arreglo A y buscarlo en el arreglo B con un for y asi sucesivamente

Contexto

Se puede hacer obtener un elemento del arreglo y ese elemento lo buscas en el otro arreglo usando otro for. Esto seria n^2

No estoy muy seguro de que otra forma se pudiera hacer pero creo que con hashtables

Funciona
Le pasas los dos arreglos y el tamaño. Usas dos for, el primero para agarrar el primer elemento y el segundo for para comparar ese elemento en el otro arreglo hasta encontrarlo.