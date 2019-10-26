// laboratorio6.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
using namespace std;

#define NUM_STATION 4
#define NUM_LINE 2

int min(int a, int b)
{
	return a < b ? a : b;
}

int carAssembly(int a[][NUM_STATION],
	int t[][NUM_STATION],
	int *e, int *x)
{
	int T1[NUM_STATION], T2[NUM_STATION], i;

	// time taken to leave first station in line 1  
	T1[0] = e[0] + a[0][0];

	// time taken to leave first station in line 2  
	T2[0] = e[1] + a[1][0];

	// Fill tables T1[] and T2[] using the  
	// above given recursive relations  
	for (i = 1; i < NUM_STATION; ++i)
	{
		T1[i] = min(T1[i - 1] + a[0][i],
			T2[i - 1] + t[1][i] + a[0][i]);
		T2[i] = min(T2[i - 1] + a[1][i],
			T1[i - 1] + t[0][i] + a[1][i]);
	}

	// Consider exit times and retutn minimum  
	return min(T1[NUM_STATION - 1] + x[0],
		T2[NUM_STATION - 1] + x[1]);
}

// Driver Code 
int main()
{
	int a[][NUM_STATION] = { {4, 5, 3, 2},
							{2, 10, 1, 4} };
	int t[][NUM_STATION] = { {0, 7, 4, 5},
							{0, 9, 2, 8} };
	int e[] = { 10, 12 }, x[] = { 18, 7 };

	cout << carAssembly(a, t, e, x);

	return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
