/*************************************************************************
                           IntervalSet  -  description
                             -------------------
    début                : ...
    copyright            : (C) 2011 par Tristan Pourcelot & Jordan Vincent 
*************************************************************************/

//-- Réalisation de la classe <IntervalSet> (fichier IntervalSet.cpp) ----

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "IntervalSet.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques


bool IntervalSet::AddInterval ( long lLeft, long lRight )
//Algorithme :
//
{
} //----- Fin de AddInterval

bool IntervalSet::AddIntervalSet ( IntervalSet& unIntervalSet )
// Algorithme :
//
{
} //----- Fin de AddIntervalSet

bool IntervalSet::Remove ( long lPos )
//Algorithme :
//
{
} //----- Fin de Remove


long IntervalSet::Count ( )
//Algorithme : Trivial
//
{
	//return this.nombre_elements
} //----- Fin de Count


bool IntervalSet::GetInterval ( long lPos, long& lLeft, long& lRight )
//Algorithme :
//
{
} //----- Fin de GetInterval


IntervalSet& IntervalSet::Union ( IntervalSet& unIntervalSet )
//Algorithme :
//
{
} //----- Fin de Union

IntervalSet& IntervalSet::Intersection ( IntervalSet& unIntervalSet )
//Algorithme :
//
{
} //----- Fin de Intersection

//-------------------------------------------- Constructeurs - destructeur
IntervalSet::IntervalSet ( const IntervalSet & unIntervalSet )
// Algorithme :
//
{
} //----- Fin de IntervalSet (constructeur de copie)


IntervalSet::IntervalSet ( )
// Algorithme :
//
{
} //----- Fin de IntervalSet


IntervalSet::~IntervalSet ( )
// Algorithme :
//
{
} //----- Fin de ~IntervalSet


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

