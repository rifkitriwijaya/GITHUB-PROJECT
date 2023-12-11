#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

const int SIZE = 1000;
string bookTitle[SIZE];
string bookAuthor[SIZE];
string filePath;

int loadData(string);
int showAll(string);
int authorSearch(string, string);

int main() {
    // Initialize variables
    string userPath;
    string searchA;
    char userChoice;

    // Mengambil file dari pengguna
    cout << "Masukkan jalur file: ";
    cin >> userPath;

    // Memanggil fungsi loadData untuk membaca data dari file
    loadData(userPath);

    // Membuat menu pencarian
    cout << "Pilih cara pencarian: "
         << "A. Mencari oleh penulis" << endl
         << "T. Mencari oleh judul" << endl;
    cout << "Masukkan pilihan: ";
    cin >> userChoice;

    switch (userChoice) {
        case 'A':
            cout << "Masukkan nama penulis yang ingin Anda cari: ";
            cin >> searchA;
            cout << "Hasil pencarian oleh penulis: " << authorSearch(searchA, userPath) << endl;
            break;
        case 'T':
            cout << "Masukkan judul yang ingin Anda cari: ";
            cin >> searchA;
            cout << "Hasil pencarian oleh judul: " << authorSearch(searchA, userPath) << endl;
            break;
        default:
            cout << "Pilihan tidak valid";
    }

    return 0;
}

int loadData(string passedPath) {
    // Kode untuk membaca data dari file
}

int showAll(string) {
    // Kode untuk menampilkan semua buku dalam perpustakaan
}

int authorSearch(string searchA, string userPath) {
    // Kode untuk mencari buku berdasarkan nama penulis
}
