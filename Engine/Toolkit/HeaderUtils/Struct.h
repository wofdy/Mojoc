/*
 * Copyright (c) 2012-2019 scott.cgi All Rights Reserved.
 *
 * This code and its project Mojoc are licensed under [the MIT License],
 * and the project Mojoc is a game engine hosted on github at [https://github.com/scottcgi/Mojoc],
 * and the author's personal website is [https://scottcgi.github.io],
 * and the author's email is [scott.cgi@qq.com].
 *
 * Since : 2014-12-22
 * UpDate: 2018-1-8
 * Author: scott.cgi
 */

 
#ifndef STRUCT_H
#define  STRUCT_H


#include <stddef.h>


/**
 * Get struct pointer from member pointer.
 */
#define AStruct_GetParent(memberPtr, ParentType) \
    ((ParentType*) ((char*) (memberPtr) - offsetof(ParentType, memberPtr)))


/**
 * Get struct pointer from member pointer with memberName.
 * this for memberPtr not same as memberName.
 */
#define AStruct_GetParentWithName(memberPtr, ParentType, memberName) \
    ((ParentType*) ((char*) (memberPtr) - offsetof(ParentType, memberName)))


#endif
