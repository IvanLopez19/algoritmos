// laboratorio7.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
#include <algorithm>

using namespace std;

int p[] = { 0,1,5,8,9 };
int r[] = { -1,-1,-1,-1,-1 };


int rodCutting(int n) {
	r[0] = 0;
	for (int j = 1; j<= n; j++) {
		int q = -1;
		for (int i = 1;i <= j;i++) {
			q = __max(q , (p[i] + r[j - i]));
		}
		r[j] = q;
	}
	return r[n];
}

int main()
{
	cout<<rodCutting(4)<<endl;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
