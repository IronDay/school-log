#ifndef PROFESSOR_H
#define PROFESSOR_H

#pragma once
#include "Entity.hpp"
#include <string>

class Professor : public Entity
{
public:
    Professor() = default;
    Professor(std::string_view name, std::string_view surname,
              std::string_view dept, std::string_view title, std::string_view email);
    ~Professor();

private:
    std::string m_title;
    std::string m_surname;
    std::string m_email;
};

#endif