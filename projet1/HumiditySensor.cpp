#include "HumiditySensor.h"
#include <cstdlib> // Pour la génération de valeurs aléatoires

HumiditySensor::HumiditySensor(Server* server) : Sensor("HumSensor", "Humidity", server) {}

void HumiditySensor::update() {
    // Génère une valeur aléatoire d'humidité et envoie au serveur
    float value = static_cast<float>(rand() % 100);
    std::string data = std::to_string(value);
    server->logToConsole(id, data + " %");   // Affiche dans la console
    server->logToFile(id, data);             // Enregistre dans le fichier CSV
}
