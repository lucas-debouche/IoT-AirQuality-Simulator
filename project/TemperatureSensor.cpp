#include "TemperatureSensor.h"
#include <cstdlib> // Pour la génération de valeurs aléatoires

TemperatureSensor::TemperatureSensor(Server* server) : Sensor("TempSensor", "Temperature", server) {}

void TemperatureSensor::update() {
    // Génère une valeur aléatoire de température et envoie au serveur
    float value = static_cast<float>(rand() % 100) / 10.0;
    std::string data = std::to_string(value);
    server->logToConsole(id, data + " C");   // Affiche dans la console
    server->logToFile(id, data);             // Enregistre dans le fichier CSV
}
