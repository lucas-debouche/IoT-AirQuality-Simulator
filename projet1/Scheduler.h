#ifndef SCHEDULER_H
#define SCHEDULER_H

#include <vector>
#include "Sensor.h"

// Classe Scheduler : active les capteurs périodiquement pour simuler les lectures
class Scheduler {
private:
    std::vector<Sensor*> sensors; // Liste des capteurs à activer
    Server* server;

public:
    Scheduler(Server* server);
    ~Scheduler();

    // Ajoute un capteur à la liste des capteurs
    void addSensor(Sensor* sensor);

    // Lance la simulation en activant chaque capteur périodiquement
    void simulate();
};

#endif
