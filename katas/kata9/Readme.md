Kata9:

You've built an inflight entertainment system with on-demand movie streaming.

Users on longer flights like to start a second movie right when their first one ends, but they complain that the plane usually lands before they can see the ending. So you're building a feature for choosing two movies whose total runtimes will equal the exact flight length.

Write a function that takes an integer flight_length (in minutes) and a list of integers movie_lengths (in minutes) and returns a boolean indicating whether there are two numbers in movie_lengths whose sum equals flight_length.

break down:

Estara ordenado el arreglo? No pero en este caso no importa ya que no estamos buscando nada en especifico mas que la suma 

Si habra numeros que den el target?? Al menos dos elementos tienen que dar el target

El caso mas sencillo cual sera?? Cuando en el arreglo solo haya dos elementos y la suma de lo que dura el vuelo -> return[0,1]

Si no fuera el caso mas sencillo como lo haria?? Lo mas sencillo que se me ocurre seria con fors.

Contexto

Se puede hacer con dos for's ya que asi podemos recorrer todo los elemento y podemos sacar todas las posibles combinaciones de peliculas que el usuario puede ver, por ejemplo: la pelicula 1 con la pelicula 5 o con la pelicula 8. De otra manera si lo unico que nos interesa es sacar nada mas una combinacion lo pudieramos hacer con un for sumando el elemento actual con el que se encuentra adelante, nada mas que esto puede que no nos de si los tiempos de las peliculas que dan el tiempo del vuelo no estan juntas.

La otra forma seria utlizando hashtable esto seria nlogn

Funciona
Le pasas el arreglo, el tamaño del arreglo y el target. 
Se crean dos for's anidados y despues se hace la suma y se compara con la duracion del vuelo y asi hasta comparar todas las peliculas, te imprime las peliculas que puedes ver y regresa el boolean de que si hubo peliculas que duren el tiempo del vuelo, esta solucion seria O(n^2).