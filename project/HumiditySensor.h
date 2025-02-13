#ifndef HUMIDITYSENSOR_H
#define HUMIDITYSENSOR_H

#include "Sensor.h"

// Classe HumiditySensor : dérivée de Sensor, génère des données d'humidité
class HumiditySensor : public Sensor {
public:
    HumiditySensor(Server* server);

    // Génère une lecture d'humidité et envoie les données au serveur
    void update() override;
};

#endif
