#ifndef SOUNDSENSOR_H
#define SOUNDSENSOR_H

#include "Sensor.h"

// Classe SoundSensor : dérivée de Sensor, génère des données de niveau sonore
class SoundSensor : public Sensor {
public:
    SoundSensor(Server* server);

    // Génère une lecture de niveau sonore et envoie les données au serveur
    void update() override;
};

#endif
