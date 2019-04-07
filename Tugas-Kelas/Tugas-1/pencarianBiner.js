/*
Nama : Fauzi Faruq Nabbani
NPM : 140810160007
Program : Pencarian Biner
Tanggal : 6 Maret 2019
*/
console.time("Time");
function pencarianBiner(array, target) {
    let kiri = 0;
    let kanan = array.length - 1;
    while (kiri <= kanan) {
        const tengah = kiri + Math.floor((kanan - kiri) / 2);
        if (array[tengah] === target) {
            return tengah;
        }
        if (array[tengah] < target) {
            kiri = tengah + 1;
        } else {
            kanan = tengah - 1;
        }
    }
    return -1;
}
  const array= [1, 2, 3, 35, 67, 76, 88, 89]
  console.log(pencarianBiner(array, 35)) 
  console.timeEnd("Time");