#pragma once

#include "Key.h"
#include "List.h"
#include "Professor.h"
#include "Settings.h"

/// @brief Classe qui permet de stocker et de g�rer les professeurs.
class Dashboard
{
private:



    /// @brief Liste des professeurs.
    List<Professor>* m_professors;

    /// @brief Liste des le�ons/occurences.
    List<Key>* m_keys;



public:



    /// @brief Initialise la liste des professeurs (la liste est vide).
    Dashboard();

    /// @brief D�truit la liste des professeurs.
    ~Dashboard();



    /// @brief Importe les professeurs � partir d'un fichier TXT.
    /// @param path Chemin du fichier TXT.
    /// @return true si l'importation s'est bien pass�e, false sinon.
    bool ImportProfessors(string path);

    /// @brief Exporte les professeurs dans un fichier TXT.
    /// @param path Chemin du fichier TXT.
    /// @return true si l'importation s'est bien pass�e, false sinon.
    bool ExportProfessors(string path);



    /// @brief Ins�re un professeur � la liste des professeurs.
    void InsertProfessor(Professor* professor);

    /// @brief Supprime le(s) professeur(s) ayant le nom donn� en param�tre.
    void RemoveProfessorByName(string name);



    /// @brief Cherche un professeur dans la liste des professeurs.
    /// @return Le professeur si trouv�, nullptr sinon.
    Professor* GetProfessorByName(string name) const;

    /// @brief Cherche un professeur dans la liste des professeurs ayant le moins de le�ons.
    /// @return Le professeur si trouv�, nullptr sinon.
    Professor* GetProfessorWithMinimumLessons() const;
   
    /// @brief Cherche un professeur dans la liste des professeurs ayant le moins d'�tudiants.
    /// @return Le professeur si trouv�, nullptr sinon.
    Professor* GetProfessorWithMinimumStudents() const;


    /// @brief Renvoie le cours le moins populaire.
    string GetLessPopularLesson() const;



    /// @brief Compte le nombre de professeurs qui enseignent la le�on donn�e en param�tre.
    int GetOccLessonsByProfessors(string lesson) const;

    

    /// @brief Affiche tous les professeurs et leurs informations.
    void PrintProfessors() const;



    /// @brief Charge les entr�es de l'application.
    /// @param path Chemin du fichier TXT.
    /// @return true si le chargement s'est bien pass�, false sinon.
    bool LoadInputs(string path);
};
