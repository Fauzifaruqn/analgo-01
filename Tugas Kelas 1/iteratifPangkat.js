/*
Nama : Fauzi Faruq Nabbani
Program : Iteratif Pangkat
Tanggal : 6 Maret 2019
*/
console.time("Time");
var z = 5;
var c = 8;
var hasil = 1;
for(var i = 1 ; i<=c ; i++){
    hasil = hasil*z;
}
console.log("Hasil dari : " + z + " pangkat " + c +" : " + hasil);
console.timeEnd("Time");