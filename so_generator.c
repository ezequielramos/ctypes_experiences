#include <stdio.h>
#include "so_generator.h"

int set_callback(PCallBack my_callback)
{
    my_callback->callback1(1, 1);
    my_callback->callback2(1, 1);
    return 0;
}
