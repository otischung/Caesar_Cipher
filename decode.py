import base64
# This code is written by Ray Chung

t = "xTu85WFGUZRJPX]4MO\\SMINt^}45"

for i in range(256):
    s = ""
    for u in t:
        u = chr((ord(u) + i) % 256)
        s += u
    try:
        x = base64.b64decode(s).decode("big5")
        print(x)
    except:
        pass
