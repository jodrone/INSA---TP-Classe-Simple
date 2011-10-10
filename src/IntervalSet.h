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
	
  	bool Add (long lLeft, long lRight);
	// Mode d'emploi (Ajout d'un intervalle) :
	//
	// Contrat : 
	// lLeft <= lRight
	
	bool Add( const IntervalSet& unIntervalSet );
	// Mode d'emploi (Ajout d'un IntervalSet)
	//
	// Contrat : Argument non vide
	// 
	
	bool Remove(long lPos);
	// Mode d'emploi (Suppression d'un intervalle)
	//
	// Contrat :
	//

	long Count();
	// Mode d'emploi :
	// Cette méthode retourne le nombre d'intervalles contenus dans l'objet
	//
	// Contrat : Néant
	
	bool GetInterval(long lPos, long& lLeft, long& lRight);
	//Mode d'emploi :
	//
	//Contrat :
	//
	
	IntervalSet& Union(IntervalSet& unIntervalSet);
	// Mode d'emploi
	//
	// Contrat
	//
	
	IntervalSet& Intersection(IntervalSet& unIntervalSet);
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

//----------------------------------------------------- Attributs protégés

//Liste chainé de tableaux de [lLeft, lRight]

};

//----------------------- Autres définitions dépendantes de <IntervalSet>

#endif // INTERVALSET_H

