1. Jawaban Studi Kasus 1.

a. Operasi Pengisian Nilai (Assignment)

Base Case
- maks <- x1 => 1 kali
- i <- 2 => 1 kali
- i <- i+1 => n – 1 kali
- maks <- xi => 0 kali

T1min = 1 + 1 + n - 1 + 0 = 1 + n

Worst Case
- maks <- x1, =>1 kali
- i <- 2 , => 1 kali
- i <- i+1, =>n – 1 kali
- maks <- xi =>n kali
- T1max = 1 + + n - 1 + n = 1 + 2n

b. Operasi Penjumlahan
Base Case
- i + 1 , => n – 1 kali
- T2min = n - 1

Worst Case
- i + 1 , => n – 1 kali
- T2min = n - 1

c. Operasi Perbandingan
Base Case
- xi > maks, => n kali

Worst Case

d.Operasi Perbandingan
- xi > maks, => n kali

- T(min)= t_1+ t_2+ t_3=1+n+n-1+n=3n
- T(max)= t_1+ t_2+ t_3=1+2n+n-1+n=4n

=============================================================

2. Jawaban Studi Kasus 2.

a. Operasi Pengisian Nilai (Assignment)

Base Case
- i <- 1 => 	1 kali
- found <- false => 1 kali
- found = true => 1 kali
- i <- i + 1 => 0 kali
- idx <- i => 1 kali
- idx <- 0 => 0 kali

T1min = 1 + 1 + 1 + 0 + 1 + 0 = 4

Worst Case
- i <- 1 => 	1 kali
- found <- false => 1 kali
- found = true => 1 kali
- i <- i + 1 => n - 1 kali
- idx <- i => 1 kali
- idx <- 0 => 0 kali


T1min = 1 + 1 + 1 + n - 1 + 1 + 0 = 3 + n



b. Operasi Penjumlahan
Base Case
- i + 1 = 0 kali

T2min = 0

Worst Case
- i + 1 = n - 1 kali

T2min = n - 1


c. Operasi Perbandingan
Base Case
- xi == y  => 1 kali
- found == true => 1 kali

T3min = 1 + 1 = 2

Worst Case
- xi ==  y  => n kali
- found == true => 1 kali

T3min = n + 1


- T(min)= t_1+ t_2+ t_3= 4 + 0 + 2 = 6
- T(max)= t_1+ t_2+ t_3= 3 + n + n - 1 + n + 1 = 3n + 3

==================================================================

3. Jawaban Studi Kasus 3

Pengisian nilai:

- i = 1	1 kali
- j = (sizeof(numArray)/sizeof(*numArray))	1 kali
- found = false	1 kali
- mid = (i + j) / 2
- best case	1 kali worst case

- found = true
- best case	1 kali worst case

- i = mid + 1
- best case	0 kali worst case

- j = mid - 1
- best case	0 kali worst case

- idx = mid
- best case	1 kali worst case

- idx = 0
- best case	0 kali worst case

Penjumlahan:

 (i + j)
  
 best case	1 kali worst case

  mid + 1

best case	0 kali worst case

Pengurangan:

mid - 1

best case	0 kali worst case

Pembagian:

(i + j) / 2

best case	1 kali worst case

Perbandingan:

numArray[mid] == y

best case	1 kali worst case

numArray[mid] < y

best case	0 kali worst case

found == true

best case	1 kali worst case

Total:

Tmin(n) =

Tmax(n) =



