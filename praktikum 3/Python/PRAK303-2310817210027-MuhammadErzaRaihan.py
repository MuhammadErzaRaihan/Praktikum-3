nilai = int(input(''))
 
hasil = None
if nilai > 1:
    hasil = 'postif'
elif nilai < 0:
    hasil = 'negatif'
elif nilai == 0:
    hasil = 'nol'
else:
    print('Errawrr :( ')
 
print(' {} '.format( hasil))
