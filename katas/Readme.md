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

Se puede  obtener un elemento del arreglo y ese elemento lo buscas en el otro arreglo usando otro for. Esto seria n^2

No estoy muy seguro de que otra forma se pudiera hacer pero creo que con hashtables

Funciona
Le pasas los dos arreglos y el tamaño. Usas dos for, el primero para agarrar el primer elemento y el segundo for para comparar ese elemento en el otro arreglo hasta encontrarlo.


Kata2:

A password is considered strong if below conditions are all met:

It has at least 6 characters and at most 20 characters.
It must contain at least one lowercase letter, at least one uppercase letter, and at least one digit.
It must NOT contain three repeating characters in a row ("...aaa..." is weak, but "...aa...a..." is strong, assuming other conditions are met).
Write a function strongPasswordChecker(s), that takes a string s as input, and return the MINIMUM change required to make s a strong password. If s is already strong, return 0.


break down:

El caso mas sencillo cual sera?? Cuando todos los caracteres cumplen con los terminos -> return 0

Si no fuera el caso mas sencillo como lo haria?? Agarrar el primer elemento del arreglo de caracteres y comparar para ver si cumple con los requerimientos

Contexto

Se comparan uno por uno los elementos utilizando un for. Esto seria n

No se de que otra forma hacerlo.

Funciona

Le pasas un arreglo de caracteres a la funcion. Utilizando unas librerias de c, se usan funciones que ya checan si tiene mayusculas, minusculas y digito, y otra para usar booleanos. Comparo los caracteres dentro de un for, y si cumplen con los requerimientos hago los booleanos verdaderos.

Kata3:

Initially, there is a Robot at position (0, 0). Given a sequence of its moves, judge if this robot makes a circle, which means it moves back to the original place.

The move sequence is represented by a string. And each move is represent by a character. The valid robot moves are R (Right), L(Left), U (Up) and D (down). The output should be true or false representing whether the robot makes a circle.


break down:

El caso mas sencillo cual sera?? Cuando no escribe nada

Si no fuera el caso mas sencillo como lo haria?? Agarrar el primer elemento del arreglo de caracteres y empezar a comparar con un for

Contexto

Se comparan uno por uno los elementos utilizando un for. Esto seria n

No se de que otra forma hacerlo que fuera mas sencilla. 

Funciona

Le pasas un arreglo de caracteres a la funcion. Utilizando unas librerias de c, se checa cada caracter dentro de un for. Y dependiendo del caracter incremento o disminuyo, x o y. X/Y se inicializan en ceros, si al final estan en ceros camino en circulos.


Kata4:
Validate if a given string is numeric.

Some examples:
"0" => true
" 0.1 " => true
"abc" => false
"1 a" => false
"2e10" => true
Note: It is intended for the problem statement to be ambiguous. You should gather all requirements up front before implementing one.

break down:

El caso mas sencillo cual sera?? Cuando no escribe nada

Si no fuera el caso mas sencillo como lo haria?? usar un for para recorrer el string y compararlo 

Contexto

Se comparan uno por uno los elementos utilizando un for. Esto seria n

Se prodia hacer tambien untilizando whiles e ifs . 

Funciona

Le pasas un arreglo de caracteres a la funcion. Utilizando unas librerias de c, se checa cada caracter dentro de un for. Y dependiendo del caracter se ve si es numero y si es asi se valida sino se rechaza.

Kata5:

You want to build a word cloud, an infographic where the size of a word corresponds to how often it appears in the body of text.

To do this, you'll need data. Write code that takes a long string and builds its word cloud data in a hash table ↴ , where the keys are words and the values are the number of times the words occurred.

Think about capitalized words. For example, look at these sentences:

"After beating the eggs, Dana read the next step:"

"Add milk and eggs, then add flour and sugar."

What do we want to do with "After", "Dana", and "add"? In this example, your final hash table should include one "Add" or "add" with a value of 2

Make reasonable (not necessarily perfect) decisions about cases like "After" and "Dana".

break down:

El caso mas sencillo cual sera?? Cuando no escribe nada o cuando hay una sola palabra

Si no fuera el caso mas sencillo como lo haria?? Utilizando una hashtable donde la palabra sea la key y contenga un int que indica el numero de de veces que ha aparecido la palabra

Contexto

Tendriamos que recorrer todo el string completo para obtener las palabras y luego hacer funciones individuales para comparar las palabras quitandole mayusculas ya que no importa que una este en minusculas o mayusculas cuentan iguales. Luego utilizamos la hashtable para hacer keys con las palabras y ahi ponemos el numero de veces que se repiten. Esto va a tener un running time de O(n).

