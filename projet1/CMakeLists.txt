cmake_minimum_required(VERSION 3.10)
project(IoT_Simulator)

set(CMAKE_CXX_STANDARD 17)

add_executable(IoT_Simulator main.cpp Server.cpp Scheduler.cpp Sensor.cpp TemperatureSensor.cpp HumiditySensor.cpp SoundSensor.cpp LightSensor.cpp)
