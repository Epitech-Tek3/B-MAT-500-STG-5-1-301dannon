/*
** EPITECH PROJECT, 2021
** dannon
** File description:
** Exception
*/

#include "../includes/Exception.hpp"

Exception::Exception(std::string const& message) : _message(message) {}

const char *Exception::what() const noexcept
{
    return _message.c_str();
}