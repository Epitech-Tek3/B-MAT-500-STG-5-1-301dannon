/*
** EPITECH PROJECT, 2021
** dannon
** File description:
** dannon
*/

#pragma once

#include <iostream>
#include <vector>
#include <list>
#include <stdbool.h>
#include <fstream>
#include <string>
#include <sstream>
#include "Exception.hpp"

using namespace std;

#define m_push_back(lv) ({ \
    list.push_back(*lv); \
    lv++; \
})

#define DISTANCE_BEGIN_INFERIOR_SIZE \
    std::distance(list.begin(), i) < (long int)(list.size() / 2)

typedef size_t (*sortsT)(list<double>);
typedef size_t (*sortsVT)(vector<double>);

typedef list<double>::iterator listIterator;
typedef vector<double>::iterator vectorIterator;

size_t selectionSort(list<double> list);
size_t insertionSort(list<double> list);
size_t bubbleSort(list<double> list);
size_t quickSort(vector<double> list);
size_t mergeSort(vector<double> list);

class dannon
{
    private:
        list<double> _list;
        vector<double> _vect;
        stringstream _file;

    public:
        dannon();
        dannon(int const ac, char *const av);
        dannon(const dannon &) = delete;
        ~dannon() = default;

        void run(char *const *const av);

};
