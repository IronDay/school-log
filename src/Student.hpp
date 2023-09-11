#ifndef STUDENT_H
#define STUDENT_H

#pragma once
#include <string>
#include "Entity.hpp"

class Student:public Entity
{
public:
    Student(std::string_view name, std::string_view dept,
            std::string_view surname, std::string_view email, int age);
    ~Student();

private:
    std::string m_surname;
    std::string m_email;
    int m_age{};
};

#endif