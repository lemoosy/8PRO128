#pragma once

#include "Bank.h"
#include "Settings.h"

/// @brief Demande � l'utilisateur une r�ponse.
/// @param message Message � afficher.
/// @return R�ponse de l'utilisateur.
string Input_Message(string message);

/// @brief Demande � l'utilisateur une r�ponse oui/non.
/// @param message Message � afficher.
/// @return "o" si oui, "n" si non.
string Input_YesNo(string message);

/// @brief Demande � l'utilisateur une adresse mail.
string Input_Mail(const Bank& bank);

/// @brief Demande � l'utilisateur un mot de passe.
string Input_Password(void);

/// @brief Demande � l'utilisateur un num�ro de mobile.
string Input_Phone(void);

/// @brief Demande les informations de l'utilisateur et cr�er son compte.
User* Input_UserCreate(Bank& bank);

/// @brief Demandes les informations de l'utilisateur,
/// recherche son compte dans la banque et retourne l'utilisateur.
/// @return L'utilisateur s'il existe, nullptr sinon (au bout de 5 tentatives).
User* Input_UserConnect(Bank& bank);

/// @brief Demande � l'utilisateur un float positif.
float Input_FloatPositive(string message);
