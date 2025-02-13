#include "Server.h"
#include <filesystem> // Utilisé pour vérifier l'existence du fichier

Server::Server() {}

Server::~Server() {}

void Server::logToConsole(const std::string& sensorId, const std::string& data) {
    // Affiche l'identifiant du capteur et les données dans la console
    std::cout << "[" << sensorId << "] " << data << std::endl;
}

void Server::logToFile(const std::string& sensorId, const std::string& data) {
    std::string filename = sensorId + "_log.csv";
    bool fileExists = std::filesystem::exists(filename); // Vérifie si le fichier existe déjà
    bool isFileEmpty = (fileExists && std::filesystem::file_size(filename) == 0); // Vérifie si le fichier est vide

    // Ouvre le fichier en mode ajout
    std::ofstream logFile(filename, std::ios::app);

    // Si le fichier est vide ou inexistant, ajoute l'en-tête
    if (!fileExists || isFileEmpty) {
        logFile << "Time |  Value\n";
    }

    // Récupère l'heure actuelle et écrit les données avec l'horodatage dans le fichier
    std::string currentTime = getCurrentTime();
    logFile << currentTime << " | " << data << "\n";
    logFile.close();
}

std::string Server::getCurrentTime() {
    // Retourne l'heure actuelle formatée en "YYYY-MM-DD HH:MM:SS"
    std::time_t now = std::time(nullptr);
    char buffer[20];
    std::strftime(buffer, 20, "%d-%m-%Y %H:%M:%S", std::localtime(&now));
    return buffer;
}
