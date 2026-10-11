# Refleksi Kelompok - Tugas Mini Lab Doubly Linked List

**1. Pemahaman Materi**
Melalui tugas ini, kami menjadi lebih paham mengenai cara kerja struktur data Doubly Linked List (DLL) di C++. Berbeda dengan Singly Linked List, pengimplementasian DLL membutuhkan ketelitian ekstra karena kami harus mengelola dua pointer sekaligus (`next` dan `prev`) setiap kali melakukan operasi insert atau delete.

**2. Kendala dan Solusi**
Tantangan terbesar yang kami hadapi adalah mengatur logika penyambungan pointer, terutama saat menambahkan atau menghapus node di tengah dan di akhir list. Kami sempat mengalami *bug* di mana *backward traversal* melompati node tertentu karena kami lupa menyambungkan pointer `prev` dari node setelahnya. Solusinya, kami menelusuri ulang alur logika pointer di atas kertas (dan dibantu AI) untuk memastikan tidak ada koneksi yang terputus.

**3. Kerja Sama Tim**
Pembagian tugas berjalan dengan baik. (Opsional: Sebutkan pembagian tugasnya, misalnya: Anggota A mengerjakan struktur dasar, Anggota B mengerjakan fungsi insert, Anggota C mengerjakan fungsi delete, dan Anggota D menyusun laporan/GitHub). Kami berkolaborasi menggabungkan kode dan melakukan *testing* bersama hingga semua *task* (1-6) berjalan sesuai ekspektasi.