#include "gestion_contacts.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<Contact> contacts;
    int choix;
    
    do {
        cout << "1. Ajouter un contact\n";
        cout << "2. Afficher les contacts\n";
        cout << "3. Rechercher un contact\n";
        cout << "4. Supprimer un contact\n";
        cout << "5. Quitter\n";
        cout << "Choix : ";
        cin >> choix;

        switch (choix) {
            case 1: ajouter_contact(contacts); break;
            case 2: afficher_contacts(contacts); break;
            case 3: rechercher_contact(contacts); break;
            case 4: supprimer_contact(contacts); break;
        }
    } while (choix != 5);

    return 0;
}
