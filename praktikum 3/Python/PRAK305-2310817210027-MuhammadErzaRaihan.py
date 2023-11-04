detik = int(input("input\n"))

menit = (detik % 3600) // 60
jam = (detik % (24 * 3600)) // 3600
hari = detik // (24 * 3600)
X = detik % 60

if hari > 0:
    print("\nOutput\n{} hari {:02d}:{:02d}:{:02d}".format(hari, jam, menit, X))
else:
    print("\nOutput\n{:02d}:{:02d}:{:02d}".format(jam, menit, X))
