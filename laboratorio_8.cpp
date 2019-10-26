// laboratorio_8.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;


int main()
{
	class actividad {
	public:
		int start;
		int finish;
	public:
		actividad(int i, int j) {
			start = i;
			finish = j;
		}
	}

	a1 = actividad(0, 6);
	actividad a2 = actividad(1, 4);
	actividad a3 = actividad(2, 13);
	actividad a4 = actividad(3, 5);
	actividad a5 = actividad(3, 8);
	actividad a6 = actividad(5, 7);
	actividad a7 = actividad(5, 9);
	actividad a8 = actividad(6, 10);
	actividad a9 = actividad(8, 11);
	actividad a10 = actividad(8, 12);
	actividad a11 = actividad(12, 14);

	actividad actividades[] = { a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11 };

	int L[11];
	for (int j = 0;j < 11; j++) {
		L[j] = 0;
	}
	for (int i = 0; i < 11;i++) {
		for (int h = 0;h <= i-1;h++) {
			if (actividades[h].finish < actividades[i].start && L[i] < L[h]) {
				L[i] = L[h];
			}
		}
		L[i]++;
	}

	cout << L[10];

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
