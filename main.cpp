
// einbinden der Bib für Ein und Ausgabe
#include <iostream>
// einbinden der Bib für Datentyp string (Zeichenkette)
#include <string>

// Hauptfunktion, Einstieg des Programms
int main() {
   
    std::string line;                // Variable mit dem Namen "line" wird deklariert vom Datentyp String
    std::string forbidden = "!";
    
    // Start Text
    std::cout << "dieses Programm ist ein Echo Programm, bitte geben sie ein Wort bis maximal 30 Zeichen ein, Ausrufezeichen sind verboten"<<
    std::endl;

    //Funktion getline liest von Console (cin) ein und speichert diesen Wert in der Variablen "line"
    //if prüft ob Eingabe beendet ist
    if (std::getline(std::cin, line))
    {

    //überprüfe die Länge der Eingabe
    if(line.length()>30)
    {
        std::count<<"Fehlerhafte Eingabe, zu viele Zeichen"<<std::endl;
        return1;
    }
    
// überprüfe ob sich im Text ein Ausrufezeichen befindet
    if(line.find(forbidden) != std::string::npos){
        std::cout <<"Achtung, Ausrufezeichen sind nicht erlaubt"<<std::endl;
    }






        // wenn wahr, dann führe aus
        // Cout machen eine ausgabe und gibt variable line aus
        // endl führt zu Zeilenumbruch
    std::cout <<line<< std::endl;




    }

    
    
    
    

    // Programmende
    return 0;
}




//Anforderungen an das Programm
//1. Start Prompt, 2. maximal 30 Zeichen, 3. Ausrufezeichen sind verboten