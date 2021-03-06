/*
 * Ouvrage.h
 *
 *  Created on: 2016-02-12
 *      Author: etudiant
 */

#ifndef OUVRAGE_H_
#define OUVRAGE_H_
#include <string>
namespace tp
{

class Ouvrage {

public:
	Ouvrage(const std::string& p_auteurs,
			const std::string& p_titre,
			const std::string& p_identifiant,
			int  p_annee,
			const std::string& p_ville,
			const std::string& p_editeur);

	const std::string& reqAuteurs() const;
	const std::string& reqEditeur() const;
	const std::string& reqIdentifiant() const;
	int reqAnnee() const;
	const std::string& reqTitre() const;
	const std::string& reqVille() const;
	const std::string& reqOuvrageFormate() const;
	void asgAuteurs(const std::string& p_auteurs);
	void asgAnnee(int annee);
	void asgEditeur(const std::string& editeur);
	void asgIdentifiant(const std::string& identifiant);
	void asgTitre(const std::string& titre);
	void asgVille(const std::string& ville);

private:
	std::string m_auteurs;
	std::string m_editeur;
	std::string m_ville;
	std::string m_titre;
	int m_annee;
	std::string m_identifiant;
};

}
#endif /* OUVRAGE_H_ */
