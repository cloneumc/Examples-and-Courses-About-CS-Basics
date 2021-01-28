#1inci soru
cities = {"Italy":["Roma","Milano","Napoli"],"Spain":["Barcelona","Madrid","Malaga"],"France":["Paris","Lyon","Marsielle"],"Germany":["Munich","Ausburg","Frankfurt"]}
ulkeler=[]
sehirler=[]
for i in cities.keys():
    ulkeler.append(i)

rangeofcities = len(cities["Italy"])
for i in ulkeler:
    for j in range(rangeofcities):
        sehirler.append(cities[i][j])

alti_harf_kucuk_esit_sehir = []
alti_harf_buyuk_sehir = []
alti_harf_kucuk_esit_ulke = []
alti_harf_buyuk_ulke=[]

for i in sehirler:
    if len(i)<=6:
        alti_harf_kucuk_esit_sehir.append(i)
    else:
        alti_harf_buyuk_sehir.append(i)

for i in ulkeler:
    if len(i)<=6:
        alti_harf_kucuk_esit_ulke.append(i)
    else:
        alti_harf_buyuk_ulke.append(i)


print("Şehirler",alti_harf_buyuk_sehir,alti_harf_kucuk_esit_sehir,"\nÜlkeler",alti_harf_buyuk_ulke,alti_harf_kucuk_esit_ulke)
#2inci soru 

from random import randrange
# a şıkkı 
def ortalama(liste):
    kac_not = len(liste)
    ort = 0
    for i in liste:
        ort+=i
    return ort/kac_not
#b şıkkı

buyuk50= []
kucuk50= []

for i in range(1000):
    rand1 = randrange(1,51)
    rand2 = randrange(1,51)
    toplam = rand1 + rand2
    if toplam > 50 :
        buyuk50.append(toplam)
    elif toplam < 50:
        kucuk50.append(toplam)
    else:
        continue

print("Büyük 50 ortalama: ",ortalama(buyuk50)," \nKüçük 50 ortalama: ", ortalama(kucuk50))


#3üncü soru 

toplam = 0
for i in range(1,23,3):
    toplam += i*(i+3)
print(toplam)
