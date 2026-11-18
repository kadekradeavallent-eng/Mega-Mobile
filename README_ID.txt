MEGA MOBILE — BUILD OTOMATIS DENGAN GITHUB ACTIONS
Target: Geometry Dash Android 2.206

CARA MEMBUAT FILE .GEODE DARI HP:
1. Ekstrak ZIP ini.
2. Buat repository baru di GitHub (contoh: Mega-Mobile).
3. Upload SEMUA ISI folder proyek ke root repository.
   Pastikan folder tersembunyi .github ikut ter-upload.
4. Buka tab Actions pada repository.
5. Pilih workflow "Build Mega Mobile (Android)" lalu tekan Run workflow,
   atau buat commit/push ke branch main.
6. Tunggu proses selesai. Jika hijau/success, buka hasil workflow tersebut.
7. Di bagian Artifacts, unduh "Mega-Mobile-Android64" dan ekstrak ZIP-nya.
8. Jika build berhasil, di dalamnya ada file berakhiran .geode.
9. Pindahkan file .geode ke folder mods Geode di perangkat Android:
   Android/media/com.geode.launcher/game/geode/mods/
10. Restart Geometry Dash/Geode Launcher.

CATATAN PENTING:
- Android64 cocok untuk kebanyakan HP Android 64-bit. Jika perangkatmu 32-bit,
  workflow perlu diubah ke target Android32.
- Pastikan Geode Launcher dan Geometry Dash cocok dengan target versi 2.206.
- Jika tab Actions gagal, buka log build untuk melihat error.
- Ini source starter untuk memastikan alur GitHub Actions -> .geode bekerja.
  Fitur Noclip, Speedhack, StartPos, Hitboxes, dan fitur lain belum dibuat.
- Fitur yang memanipulasi skor/leaderboard server atau membuka konten terkunci
  tidak disertakan.

Dokumentasi resmi:
https://github.com/geode-sdk/build-geode-mod
https://github.com/geode-sdk/docs/blob/main/getting-started/create-mod.md
