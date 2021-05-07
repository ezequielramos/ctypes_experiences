typedef struct Callback_Struct
{
    void (*callback1)(unsigned short param1, int param2);
    void (*callback2)(unsigned short param1, int param2);
} Callback, *PCallBack;

int set_callback(PCallBack callback);
