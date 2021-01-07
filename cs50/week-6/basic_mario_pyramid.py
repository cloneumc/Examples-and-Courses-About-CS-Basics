condt=True
while(condt == True):
    h = int(input("Height: "))
    if(h>=1 and h<9):
        for i in range(h):
            print("#" * (i + 1));
        break
    else:
        continue
