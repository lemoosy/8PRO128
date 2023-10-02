#pragma once

#include "List.h"
#include "Settings.h"

/// @brief Classe repr�sentant un professeur.
class Professor
{
public:



	/// @brief Nom du professeur.
	string m_name;

	/// @brief Nombre d'ann�es d'exp�rience du professeur.
	int m_date;

	/// @brief Liste des cours du professeur.
	List<string>* m_lessons;

	/// @brief Liste des �tudiants qui suivent les cours du professeur.
	List<string>* m_students;



	/// @brief Initialise la liste des cours et la liste des �tudiants (les listes sont vides).
	Professor();

	/// @brief D�truit la liste des cours et la liste des �tudiants.
	~Professor();
	
	
	
	/// @brief Retourne le nombre de cours du professeur.
	int GetNbLesson() const;

	/// @brief Retourne le nombre d'�tudiants qui suivent les cours du professeur.
	int GetNbStudent() const;



	/// @brief Affiche les informations du professeur.
	void Print() const;



	/// @brief Ajoute un cours � la liste des cours du professeur.
	void AddLesson(string lesson);

	/// @brief Ajoute un �tudiant � la liste des �tudiants qui suivent les cours du professeur.
	void AddStudent(string student);



	/// @brief V�rifie si le professeur enseigne le cours donn� en param�tre.
	/// @param lesson Cours � v�rifier.
	/// @return true si le professeur enseigne le cours, false sinon.
	bool HasLesson(string lesson) const;



	/// @brief �cris dans un fichier TXT les informations du professeur.
	/// @param file Fichier TXT � �crire.
	void Export(ofstream& file) const;
};



/// @brief Surcharge de l'op�rateur << pour afficher les informations du professeur � l'aide de la fonction Print().
ostream& operator<<(ostream& stream, Professor& professor);
