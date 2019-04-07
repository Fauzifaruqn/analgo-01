/*
Nama : Fauzi Faruq Nabbani
Program :Shapley
Tanggal : 6 Maret 2019
*/


#include <iostream> 
#include <string.h> 
#include <stdio.h> 
using namespace std; 

// Jumlah Pria atau Wanita
#define N 5

// Fungsi ini mengembalikan true jika wanita lebih menyukai pria 'm1' daripada pria 'm'
bool wPrefersM1OverM(int prefer[2*N][N], int w, int m, int m1) 
{ 
	// Periksa apakah w lebih suka m daripada keterlibatannya saat ini m1
	for (int i = 0; i < N; i++) 
	{ 
		// Jika m1 datang sebelum m dalam daftar w, ketika w lebih suka 
		// cirrent engagement, don't do anything 
		if (prefer[w][i] == m1) 
			return true; 

		// Jika m datang sebelum m1 dalam daftar w, maka bebaskan arusnya
		// engagement and engage her with m 
		if (prefer[w][i] == m) 
		return false; 
	} 
} 

// Mencetak pencocokan stabil untuk N anak laki-laki dan perempuan N. Anak laki-laki diberi nomor 0 hingga
// N-1. Anak perempuan dinomori sebagai N ke 2N- 
void stableMarriage(int prefer[2*N][N]) 
{ 
	// nomor wanita antara N dan 2 * N-1. Nilai -1
	// menunjukkan bahwa (N + i) wanita itu gratis
	int wPartner[N]; 
	bool mFree[N]; 

	// Initialize all men and women as free 
	memset(wPartner, -1, sizeof(wPartner)); 
	memset(mFree, false, sizeof(mFree)); 
	int freeCount = N; 

	//Lakukan while selagi ada orang free
	while (freeCount > 0) 
	{ 
		// Pick the first free man (we could pick any) 
		int m; 
		for (m = 0; m < N; m++) 
			if (mFree[m] == false) 
				break; 

		// One by one go to all women according to m's preferences. 
		// Here m is the picked free man 
		for (int i = 0; i < N && mFree[m] == false; i++) 
		{ 
			int w = prefer[m][i]; 
			// The woman of preference is free, w and m become 
			// partners (Note that the partnership maybe changed 
			// later). So we can say they are engaged not married 
			if (wPartner[w-N] == -1) 
			{ 
				wPartner[w-N] = m; 
				mFree[m] = true; 
				freeCount--; 
			} 

			else // If w is not free 
			{ 
				// Find current engagement of w 
				int m1 = wPartner[w-N]; 

				// Jika w lebih suka m daripada pertunangannya saat ini m1,
				// lalu putuskan pertunangan antara w dan m1 dan
				// terlibat m dengan w.
				if (wPrefersM1OverM(prefer, w, m, m1) == false) 
				{ 
					wPartner[w-N] = m; 
					mFree[m] = true; 
					mFree[m1] = false; 
				} 
			} // End of Else 
		} // End of the for loop that goes to all women in m's list 
	} // End of main while loop 


	// Print the solution 
	cout << "Woman Man" << endl; 
	for (int i = 0; i < N; i++) 
	cout << " " << i+N << "\t" << wPartner[i] << endl; 
} 
// Driver program to test above functions 
int main() 
{ 
	int prefer[2*N][N] = { 
		{9, 8, 7, 6, 5}, 
		{7, 9, 8, 5, 6}, 
		{9, 6, 5, 7, 8}, 
		{8, 7, 5, 9, 6}, 
		{9, 7, 8, 6, 5},
		{0, 1, 2, 3, 4}, 
		{4, 2, 3, 1, 0}, 
		{2, 4, 3, 0, 1}, 
		{1, 0, 3, 4, 2}, 
		{3, 2, 0, 3, 4}, 
	}; 
	stableMarriage(prefer); 
	return 0; 
} 

