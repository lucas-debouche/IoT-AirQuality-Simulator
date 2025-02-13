#include "Scheduler.h"
#include <thread>
#include <chrono>

Scheduler::Scheduler(Server* server) : server(server) {}

Scheduler::~Scheduler() {}

void Scheduler::addSensor(Sensor* sensor) {
    sensors.push_back(sensor);
}

void Scheduler::simulate() {
    for (int i = 0; i < 10; ++i) { // Simule 10 cycles
        for (Sensor* sensor : sensors) {
            sensor->update(); // Appelle update() pour chaque capteur
        }
        std::this_thread::sleep_for(std::chrono::seconds(1)); // Pause d'une seconde entre chaque cycle
    }
}
