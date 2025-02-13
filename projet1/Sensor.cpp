#include "Sensor.h"

// Constructeur de la classe Sensor
Sensor::Sensor(const std::string& id, const std::string& type, Server* server)
    : id(id), type(type), server(server) {}

// Destructeur de la classe Sensor
Sensor::~Sensor() {}
