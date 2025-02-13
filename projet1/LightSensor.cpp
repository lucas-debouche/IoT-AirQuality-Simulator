#include "LightSensor.h"
#include <cstdlib> // Pour la génération de valeurs aléatoires

LightSensor::LightSensor(Server* server) : Sensor("LightSensor", "Light", server) {}

void LightSensor::update() {
    // Génère un état lumineux aléatoire (On/Off) et envoie au serveur
    bool value = rand() % 2;
    std::string data = value ? "On" : "Off";
    server->logToConsole(id, data);          // Affiche dans la console
    server->logToFile(id, data);             // Enregistre dans le fichier CSV
}
