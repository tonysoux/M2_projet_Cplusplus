
#include "robot.hpp"

double Robot::get_speed()
{
    return m_speed;
}

void Robot::set_speed(double speed)
{
    m_speed = speed;
}

void Robot::set_angular_speed(double vitesse_angulaire)
{
    m_omega = vitesse_angulaire;
}

double Robot::get_angular_speed()
{
    return m_omega;
}

void Robot::stop()
{
    set_speed(0);
    set_angular_speed(0);
}

void Robot::run(double dt)
{
    m_x += cos(m_theta) * m_speed * dt ;
    m_y += sin(m_theta) * m_speed * dt ;
    m_theta += m_omega * dt ;
}



void PlantingRobot::set_seed()
{
    environment->add_seed_at(get_position_x(), get_position_y(), "Oak");
}
