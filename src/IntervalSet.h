/*************************************************************************
                           IntervalSet  -  description
                             -------------------
    début                : ...
    copyright            : (C) 2011 par Tristan Pourcelot & Jordan Vincent 
*************************************************************************/

//---- Interface de la classe <IntervalSet> (fichier IntervalSet.h) ------
#if ! defined ( INTERVALSET_H )
#define INTERVALSET_H

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

struct Interval
	{ //Permet de gérer la liste doublement chaînée
  		Interval *suivant;
  		Interval *precedent;
  		long lLeft;
  		long lRight;
	} ; 



//------------------------------------------------------------------------ 
// Rôle de la classe <IntervalSet>
// 
// La classe IntervalSet a pour rôle de gérer des ensembles d'intervalles
// disjoints.
//
//------------------------------------------------------------------------ 

class IntervalSet  
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
	
  	bool AddInterval ( long lLeft, long lRight );
	// Mode d'emploi (Ajout d'un intervalle) :
	// Vérifie si l'intervalle est disjoint de la collection,
	// si oui l'ajoute et renvoie TRUE, sinon ne fait rien et revoie FALSE
	//
	// Contrat : 
	// lLeft <= lRight
	
	bool AddIntervalSet ( const IntervalSet& unIntervalSet );
	// Mode d'emploi (Ajout d'un IntervalSet) :
	// Prends en argument un objet IntervalSet, teste si l'ensemble des
	// intervalles est disjoint de la collection, si oui les ajoute et
	// renvoie TRUE, sinon ne fait rien et renvoie FALSE
	// 
	// Contrat :
	// Argument correctement initialisé et contenant au moins un intervalle
	
	bool Remove ( long lPos );
	// Mode d'emploi (Suppression d'un intervalle) :
	// Supprime l'intervalle désigné par son index dans la collection.
	// Renvoie TRUE en cas de succès, et FALSE en cas d'erreur
	//
	// Contrat :
	// 0 <= lPos <= IntervalSet.Count() -1

	long Count ( );
	// Mode d'emploi :
	// Cette méthode retourne le nombre d'intervalles contenus dans l'objet
	//
	// Contrat : Néant
	
	bool GetInterval ( long lPos, long& lLeft, long& lRight );
	// Mode d'emploi (Récupération d'un intervalle donné):
	// Retourne les bornes de l'intervalle donné par son index dans la
	// collection.
	//
	// Contrat :
	// 0 <= lPos <= IntervalSet.Count() -1
	
	IntervalSet& Union ( IntervalSet& unIntervalSet );
	// Mode d'emploi (Réunion entre deux ensembles d'intervalles):
	// Retourne l'union entre deux ensembles d'intervalles. 
	// Contrat :
	// 
	
	IntervalSet& Intersection ( IntervalSet& unIntervalSet );
	// Mode d'emploi (Intersection entre deux ensembles d'intervalles) :
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
	bool Init();
	// Mode d'emploi :
	// Initialise l'espace mémoire et les variables de l'objet
	
	bool Insertion ( Interval &element , long lIndex );
	// Mode d'emploi :
	// Ajoute l'élément à la position demandée
	
	bool Tri();
	// Mode d'emploi :
	// Trie la liste chainée
	
	bool Suppression( long lIndex ); // Nécéssaire?
	// Mode d'emploi :
	// Supprime l'intervalle dans la liste
	// méthodes de gestion de la liste d'éléments

//----------------------------------------------------- Attributs protégés
	int nombre_elements;
	Interval *tete;
	Interval *queue;

};

//----------------------- Autres définitions dépendantes de <IntervalSet>

#endif // INTERVALSET_H

