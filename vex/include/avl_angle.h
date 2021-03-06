#pragma once
#ifndef _AVL_ANGLE_H_
#define _AVL_ANGLE_H_

float
avl_angle(const vector2 vec1; const vector2 vec2)
{
    return acos(dot(vec1, vec2) / sqrt(length2(vec1) * length2(vec2)));
}

// Todo (1.1): float avl_angle(const vector2; const vector2; const string mode)

float
avl_angle(const vector vec1; const vector vec2)
{
    return acos(dot(vec1, vec2) / sqrt(length2(vec1) * length2(vec2)));
}

// Todo (1.1): float avl_angle(const vector; const vector; const string mode)

#endif  // _AVL_ANGLE_H_
