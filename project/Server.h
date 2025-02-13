#ifndef SERVER_H
#define SERVER_H

#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <unordered_map>

// Classe Server : gère l'enregistrement et l'affichage des données reçues des capteurs
class Server {
public:
    Server();
    ~Server();

    // Affiche les données d'un capteur dans la console
    void logToConsole(const std::string& sensorId, const std::string& data);

    // Enregistre les données d'un capteur dans un fichier CSV spécifique
    void logToFile(const std::string& sensorId, const std::string& data);

private:
    // Récupère l'heure actuelle au format "DD-MM-YYYY HH:MM:SS"
    std::string getCurrentTime();
};

#endif
