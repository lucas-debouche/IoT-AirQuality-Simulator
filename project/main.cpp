#include "Server.h"
#include "Scheduler.h"
#include "TemperatureSensor.h"
#include "HumiditySensor.h"
#include "SoundSensor.h"
#include "LightSensor.h"

int main() {
    Server server;
    Scheduler scheduler(&server);

    // Création des capteurs et ajout au scheduler
    Sensor* tempSensor = new TemperatureSensor(&server);
    Sensor* humSensor = new HumiditySensor(&server);
    Sensor* soundSensor = new SoundSensor(&server);
    Sensor* lightSensor = new LightSensor(&server);

    scheduler.addSensor(tempSensor);
    scheduler.addSensor(humSensor);
    scheduler.addSensor(soundSensor);
    scheduler.addSensor(lightSensor);

    // Lance la simulation
    scheduler.simulate();

    // Libération de la mémoire
    delete tempSensor;
    delete humSensor;
    delete soundSensor;
    delete lightSensor;

    return 0;
}
