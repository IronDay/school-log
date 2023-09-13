#include "Professor.hpp"

Professor::Professor(std::string_view name, std::string_view surname,
 std::string_view dept, std::string_view title, std::string_view email)
 :Entity(name,dept),m_surname(surname),m_title(title),m_email(email)
{
}

Professor::~Professor()
{

}