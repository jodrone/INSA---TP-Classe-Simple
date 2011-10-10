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
// Algorithme :
// Vérification itérative de la disjointure
{
	int i;
	bool disjointure = 1;
	bool resultat_comparaison;
	Interval temp;
	temp.suivant   = NULL;
	temp.precedent = NULL;
	temp.Left  = lLeft;
	temp.Right = lRight;
	for (i=0;i <= nombre_elements;i++)
	  {
		resultat_comparaison = 0;
		  //Comparaison ( temp, GetInterval(i, 
		

	  };


	
} //----- Fin de AddInterval

bool IntervalSet::AddIntervalSet ( const IntervalSet& unIntervalSet )
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
	return nombre_elements;
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
  Init();
  AddIntervalSet( unIntervalSet );
} //----- Fin de IntervalSet (constructeur de copie)


IntervalSet::IntervalSet ( )
// Algorithme : Trivial
//
{
  Init();
} //----- Fin de IntervalSet


IntervalSet::~IntervalSet ( )
// Algorithme :
//
{
} //----- Fin de ~IntervalSet


//------------------------------------------------------------------ PRIVE

bool IntervalSet::Init ( )
// Algorithme : 
// Trivial
{
  nombre_elements = 0;
  tete  = NULL;
  queue = NULL;
  return 0;
} //----- Fin de Init

bool IntervalSet::Comparaison( const Interval &unPremierIntervalle,
							   const Interval &unDeuxiemeIntervalle)
// Algorithme : 
// left1 > right2 || right1 < left2
{
  if (unPremierIntervalle.Left  > unDeuxiemeIntervalle.Right ||
	  unPremierIntervalle.Right < unDeuxiemeIntervalle.Left)
  	{
		return 1;
  	}
  else
  	{
		return 0;
 	}	
};

//----------------------------------------------------- Méthodes protégées

