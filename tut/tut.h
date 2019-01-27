//
// Created by Derrick on 7/17/2017.
//

#ifndef TUT_TUT_H
#define TUT_TUT_H

#include <stdio.h>
#include <memory.h>


char * add_null_char(char *name)
{
//  if ((strlen(name) > 0) || name[strlen(name) - 1] == '\n' || name[strlen(name) - 1] == ' ')
    name[strlen(name)] = '\0';
  return name;
}


#endif //TUT_TUT_H
