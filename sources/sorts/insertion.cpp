/*
** EPITECH PROJECT, 2021
** dannon
** File description:
** selection
*/

#include "../../includes/dannon.hpp"

std::size_t insertionSort(std::list<double> list)
{
    std::size_t comparisons = 0;
    bool insert = false;
    listIterator i = list.begin()++;

    for (; i != list.end();) {
        for (listIterator n = list.begin(); n != i; n++) {
            ++comparisons;
            if (*i < *n) {
                list.insert(n, *i);
                i = list.erase(i);
                insert = true;
                break;
            }
        }
        if (!insert) i++;
        else insert = false;
    }
    return (comparisons);
}