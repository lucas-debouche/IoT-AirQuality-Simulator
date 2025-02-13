#ifndef TEMPERATURESENSOR_H
#define TEMPERATURESENSOR_H

#include "Sensor.h"

// Classe TemperatureSensor : dérivée de Sensor, génère des données de température
class TemperatureSensor : public Sensor {
public:
    TemperatureSensor(Server* server);

    // Génère une lecture de température et envoie les données au serveur
    void update() override;
};

#endif
