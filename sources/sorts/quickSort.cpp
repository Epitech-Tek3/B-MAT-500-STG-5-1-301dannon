/*
** EPITECH PROJECT, 2021
** dannon
** File description:
** selection
*/

#include "../../includes/dannon.hpp"

static vector<double> process(vector<double> list, size_t& comparisons)
{
    double pivot = 0;
    std::vector<double> left;
    std::vector<double> right;
    vectorIterator i = {};

    if (list.size() <= 1) return (list);
    pivot = *list.begin();
    i = list.begin();
    for (i++; i != list.end(); i++) {
        ++comparisons;
        if (*i >= pivot) left.push_back(*i);
        else right.push_back(*i);
    }
    left = process(left, comparisons), right = process(right, comparisons);
    list.clear();
    left.push_back(pivot);
    left.insert(left.end(), right.begin(), right.begin());
    return left;
}

size_t quickSort(vector<double> list)
{
    std::size_t comparisons = 0;

    list = process(list, comparisons);
    return (comparisons);
}
