Cheat Engine Dump - LunaValerie
@LunaValerie
|{LocalPlayer}|
LocalPlayer > "metin2f-Win64-Shipping.exe"+03C03DA0 - DWORD
Local Pointer > 0x2F8 - DWORD 
Attack Speed > 0x8A8 - DWORD
Movement Speed > 0x86C - Float
Level : 0x8B8
Stats Point : 0x8D8
Skill Point : 0x8DC
Megic Speed > 0x8AC - DWORD
SP > 0x8B0 - DWORD
HP > 0x85C
XP > 0x898
Magic Defense > 0x8B4 - DWORD
Int > 0x8B8 - DWORD
Vıt > 0x8BC - DWORD
Dex > 0x8C0 - DWORD
Str > 0x8C4 - DWORD
Attack Value > 0x8D0 - DWORD
Defense > 0x8D4 - DWORD

|{Others - Asm}|
Server is full > metin2f-Win64-Shipping.exe+8DE277

|{Username Password}|
Namespace : \x45\x7A\x67\x69\x7C\x59\x65\x6C\x6C\x6F\x77\x65\x73\x31\x32\x33\x7C\x61\x38\x35\x65\x34\x35\x65\x36\x62\x37\x33\x36\x7C\x37\x05
Mask : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

|{HGT}
ASM : metin2f-Win64-Shipping.exe+9137C8 - 80 BF 58020000 00 - cmp byte ptr [rdi+00000258],00
HGT : metin2f-Win64-Shipping.exe+9137CE | ON : 856192257 OFF : 856192256
Attack Freeze : metin2f-Win64-Shipping.exe+8EEF42
Move : metin2f-Win64-Shipping.exe+8EEEFC
Move v2 : metin2f-Win64-Shipping.exe+8EEC97
Freeze Player : metin2f-Win64-Shipping.exe+8EF664 - 80 BF 54070000 00     - cmp byte ptr [rdi+00000754],00
Freeze Player v2 : metin2f-Win64-Shipping.exe+1DB8A04 - 80 B9 57010000 02     - cmp byte ptr [rcx+00000157],02
Quick Age : metin2f-Win64-Shipping.exe+1E2374F - 44 0F11 B7 F0010000   - movups [rdi+000001F0],xmm14
Fly : metin2f-Win64-Shipping.exe+1E2373B - 0F11 BF D0010000      - movups [rdi+000001D0],xmm7

|{LocalPlayer}|
String : CANNOT_SKILL_NOT_MATCHABLE_WEAPON - 7 assagı
mov rax,[metin2f-Win64-Shipping.exe+3C03DA0]

String Move Speed > get playerSetting - 81 yukarı
String Move Speed > gettoyang - 30 assagı
movss [rcx+0000086C],xmm0

|{Game Status}|
metin2f-Win64-Shipping.exe+03C03DA0,2F8,8B8

|{Vector}|
Character Model Y : "metin2f-Win64-Shipping.exe"+03C03DB8,1A8,3E0,1E0
Player Y : "metin2f-Win64-Shipping.exe"+03C03DB8,138,1E0
Player X : "metin2f-Win64-Shipping.exe"+03C03DB8,138,1E4
Player Z : "metin2f-Win64-Shipping.exe"+03C03DB8,138,1E8
Quick Age : 0x1F0
Fly : 0x1D0

|{Farmbot}|
Y : metin2f-Win64-Shipping.exe+1CC4353 - 0F10 48 10            - movups xmm1,[rax+10]

|{Vector - asm}|
Vector : metin2f-Win64-Shipping.exe+1E23745 - 44 0F11 A7 E0010000   - movups [rdi+000001E0],xmm12

|{XD}|
Engine : 7ff77cf70000
Names : 7ff780c12540
Obje : 7FF780C4E9E0
World : 7FF780D92258