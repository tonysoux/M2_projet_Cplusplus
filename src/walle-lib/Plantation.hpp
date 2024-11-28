//
// Created by tonys on 28/11/2024.
//

#ifndef PLANTATION_HPP
#define PLANTATION_HPP
#include "vector2.hpp"
#include <iostream>

class Plantation {
protected:
    std::string m_state;
    double m_position_x;
    double m_position_y;
public:
    void set_state(std::string state);

};



#endif //PLANTATION_HPP
