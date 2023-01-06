/*
** EPITECH PROJECT, 2021
** dannon
** File description:
** selection
*/

#include "../../includes/dannon.hpp"

std::size_t selectionSort(std::list<double> list)
{
    std::size_t comparisons = 0;

    for (listIterator i = list.begin(); i != list.end(); i++) {
        listIterator lowest = i;
        for (listIterator n = ++i; n != list.end(); ++n) {
            ++comparisons;
            if (*n < *lowest) lowest = n;
        }
        std::iter_swap(--i, lowest);
    }
    return (comparisons);
}