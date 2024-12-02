//
// Created by tonys on 28/11/2024.
//

#ifndef IRRIGATIONROBOT_HPP
#define IRRIGATIONROBOT_HPP

#include "Robot.hpp"

class IrrigationRobot : public Robot {
protected:
    double m_water_level{0.5};
    void irrigate(double x, double y);
    // position de la zone de recharge en eau
    std::vector<Vector2> m_water_zones;
public:
    IrrigationRobot(Environment* env) : Robot(env) {};
};



#endif //IRRIGATIONROBOT_HPP
