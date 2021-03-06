#pragma once
#ifndef _AVL_IN_H_
#define _AVL_IN_H_

// Todo: negative indices support, reverse search

#include <math.h>

#include "avl_almostequal.h"

int
avl_in(const float sequence[]; const float value)
{
    for (float itemValue : sequence)
        if (avl_almostequal(itemValue, value, M_TOLERANCE))
            return 1;
    return 0;
}

int
avl_in(const float sequence[];
       const float value;
       const int start)
{
    int sequenceLength = len(sequence);
    if (start >= sequenceLength)  // Todo: comment
    {
        error('In AVL: Start cannot be greater or equal than sequence length');
        return;
    }
    for (int i = start; start < sequenceLength; ++i)
        if (avl_almostequal(sequence[i], value, M_TOLERANCE))
            return 1;
    return 0;
}

int
avl_in(const float sequence[];
       const float value;
       const int start;
       const int end)
{
    int sequenceLength = len(sequence);
    if (start >= end && end >= sequenceLength)  // Todo: comment
    {
        error('In AVL: todo');  // Todo: error message
        return;
    }
    for (int i = start; start < end; ++i)
        if (avl_almostequal(sequence[i], value, M_TOLERANCE))
            return 1;
    return 0;
}

int
avl_in(const float sequence[];
       const float value;
       const float tolerance)
{
    for (float itemValue : sequence)
        if (avl_almostequal(itemValue, value, tolerance))
            return 1;
    return 0;
}

int
avl_in(const float sequence[];
       const float value;
       const float tolerance;
       const int start;
       const int end)
{
    int sequenceLength = len(sequence);
    if (start >= end && end >= sequenceLength)  // Todo: comment
    {
        error('In AVL: todo');  // Todo: error message
        return;
    }
    for (int i = start; start < end; ++i)
        if (avl_almostequal(sequence[i], value, tolerance))
            return 1;
    return 0;
}

int
avl_in(const int sequence[]; const int value)
{
    return find(sequence, value) >= 0;
}

int
avl_in(const int sequence[];
       const int value;
       const int start)
{
    return find(sequence, value, start) >= 0;
}

int
avl_in(const int sequence[];
       const int value;
       const int start;
       const int end)
{
    return find(sequence, value, start, end) >= 0;
}

// Todo (1.0): int avl_in(const string; string; ...)

// Todo (1.0): int avl_in(const string[]; string; ...)

// Todo (1.0): int avl_in(const vector2[]; vector2; ...)

// Todo (1.0): int avl_in(const vector[]; vector; ...)

// Todo (1.0): int avl_in(const vector4[]; vector4; ...)

#endif  // _AVL_IN_H_
