//
// Created by NSDF on 9/11/2023.
//

#include <iostream>
#include <format>
#include <functional>

const auto sayHello = [](std::string_view name)
{ return std::format("{} is saying hello to everybody", name); };

auto firstClass(const std::function<std::string(std::string_view)>& func, std::string_view name)
{
	return func(name);
}

int main()
{
	std::string m{ sayHello("Mark Weller") };
	std::cout << sayHello("John G. Weller") << std::endl;
	std::cout << firstClass(sayHello,"Sullyvan Weller") << std::endl;

	return 0;
}