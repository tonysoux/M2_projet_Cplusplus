//
// Created by tonys on 28/11/2024.
//

#ifndef PLANTINGROBOT_H
#define PLANTINGROBOT_H


class PlantingRobot : public Robot
{
public:
    PlantingRobot(Environment* env) : Robot(env) {};

    /// Mecanisme d'héritage fait qu'on à accès à tout ce qui est publique.
    double get_battery_capacity();
public:
    void set_seed();
};




#endif //PLANTINGROBOT_H
