#ifndef SENSOR_H
#define SENSOR_H

#include <string>
#include "Server.h"

// Classe abstraite Sensor : définit le comportement de base d'un capteur
class Sensor {
protected:
    std::string id;      // Identifiant unique du capteur
    std::string type;    // Type de capteur (Température, Humidité, etc.)
    Server* server;      // Pointeur vers le serveur pour envoyer les données

public:
    Sensor(const std::string& id, const std::string& type, Server* server);
    virtual ~Sensor();

    // Méthode virtuelle pure qui sera redéfinie dans chaque type de capteur
    virtual void update() = 0;

    // Retourne l'identifiant du capteur
    virtual std::string getId() const { return id; }
};

#endif
