#include "Student.hpp"

Student::Student(std::string_view name, std::string_view dept,
                 std::string_view surname, std::string_view email, int age)
    : Entity(name, dept), m_surname(surname), m_email(email), m_age(age)
{
}

Student::~Student()
{
}