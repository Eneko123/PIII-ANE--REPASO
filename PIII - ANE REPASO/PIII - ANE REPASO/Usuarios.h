#pragma once
#include <iostream>
#include <List>

class Usuarios
{
public:
	Usuarios();
	~Usuarios();

	void PedirNuemros();
	void MostrarNumeroMayorYMenor();
	void MostrarNumerosParesYRepetidos();

	// int GetNuemro1() { return numero1; }
	// int GetNuemro2() { return numero2; }
	// int GetNuemro3() { return numero3; }

	// void SetNuemro1(int newNumero1) { numero1 = newNumero1; }
	// void SetNuemro2(int newNumero2) { numero2 = newNumero2; }
	// void SetNuemro3(int newNumero3) { numero3 = newNumero3; }

private:
	std::list<int> listaNumeros;
	// int numero1 = 0;
	// int numero2 = 0;
	// int numero3 = 0;
};

