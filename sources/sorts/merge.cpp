/*
** EPITECH PROJECT, 2021
** dannon
** File description:
** selection
*/

#include "../../includes/dannon.hpp"

std::vector<double> subProc(std::vector<double> left, std::vector<double> right,
    std::size_t &comparisons)
{
    vectorIterator itLeft = left.begin();
    vectorIterator itRight = right.begin();
    std::vector<double> list;

    for (; itLeft != left.end() && itRight != right.end();) {
        ++comparisons;
        if (*itLeft <= *itRight) m_push_back(itLeft);
        else m_push_back(itRight);
    }
    for (; itLeft != left.end(); itLeft++) list.push_back(*itLeft);
    for (; itRight != right.end(); itRight++) list.push_back(*itRight);
    return (list);
}

static vector<double> process(vector<double> list, size_t& comparisons)
{
    std::vector<double> left;
    std::vector<double> right;

    if (1 >= list.size()) return (list);
    for (vectorIterator i = list.begin(); i != list.end(); i++) {
        if (DISTANCE_BEGIN_INFERIOR_SIZE) right.push_back(*i);
        else left.push_back(*i);
    }
    left = process(left, comparisons);
    right = process(right, comparisons);
    list = subProc(left, right, comparisons);
    return (list);
}

size_t mergeSort(vector<double> list)
{
    std::size_t comparisons = 0;

    list = process(list, comparisons);
    return (comparisons);
}