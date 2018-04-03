# programacionAvanzadaProyecto2-2018

## Problem

You're about to play a simplified "battleship" game with your little brother. The board for this  ame is a rectangular grid with R rows and C columns. At the start of the game, you will close your eyes, and you will keep them closed until the end of the game. Your little brother will take a single rectangular 1 x W ship and place it horizontally somewhere on the board. The ship must always fit entirely on the board, with each cell of the ship occupying exactly one of the grid's cells, and it can never be rotated.

In each turn of the game, you name a cell on the board, and your little brother tells you whether that is a hit (one of the cells occupied by the ship) or a miss. (Your little brother doesn't say which part of the ship was hit -- just that the cell you named has a part of the ship in it.) You have perfect memory, and can keep track of all the information he has given you. Once you have named all of the cells occupied by the ship, the game is over (the ship is sunk), and your score is the number of turns taken. Your goal is to minimize your score.

Although the ship is not supposed to be moved once it is placed, you know that your little brother, who is a brat, plans to cheat by changing the location of the ship whenever he wants, as long as the ship remains horizontal and completely on the board, and the new location is consistent with all the information he has given so far. For example, for a 1x4 board and 1x2 ship, your little brother could initially place the ship such that it overlaps the leftmost two columns. If your first guess was row 1, column 2, he could choose to secretly move the ship to the rightmost two columns, and tell you that (1, 2) was a miss. If your next guess after that was (1, 3), though, then he could not say that was also a miss and move the ship back to its original location, since that would be inconsistent with what he said about (1, 2) earlier.

Not only do you know that your little brother will cheat, he knows that you know. If you both play optimally (you to minimize your score, him to maximize it), what is the lowest score that you can guarantee you will achieve, regardless of what your little brother does?

## Input
The first line of the input gives the number of test cases, T. T lines follow, each with three space-separated integers R, C, and W: the number of rows and columns of the board, followed by the width of the ship.

## Output
For each test case, output one line containing "Case #x: y", where x is the test case number (starting from 1) and y is the minimum score you can guarantee.

## Breakdown

La solucion mas optima seria que los numeros de turnos fueran iguales al ancho del barco (si el barco mide 5 celdas que nada mas sean 5 turnos) pero esto no puede pasar ya que el hermano es tramposo y si le atinamos puede que nos mienta o mueva el barco.
La otra solucion para cuando el hermano haga trampa seria recorrer todo el tablero ya que no sabemos a donde lo moveria el hermano o no sabriamos cuando nos este mintiendo.

## Solucion

Lo primero que se me ocurre es checar que el ancho del barco sea multiplo del numero de columnas del tablero utilizando el modulo. Despues de checar eso si el ancho del barco es multiplo, entonces ya empezamos a recorrer el tablero fila por fila y celda por celda, entonces:  Columnas/Ancho para saber cuantas veces cabe el barco en una fila, a esto le sumamos el Ancho del barco - 1 para saber cuantos turnos nos tomara para saber si si o no esta en esa fila ya que el hermanos puede mentir dandonos datos falsos. Si no es multiplo es la misma formula nada mas que sin el -1 ya que el hermano tendria mas espacio de mover el barco si llegaramos atinarle (si le atinamos al barco el hermano lo puede mover a la izquierdo o derecha para decir que no, eso nos tomaria mas turnos).

Ya por ultimo a la formula multiplicaremos: Filas * (...), ya que se tiene que hacer el mismo recorrido por todas las filas ya que no sabemos cuando este mintiendo el hermano.


