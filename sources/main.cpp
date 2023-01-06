/*
** EPITECH PROJECT, 2021
** dannon
** File description:
** main
*/

#include "../includes/dannon.hpp"
#include "../includes/Exception.hpp"
#include <sys/stat.h>
#include <stdlib.h>

#include <stdlib.h>

dannon::dannon(int const ac, char *const av)
{
    struct stat buffer;
    ifstream file;
    double value = 0;
    string test;

    if (1 != ac) throw Exception("Bad argument number.");
    if (stat(av, &buffer) != 0) throw Exception("No file found.");
    file.open(av);
    if (!file) throw Exception("An error occured during opening your file.");
    _file << file.rdbuf();
    for (; _file.rdbuf()->in_avail(); _list.push_back(value), _vect.push_back(value)) {
        _file >> value;
        if (_file.fail() && value == 0) {
            throw Exception("An error occured during parsing your file.");
        } else if (_file.fail()) {
            _list.pop_back();
            _vect.pop_back();
        }
    }
}

static std::pair<std::string, sortsT> sorts1[3] = {
    make_pair("Selection sort: ", selectionSort),
    make_pair("Insertion sort: ", insertionSort),
    make_pair("Bubble sort: ", bubbleSort),
};

static std::pair<std::string, sortsVT> sorts2[2] = {
    make_pair("Quicksort: ", quickSort),
    make_pair("Merge sort: ", mergeSort),
};

void dannon::run(char *const *const av)
{
    std::cout << _list.size() << " elements" << std::endl;
    for (auto t : sorts1)
        std::cout << t.first << t.second(_list) << " comparisons" << std::endl;
    for (auto t : sorts2)
        std::cout << t.first << t.second(_vect) << " comparisons" << std::endl;
}

int main(int ac, char *const *av)
{
    --ac, ++av;
    try {
        dannon dan(ac, *av);
        dan.run(av);
    } catch (Exception const &error) {
        std::cerr << error.what() << std::endl;
        return (84);
    }
    return 0;
}