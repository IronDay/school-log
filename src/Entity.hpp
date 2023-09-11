//
// Created by NSDF on 9/11/2023.
//

#ifndef SCHOOL_LOG_SRC_ENTITY_HPP
#define SCHOOL_LOG_SRC_ENTITY_HPP

#include <string>
#include <string_view>

class Entity
{
public:
	Entity() = default;

	Entity(std::string_view name, std::string_view dept);

private:
	std::string m_name;
	std::string m_dept;
};

#endif //SCHOOL_LOG_SRC_ENTITY_HPP
