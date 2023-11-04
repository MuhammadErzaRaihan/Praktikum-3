nilai = int(input(' '))
 
hasil = None
if nilai >=100 :
    hasil = 'Anda Menginput Melebihi Limit Bilangan'
elif nilai < 100 and nilai >= 20:
    hasil = 'Puluhan'
elif nilai < 20 and nilai >= 10:
    hasil = 'Belasan'
elif nilai <= 9 and nilai >= 1:
    hasil = 'Satuan'
elif nilai == 0:
    hasil = 'Nol'
else:
    print('Tidak terdefinisi')
 
print(' {} =  {}'.format(nilai, hasil))
