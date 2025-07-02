#ifndef GESTION_CONTACTS_H
#define GESTION_CONTACTS_H

#include <vector>
#include <string>

// Structure Contact
struct Contact {
    std::string nom;
    std::string prenom;
    std::string telephone;
};

// Fonctions
void ajouter_contact(std::vector<Contact> &contacts);
void afficher_contacts(const std::vector<Contact> &contacts);
void rechercher_contact(const std::vector<Contact> &contacts);
void supprimer_contact(std::vector<Contact> &contacts);

#endif
