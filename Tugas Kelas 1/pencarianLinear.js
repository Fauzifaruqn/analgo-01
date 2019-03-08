/*
Nama : Fauzi Faruq Nabbani
NPM : 140810160007
Program : Pencarian Linear
Tanggal : 6 Maret 2019
*/
console.time("Time");
function cari(array,target){
    for (var i = 1 ; i < array.length ; i++){
        if ( array[i] == target ){
            return "Element  ditemukan :" + " " + array[i] + " di index ke " + i;
        }      
    }
    return "Element tida ada dalam array"
}
const array = [2,3,4,5,9,10];
console.log(cari(array,4));
console.timeEnd("Time");