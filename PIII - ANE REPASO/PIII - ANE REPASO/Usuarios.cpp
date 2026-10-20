#include "Usuarios.h"

Usuarios::Usuarios() {};

Usuarios::~Usuarios() {};

void Usuarios::PedirNuemros()
{
	int n1 = 0;
	int n2 = 0;
	int n3 = 0;

	std::cout << "Escribe 3 numeros" << std::endl;
	std::cout << "Primer numero" << std::endl;

	std::cin >> n1;

	std::cout << "Segundo numero" << std::endl;

	std::cin >> n2;

	std::cout << "Tercer numero" << std::endl;

	std::cin >> n3;

	if (n1 != NULL && n2 != NULL && n3 != NULL)
	{
		listaNumeros.push_back(n1);
		listaNumeros.push_back(n2);
		listaNumeros.push_back(n3);
	}
	else
	{
		std::cout << "Ecribe un numero, no dejes vacio" << std::endl;
	}
}

void Usuarios::MostrarNumeroMayorYMenor()
{
	int tempMinToMax = 0;
	int tempMaxToMin = 9999999;

	for (auto it = listaNumeros.begin(); it != listaNumeros.end(); it++)
	{
		if (*it > tempMinToMax)
		{
			tempMinToMax = *it;
		}
	}

	std::cout << "Numero mas grande: " << tempMinToMax << std::endl;

	for (auto it = listaNumeros.begin(); it != listaNumeros.end(); it++)
	{
		if (*it < tempMaxToMin)
		{
			tempMaxToMin = *it;
		}
	}

	std::cout << "Numero mas pequenio: " << tempMaxToMin << std::endl;
}

void Usuarios::MostrarNumerosParesYRepetidos()
{
	std::cout << "Numeros pares: " << std::endl;

	for (auto it = listaNumeros.begin(); it != listaNumeros.end(); it++)
	{
		if (*it %2 == 0)
		{
			std::cout << *it << std::endl;
		}
	}
	std::cout << std::endl;

	// No he logrado hacerlo con una lista

	std::cout << "Numero repetido: ";

	int arrayNumeros[3];
	int i = 0;

	for (auto it = listaNumeros.begin(); it != listaNumeros.end(); it++)
	{
		arrayNumeros[i] = *it;
		i++;
	}

	if (arrayNumeros[0] == arrayNumeros[1] || arrayNumeros[0] == arrayNumeros[2])
	{
		std::cout << arrayNumeros[0] << std::endl;
	}
	else if (arrayNumeros[1] == arrayNumeros[2])
	{
		std::cout << arrayNumeros[1] << std::endl;
	}
	else
	{
		std::cout << "No hay numeros repetidos" << std::endl;
	}
}