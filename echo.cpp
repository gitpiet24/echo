// einbinden der Bibiothek für Ein- und Ausgabe
#include <iostream>
// einbinden der Bibliothek für Datentyp string (zeichenkette)
#include <string>

// Hauptfunktion, Einstieg ins Programm
int main()
{
  // Eingangsprompt
  std::cout << "Diese Programm ließt das von Ihnen eingegebene Zeichenfolge ein und gibt sie wieder. Die Zeichenfolge darf keine Großbuchstaben enthalten und weniger als 5 Zeichen haben. Geben sie Ihre Zeichenfolge bitte hier ein:" << std::endl;
  // deklarieren einer Variable line als Datentyp string
  std::string line;
  // funktion getline liesst von konsole in variable line ein
  // if prüft ob eingabe beendet ist
  if (std::getline(std::cin, line))
  {
    // bool hasUppercase = std::any_of(line.begin(), line.end(), {return std::isupper(c); });

    // wenn wahr, dann führe aus
    if (line.length() > 5)
    {
      std::cout << "Error: input too long!" << std::endl;
      return 1;
    }

    std::string upper = line;
    for (char &c : upper)
    {
      c = static_cast<char>(std::toupper(static_cast<unsigned char>(c)));
    }

    if (!line.empty() && upper == line)
    {
      std::cout << "Error: Großbuchstaben verboten!" << std::endl;
      return 1;
    }
    {

      // if //prüfe ob keine Großbuchstaben
      // Ausgabe -> Bitte keine Großbuchstaben verwende)

      // cout macht eine ausgabe und gibt variable line aus
      // endl fürt zu zeilenumbruch
      std::cout << line << std::endl;
    }
    // Programmende
    return 0;
  }
}

// Promt
// keine Großbuchstaben
// maximal 30 Zeichen