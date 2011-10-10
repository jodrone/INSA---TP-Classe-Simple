/*************************************************************************
                           IntervalSet  -  description
                             -------------------
    début                : ...
    copyright            : (C) 2011 par Tristan Pourcelot & Jordan Vincent 
*************************************************************************/

//---------- Interface de la classe <IntervalSet> (fichier IntervalSet.h) ------
#if ! defined ( INTERVALSET_H )
#define INTERVALSET_H

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

struct Interval
{ //Permet de gérer la liste doublement chaînée 
  Interval* suivant;
  Interval* precedent;
  long lLeft;
  long lRight;
   
} // Fin de Interval



//------------------------------------------------------------------------ 
// Rôle de la classe <IntervalSet>
// 
// La classe IntervalSet a pour rôle de gérer des ensembles d'intervalles
// disjoints.
//
//------------------------------------------------------------------------ 

class IntervalSet : 
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
	
  	bool AddInterval ( long lLeft, long lRight );
	// Mode d'emploi (Ajout d'un intervalle) :
	//
	// Contrat : 
	// lLeft <= lRight
	
	bool AddIntervalSet ( const IntervalSet& unIntervalSet );
	// Mode d'emploi (Ajout d'un IntervalSet)
	//
	// Contrat : Argument non vide
	// 
	
	bool Remove ( long lPos );
	// Mode d'emploi (Suppression d'un intervalle)
	//
	// Contrat :
	//

	long Count ( );
	// Mode d'emploi :
	// Cette méthode retourne le nombre d'intervalles contenus dans l'objet
	//
	// Contrat : Néant
	
	bool GetInterval ( long lPos, long& lLeft, long& lRight );
	//Mode d'emploi :
	//
	//Contrat :
	//
	
	IntervalSet& Union ( IntervalSet& unIntervalSet );
	// Mode d'emploi
	//
	// Contrat
	//
	
	IntervalSet& Intersection ( IntervalSet& unIntervalSet );
	// Mode d'emploi
	//
	// Contrat
	//
	

//-------------------------------------------- Constructeurs - destructeur
	IntervalSet ( const IntervalSet & unIntervalSet );
	// Mode d'emploi (constructeur de copie) :
	//
	// Contrat :
	//

    IntervalSet ( );
	// Mode d'emploi :
	//
	// Contrat :
	//

    virtual ~IntervalSet ( );
	// Mode d'emploi :
	//
	// Contrat :
	//

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

	//Méthodes de tri et de gestion de la liste

//----------------------------------------------------- Attributs protégés

	//Liste chainée de tableaux de pointeurs vers des tableaux [lLeft, lRight]

};

//----------------------- Autres définitions dépendantes de <IntervalSet>

#endif // INTERVALSET_H

