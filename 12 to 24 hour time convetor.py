# use this function to convert 12 Clock to 24 Hour clock

def timeConversion(s):
    
    hh=(s[0:2])
    
    if s.endswith("AM"):
        if s[0:2]=='12':
            hh="00"
            return str(hh)+s[2:len(s)-2]
        return s[0:len(s)-2]
    
    if int(hh)+12==24:
        hh="00"
    
    
    return str(int(hh)+12)+s[2:len(s)-2]

#one examble
print(timeConversion("01:00:00PM"))