#include <iostream>
using namespace std;

// Definition der Klasse Bus
class Bus {
public:
    int sitzplaetze;
    string farbe;
    string drivername;
    int passagiere;

    // Methode zum Hinzufügen eines Passagiers
    void getInTheBus(int anzahl) {
        if (sitzplaetze >= anzahl) {
            passagiere += anzahl;
            sitzplaetze -= anzahl;
            cout << anzahl << " Passagiere steigen in den Bus ein." << endl;
        } else {
            passagiere += sitzpaetze 
            cout << "Nicht genug freie Sitzplätze für " << anzahl-sitzplaetze << " Passagiere." << endl;
            sitzplaetze = 0
        }
    }
};

int main() {
    // Erstellen von Objekten der Klasse Bus
    Bus bus1;
    Bus bus2;

    // Zuweisen von Werten zu den Eigenschaften von bus1
    bus1.sitzplaetze = 50;
    bus1.farbe = "Rot";
    bus1.drivername = "Hans";
    bus1.passagiere = 0;

    // Zuweisen von Werten zu den Eigenschaften von bus2
    bus2.sitzplaetze = 30;
    bus2.farbe = "Blau";
    bus2.drivername = "Anna";
    bus2.passagiere = 0;

    // Aufrufen der Methode getInTheBus
    bus1.getInTheBus(10);  // Ausgabe: 10 Passagiere steigen in den Bus ein.
    bus1.getInTheBus(45);  // Ausgabe: Nicht genug freie Sitzplätze für 45 Passagiere.

    bus2.getInTheBus(5);   // Ausgabe: 5 Passagiere steigen in den Bus ein.
    bus2.getInTheBus(30);  // Ausgabe: Nicht genug freie Sitzplätze für 30 Passagiere.

    return 0;
}
