#include "gestion_contacts.h"
#include <iostream>
#include <algorithm>

using namespace std;

void ajouter_contact(vector<Contact> &contacts) {
    Contact c;
    cout << "Nom: ";
    cin >> c.nom;
    cout << "Prénom: ";
    cin >> c.prenom;
    cout << "Téléphone: ";
    cin >> c.telephone;
    contacts.push_back(c);
}

void afficher_contacts(const vector<Contact> &contacts) {
    for (const auto &c : contacts)
        cout << c.prenom << " " << c.nom << " - " << c.telephone << endl;
}

void rechercher_contact(const vector<Contact> &contacts) {
    string nom;
    cout << "Entrez un nom à rechercher: ";
    cin >> nom;
    for (const auto &c : contacts) {
        if (c.nom == nom)
            cout << c.prenom << " " << c.nom << " - " << c.telephone << endl;
    }
}

void supprimer_contact(vector<Contact> &contacts) {
    string nom;
    cout << "Nom du contact à supprimer: ";
    cin >> nom;
    contacts.erase(remove_if(contacts.begin(), contacts.end(),
                  [&](const Contact &c) { return c.nom == nom; }), contacts.end());
}

