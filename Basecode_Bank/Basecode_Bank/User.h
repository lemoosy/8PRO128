#pragma once

#include "Settings.h"

/// @brief Classe repr�sentant un utilisateur.
class User
{
private:

	/// @brief Adresse mail de l'utilisateur.
	string m_mail;

	/// @brief Mot de passe de l'utilisateur.
	string m_password;

	/// @brief Monnaie de l'utilisateur.
	float m_money;

public:

	/// @brief Nom de l'utilisateur.
	string m_name;

	/// @brief Num�ro de mobile de l'utilisateur.
	string m_phone;

	User();

	User(string mail);

	User(string mail, string password);

	void Print() const;

	/// @brief Ajoute de la monnaie � l'utilisateur.
	void AddMoney(float money);

	/// @brief Retire de la monnaie � l'utilisateur.
	void RemoveMoney(float money);

	/// @brief Change le mot de passe de l'utilisateur.
	/// @return true si l'op�ration a r�ussi, false sinon.
	bool ChangePassword(string passwordOld, string passwordNew);

	/// @brief V�rifie si le mot de passe est le m�me que celui de l'utilisateur.
	bool SamePassword(string password);

	/// @brief Compare l'adresse mail de deux utilisateurs avec le signe ==.
	friend bool operator==(const User& user0, const User& user1)
	{
		return (user0.m_mail == user1.m_mail);
	}

	/// @brief Compare l'adresse mail de deux utilisateurs avec le signe >.
	friend bool operator>(const User& user0, const User& user1)
	{
		return (user0.m_mail > user1.m_mail);
	}

	/// @brief Compare l'adresse mail de deux utilisateurs avec le signe <.
	friend bool operator<(const User& user0, const User& user1)
	{
		return (user0.m_mail < user1.m_mail);
	}
};
