//
// Created by tonys on 28/11/2024.
//

#ifndef IRRIGATIONROBOT_HPP
#define IRRIGATIONROBOT_HPP



class IrrigationRobot : public Robot {
private:
    double m_water_level{0.5};
public:
    irrigationRobot(Environment* env) : Robot(env) {};
};



#endif //IRRIGATIONROBOT_HPP
