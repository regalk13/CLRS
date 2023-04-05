import math

def find_beat():
    a = 0
    b = 0
    n = 2
    while True:
        a = 8 * (n**2) 
        b = 64 * n * math.log2(n) 
        if a <= b:
            print(n)
        else:
            break

        n += 1
        
        
def find_beat_2():
    a = 0
    b = 0
    n = 1
    while True:
        a = 100*(n**2) 
        b = 2**n
        if a <= b:
            print(n)
            break
        else:
            pass
        n += 1
        
if __name__ == '__main__':
    # find_beat()
    find_beat_2()
    