def funkcja(n):
    if n == 1:
        return 1
    else:
        if n == 2:
            return 0.5
        else:
            return -funkcja(n - 1) * funkcja(n - 2)

n = int(input("Podaj nr wyrazu ciągu, którego wartość chcesz policzyć: "))
wynik = funkcja(n)
print(f"{n} wyraz ciągu ma wartość {wynik}")
