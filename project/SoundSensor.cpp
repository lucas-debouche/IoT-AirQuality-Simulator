#include "SoundSensor.h"
#include <cstdlib> // Pour la génération de valeurs aléatoires

SoundSensor::SoundSensor(Server* server) : Sensor("SoundSensor", "Sound", server) {}

void SoundSensor::update() {
    // Génère une valeur aléatoire pour le niveau sonore et envoie au serveur
    int value = rand() % 120;
    std::string data = std::to_string(value);
    server->logToConsole(id, data + " dB");  // Affiche dans la console
    server->logToFile(id, data);             // Enregistre dans le fichier CSV
}
