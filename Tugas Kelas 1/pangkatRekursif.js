/*
Nama : Fauzi Faruq Nabbani
Program : Rekursif Pangkat
Tanggal : 6 Maret 2019
*/
console.time("Time");
var x = 5;
var y = 8;
var hasil = 1;
function pangkat(x,y){
    if (y === 0){
        return 1;
    } else {
            return pangkat(x,y-1)*x;
        }  
}
console.log("Hasil dari " + x + " pangkat " + y + " adalah " + pangkat(x,y));
console.timeEnd("Time");

