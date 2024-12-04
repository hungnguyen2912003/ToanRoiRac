import math

def CheckTime(year):
    if 6 <= year < 12:
        return 0.066
    elif 3 <= year < 6:
        return 0.056
    else:
        return 0.046
    
def TinhTien(nam, sotien):
    thang = round(years * 12)
    demsonam = thang // 12
    sothangdu = thang % 12
    
    laisuat = 0.076
    sum = math.pow(1 + laisuat, demsonam) * sotien
    
    monthly_interest_rate = laisuat(sothangdu)
    sum *= (1 + monthly_interest_rate)
    
    return sum

n = input()
inputs = n.split(" ")
years = float(inputs[0])
initial_money = int(inputs[1])
result = calculate_money(years, initial_money)
print("{:.6f}".format(result))
