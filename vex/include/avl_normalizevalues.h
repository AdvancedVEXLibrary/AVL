#pragma once
#ifndef _AVL_NORMALIZEVALUES_H_
#define _AVL_NORMALIZEVALUES_H_

vector2
avl_normalizevalues(const vector2 values)
{
    return values / sum(values);
}

vector
avl_normalizevalues(const vector values)
{
    return values / sum(values);
}

vector4
avl_normalizevalues(const vector4 values)
{
    return values / sum(values);
}

float[]
avl_normalizevalues(const float values[])
{
    float newValues[];
    resize(newValues, len(values));
    float total = sum(values);
    foreach (int index; float weight; values)
        newValues[index] = weight / total;
    return newValues;
}

float[]
avl_normalizevalues(const float values[]; const float scale)
{
    float newValues[];
    resize(newValues, len(values));
    float total = sum(values) / scale;
    foreach (int index; float weight; values)
        newValues[index] = weight / total;
    return newValues;
}

float[]
avl_normalizevalues(const int values[])
{
    float newValues[];
    resize(newValues, len(values));
    float total = sum(values);
    foreach (int index; float weight; values)
        newValues[index] = weight / total;
    return newValues;
}

float[]
avl_normalizevalues(const int values[]; const float scale)
{
    float newValues[];
    resize(newValues, len(values));
    float total = sum(values) / scale;
    foreach (int index; float weight; values)
        newValues[index] = weight / total;
    return newValues;
}

#endif  // _AVL_NORMALIZEVALUES_H_
