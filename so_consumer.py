import ctypes

lib = ctypes.CDLL("./libSoGenerator.so")

callback_func = ctypes.CFUNCTYPE(None, ctypes.c_ushort, ctypes.c_int)


class struct_Callback(ctypes.Structure):
    _fields_ = [("callback1", callback_func), ("callback2", callback_func)]


def on_callback1(param1, param2):
    print("callback 1 %d %d" % (param1, param2))


def on_callback2(param1, param2):
    print("callback 2 %d %d" % (param1, param2))


callback1 = callback_func(on_callback1)
callback2 = callback_func(on_callback2)
callback = struct_Callback(callback1, callback2)

print("Hello World")
lib.set_callback(ctypes.pointer(callback))
