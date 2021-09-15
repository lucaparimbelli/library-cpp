/*
 * ArticoloLibreria.h
 *
 *      Author: Luca Parimbelli
 */

#include "articololibreria.h"

#include<string>
using namespace std;

//membro statico inzializzato nel .cpp
int ArticoloLibreria::staticID = 0;

//initializer list
//alla creazione di un articolo la disponibilitÓ viene settata a true
ArticoloLibreria::ArticoloLibreria(string titolo, TipoArticolo tipo) :
		articoloID(++staticID), disponibilita(true), titolo(titolo), tipo(tipo) {
}

ArticoloLibreria::~ArticoloLibreria() {
}

int ArticoloLibreria::getArticoloID() {
	return articoloID;
}

bool ArticoloLibreria::getDisponibilita() {
	return disponibilita;
}

string ArticoloLibreria::getTitolo() {
	return titolo;
}

TipoArticolo ArticoloLibreria::getTipo() {
	return tipo;
}

