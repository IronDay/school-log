//
// Created by NSDF on 9/11/2023.
//

#include <iostream>
#include <format>

const auto sayHello = [](std::string_view name)
{ return std::format("{} is saying hello to everybody", name); };

int main()
{
	std::cout << sayHello("John G. Weller") << std::endl;
	return 0;
}