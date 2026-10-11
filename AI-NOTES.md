**PROMPT** = Kenapa pas backward traversal doubly linked list lompat satu node padahal forward-nya normal di C++?
**AI HELPED US WITH** = Menemukan bug pointer. AI mengingatkan kalau kita cuma update pointer 'next' pas nambahin node baru, tapi lupa menyambungkan pointer 'prev' dari node setelahnya
**WHAT WE CHANGED/TESTED** = Kita menambahkan baris kode pembaruan pointer prev (misal: c->prev = x;) di fungsi insert. Setelah diubah, kita melakukan testing dengan run ulang program dan mengecek hasil backward traversal untuk memastikan tidak ada node yang terlewat
