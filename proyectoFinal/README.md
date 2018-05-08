# programacionAvanzadaProyectoFinal-2018

## Problem

Cascading Style Sheets, or CSS is a style sheet language, most popularly known for styling web pages. Each object on a web page (like a picture, a paragraph, a table) can have various properties (like height, width, size, colour), and these properties can be set using CSS. Each of these objects has a unique identifier called id, using which CSS can identify the object and assign value to its property.

Due to hierarchical nature of the web page, often same property of an object gets assigned different values in different CSS statements. To decide what the final value will be, each statement has a priority assigned to it. The statement with the highest priority will be the one that sets the value of the property. If there are more than one statements with same priority, then the one which was executed last amongst those will set the value.

Given multiple CSS statements in the order they were executed, answer a few queries about the final values of certain objects


## Input
First line contains two space-separated integers N and M, the number of CSS statements and the number of queries respectively.

Following N lines will each have 4 values id, attr, val, priority, which mean that a CSS statement tries to assign value val to the attribute named attr of the object id, and that the priority of this statement is equal to priority.

Each of the next M lines will contain two values id and attr, for which you have to print value of the attribute attr of object id. You can assume that there is a statement that assigns value to this attribute attr of object id

## Output
Print exactly M lines, ith line contains the answer to the ith query as described above.

## Breakdown

Bueno a lo que entiendo del problema la N representa el numero de atributos que va a ver con sus valores y la M representa el numero de veces que vamos a imprimir los valores de estos atributos.
Entonces estos atributos tenemos que guardarlos en un arreglo, una matriz, pero lo mas optimizado seria guardarlos en una hashtable para acceder a los valores mas rapido, dependiendo de los valores de id y atributo que nos pase el usuario para conseguir los valores.

## Solucion

La soludion que voy a implementar va a ser con una matriz para guardar los valores y otra matriz para guardar las prioridades, tambien tendre unas variables id, atributos, prioridadTemporal, valorTemporar, estos dos ultimos van a estar cambiando dependiendo de lo que el usuario ponga y se van a guardar en la matriz.
Primero inicializare la matriz de prioridades con valores negativos, luego le pedire al usuario que me de los valores de N y M, y creare un for para crear asignar los valores, el for tendra N loops, y en cada iteracion se le preguntara al usuario el valor de id, atributo, valor y prioridad(id y atributo tienen que ser iguales segun el ejemplo) que le quiere dar, despues compruebo el que la nueva prioridad sea mayor que la prioridad prioridad que ya tenia para poder sobreescribir el valor existente y la prioridad existente en sus matrices correspondientes.
Una vez esto paso a M que son las veces que vamos a imprimir los valores dependiendo del id y atributo, creo un for que tendra M iteraciones y en cada iteracion le pregunto al usuario el id y su atributo y busco el valor de acuerdo con esos id y atributos en la matriz de valores y lo imprimo.
