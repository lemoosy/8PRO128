#pragma once

#include "Settings.h"

/// @brief Classe repr�sentant un noeud dans une liste simplement cha�n�e.
template <typename ListData>
class ListNode
{
public:

	/// @brief Pointeur vers la valeur du noeud.
	ListData* m_value;

	/// @brief Pointeur vers le noeud suivant.
	ListNode<ListData>* m_next;

	ListNode(ListData* value, ListNode* next = nullptr);
};

template <typename ListData>
ListNode<ListData>::ListNode(ListData* value, ListNode* next)
{
	m_value = value;
	m_next = next;
}

/// @brief Classe repr�sentant une liste simplement cha�n�e.
template <typename ListData>
class List
{
public:

	/// @brief Taille de la liste.
	int m_size;

	/// @brief Pointeur vers le premier noeud de la liste.
	ListNode<ListData>* m_first;

	List();

	~List();

	/// @brief V�rifie si la liste est vide.
	inline bool IsEmpty() const { return (m_size == 0); };

	/// @brief Affiche la liste.
	void Print() const;

	/// @brief Ajoute une valeur en premier dans la liste.
	void InsertFirst(ListData* value);

	/// @brief Retire et retourne la premi�re valeur de la liste.
	/// @return Pointeur vers la valeur retir�e.
	ListData* PopFirst();

	/// @brief V�rifie si une valeur est dans la liste.
	/// @return la valeur dans la liste, nullptr sinon.
	ListData* IsIn(ListData* value);
};

template <typename ListData>
List<ListData>::List()
{
	m_size = 0;
	m_first = nullptr;
}

template <typename ListData>
List<ListData>::~List()
{
	ListNode<ListData>* current = m_first;

	while (current)
	{
		ListNode<ListData>* next = current->m_next;
		
		delete current->m_value;
		delete current;
		
		current = next;
	}
}

template <typename ListData>
void List<ListData>::Print() const
{
	ListNode<ListData>* current = m_first;

	while (current)
	{
		cout << "[" << *(current->m_value) << "] -> ";
		current = current->m_next;
	}

	cout << "[nullptr]";
}

template <typename ListData>
void List<ListData>::InsertFirst(ListData* value)
{
	assert(value);

	ListNode<ListData>* node = new ListNode<ListData>(value, m_first);
	
	m_first = node;

	m_size++;
}

template <typename ListData>
ListData* List<ListData>::PopFirst()
{
	assert(m_size > 0);

	ListNode<ListData>* first = m_first;

	m_first = m_first->m_next;
	
	ListData* value = first->m_value;

	delete first;

	m_size--;

	return value;
}

template <typename ListData>
ListData* List<ListData>::IsIn(ListData* value)
{
	assert(value);

	ListNode<ListData>* current = m_first;

	while (current)
	{
		if (*(current->m_value) == *value)
		{
			return current->m_value;
		}

		current = current->m_next;
	}

	return nullptr;
}
