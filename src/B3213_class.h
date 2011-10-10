/*************************************************************************
                           B3213_class  -  description
                             -------------------
    début                : ...
    copyright            : (C) 2011 par Arnaud Lahache
*************************************************************************/

//---------- Interface de la classe <B3213_class> (fichier B3213_class.h) ------
#if ! defined ( B3213_CLASS_H )
#define B3213_CLASS_H

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <B3213_class>
//
//
//------------------------------------------------------------------------ 

class B3213_class : public Ancetre
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
	B3213_class & operator = ( const B3213_class & unB3213_class );
	// Mode d'emploi :
	//
	// Contrat :
	//


//-------------------------------------------- Constructeurs - destructeur
	B3213_class ( const B3213_class & unB3213_class );
	// Mode d'emploi (constructeur de copie) :
	//
	// Contrat :
	//

    B3213_class ( );
	// Mode d'emploi :
	//
	// Contrat :
	//

    virtual ~B3213_class ( );
	// Mode d'emploi :
	//
	// Contrat :
	//

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

};

//--------------------------- Autres définitions dépendantes de <B3213_class>

#endif // B3213_CLASS_H

