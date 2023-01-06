/*
** EPITECH PROJECT, 2021
** dannon
** File description:
** Exception
*/

#pragma once

#include <string>
#include <exception>

class Exception : public std::exception {
    public:
        Exception(std::string const& message);
        virtual ~Exception() = default;

        virtual const char *what() const noexcept override;

    private:
        std::string _message;
};
