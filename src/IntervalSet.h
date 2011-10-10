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

//------------------------------------------------------------------------ 
// Rôle de la classe <IntervalSet>
//
//
//------------------------------------------------------------------------ 

class IntervalSet : public Ancetre
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
	// type Méthode ( liste des paramètres );
	// Mode d'emploi :
	//
	// Contrat :
	//


//------------------------------------------------- Surcharge d'opérateurs
	IntervalSet & operator = ( const IntervalSet & unIntervalSet );
	// Mode d'emploi :
	//
	// Contrat :
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

//----------------------------------------------------- Attributs protégés

};

//--------------------------- Autres définitions dépendantes de <IntervalSet>

#endif // INTERVALSET_H

