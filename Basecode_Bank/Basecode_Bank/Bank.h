#pragma once

#include "AVL.h"
#include "Settings.h"
#include "User.h"

/// @brief Classe repr�sentant une banque.
class Bank
{
private:

	/// @brief Structure de donn�e qui permet de stocker les utilisateurs.
	/// On peut r�cup�rer/ajouter/supprimer un utilisateur en log(n).
	AVLTree<User>* m_users;

public:

	Bank();

	~Bank();

	/// @brief Retourne le nombre d'utilisateurs dans la banque.
	inline int GetUsersCount(void) const
	{
		return m_users->GetSize();
	}

	/// @brief V�rifie si un utilisateur existe dans la banque.
	/// @return true si l'utilisateur existe, false sinon.
	bool UserExist(string mail) const;

	/// @brief Recherche un utilisateur dans la banque.
	/// @return L'utilisateur s'il existe, nullptr sinon.
	User* Connect(string mail, string password) const;

	/// @brief Ajoute un utilisateur dans la banque.
	/// @return true si l'op�ration a r�ussi, false sinon.
	bool AddUser(User* user);

	/// @brief Supprime un utilisateur dans la banque.
	/// @return true si l'op�ration a r�ussi, false sinon.
	bool RemoveUser(User* user);
};
