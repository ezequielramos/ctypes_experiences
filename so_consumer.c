#include <stdio.h>
#include "so_generator.h"

void on_callback1(unsigned short param1, int param2);
void on_callback2(unsigned short param1, int param2);

int main()
{
    printf("Hello World \n");
    Callback my_callback;

    my_callback.callback1 = on_callback1;
    my_callback.callback2 = on_callback2;

    set_callback(&my_callback);
    return 0;
}

void on_callback1(unsigned short param1, int param2)
{
    printf("callback 1 %d %d\n", param1, param2);
}

void on_callback2(unsigned short param1, int param2)
{
    printf("callback 2 %d %d\n", param1, param2);
}
