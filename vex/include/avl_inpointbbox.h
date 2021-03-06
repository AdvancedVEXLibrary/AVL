#pragma once
#ifndef _AVL_INPOINTBBOX_H_
#define _AVL_INPOINTBBOX_H_

int
avl_inpointbbox(const int geometry; const vector position)
{
    vector min = getpointbbox_min(geometry);
    vector max = getpointbbox_max(geometry);
    return position.x > min.x && position.x < max.x &&
           position.y > min.y && position.y < max.y &&
           position.z > min.z && position.z < max.z;
}

int
avl_inpointbbox(const string geometry; const vector position)
{
    vector min = getpointbbox_min(geometry);
    vector max = getpointbbox_max(geometry);
    return position.x > min.x && position.x < max.x &&
           position.y > min.y && position.y < max.y &&
           position.z > min.z && position.z < max.z;
}

int
avl_inpointbbox(const int geometry;
                const vector position;
                const string pointgroup)
{
    vector min = getpointbbox_min(geometry, pointgroup);
    vector max = getpointbbox_max(geometry, pointgroup);
    return position.x > min.x && position.x < max.x &&
           position.y > min.y && position.y < max.y &&
           position.z > min.z && position.z < max.z;
}

int
avl_inpointbbox(const string geometry;
                const vector position;
                const string pointgroup)
{
    vector min = getpointbbox_min(geometry, pointgroup);
    vector max = getpointbbox_max(geometry, pointgroup);
    return position.x > min.x && position.x < max.x &&
           position.y > min.y && position.y < max.y &&
           position.z > min.z && position.z < max.z;
}

#endif  // _AVL_INPOINTBBOX_H_
