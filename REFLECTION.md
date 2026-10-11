# Refleksi Kelompok - Tugas Mini Lab Doubly Linked List

**1. Pemahaman Materi**
*   **Muhammad Rafiki Hannan:** Melalui tugas ini, saya lebih memahami arsitektur keseluruhan dari Doubly Linked List (DLL) di C++, terutama bagaimana mengintegrasikan berbagai fungsi (insert, delete, traversal) agar bekerja secara sinkron dan memastikan tidak ada *memory leak* di akhir program.
*   **Abidzar Alghifari:** Saya menjadi paham bahwa operasi penambahan (*insert*) pada DLL jauh lebih kompleks daripada Singly Linked List karena mengharuskan pembaruan dua buah pointer (`next` dan `prev`) secara bersamaan agar rantai data tidak terputus.
*   **Muhammad Andhika Bagaskoro:** Saya belajar banyak tentang manajemen memori saat melakukan penghapusan (*delete*) node. Saya paham bahwa sebelum memori di-*dealokasi* (dihapus), kita wajib menjembatani pointer dari node sebelum dan sesudah node yang akan dihapus agar tidak terjadi *dangling pointer*.

**2. Kendala dan Solusi**
*   **Muhammad Rafiki Hannan:** Kendala saya adalah saat menggabungkan (*merge*) potongan-potongan kode dari anggota lain ke dalam satu file `main.cpp` yang utuh. Solusinya, saya menelusuri ulang alur pemanggilan fungsi di `main()` dan dibantu AI untuk memastikan tidak ada deklarasi pointer yang bentrok.
*   **Abidzar Alghifari:** Saya sempat kebingungan mengatur logika penempatan pointer saat menyisipkan *node* di tengah *list*. Solusinya, saya menggambar sketsa kotak dan panah (representasi *node* dan *pointer*) di atas kertas agar visualisasinya lebih jelas sebelum diubah menjadi kode C++.
*   **Muhammad Andhika Bagaskoro:** Saya menghadapi *bug* di mana *backward traversal* melompati *node* tertentu. Setelah melakukan *tracing* kode bersama-sama, kami menemukan bahwa kami lupa menyambungkan kembali pointer `prev` pada fungsi *insert*. Solusinya, kami langsung menambahkan baris pembaruan pointer `prev` tersebut.

**3. Kerja Sama Tim**
*   **Muhammad Rafiki Hannan:** Bertugas melakukan inisiasi repositori GitHub, menyusun kerangka utama program `main.cpp`, mengintegrasikan kode dari anggota lain, menulis dokumentasi `AI-NOTES.md` dan `REFLECTION.md`, serta mengurus *push* ke GitHub dan *submit* berkas ke LMS.
*   **Abidzar Alghifari:** Bertanggung jawab merancang dan mengimplementasikan fungsi penambahan *node* (*insert*). Turut bertugas melakukan *testing* pada fitur *forward traversal* untuk memastikan data lagu masuk dengan urutan yang tepat.
*   **Muhammad Andhika Bagaskoro:** Fokus pada implementasi fungsi penghapusan *node* (*delete*) dan pembersihan memori. Secara aktif mengecek ulang hasil *backward traversal* sehingga kelompok bisa mendeteksi dan memperbaiki masalah *pointer* yang terputus.