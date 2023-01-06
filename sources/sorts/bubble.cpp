/*
** EPITECH PROJECT, 2021
** dannon
** File description:
** selection
*/

#include "../../includes/dannon.hpp"

std::size_t bubbleSort(std::list<double> list)
{
    std::size_t comparisons = 0;
    listIterator iEnd = list.end();
    listIterator x;

    iEnd--;
    for (listIterator i = list.begin(); i != list.end(); i++, iEnd--) {
        for (listIterator n = list.begin(); n != iEnd;) {
            x = n++;
            ++comparisons;
            if (*n < *x) std::iter_swap(n, x);
        }
    }
    return (comparisons);
}