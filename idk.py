import math

def CheckTime(year):
    if 6 <= year < 12:
        return 0.066
    elif 3 <= year < 6:
        return 0.056
    else:
        return 0.046

def TinhSoTien(nam, sotien):
    thang = round(nam * 12)
    nam = thang // 12
    sothangdu = thang % 12
    laisuat = 0.076
    sum = sotien * math.pow(1 + laisuat, nam)
    laisuat = CheckTime(sothangdu)
    sum *= 1 + laisuat
    return sum

input_list = input()
inputs = input_list.split(" ")
years = float(inputs[0])
sotien = int(inputs[1])
laikep = TinhSoTien(years, sotien)
print("{:.6f}".format(laikep))
