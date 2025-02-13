#ifndef LIGHTSENSOR_H
#define LIGHTSENSOR_H

#include "Sensor.h"

// Classe LightSensor : dérivée de Sensor, détecte la présence ou absence de lumière
class LightSensor : public Sensor {
public:
    LightSensor(Server* server);

    // Génère un état lumineux et envoie les données au serveur
    void update() override;
};

#endif
