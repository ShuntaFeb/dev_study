#include <stdio.h>

int main()
{
    // 1. 普通の変数を定義
    // 16進数で 0x12345678 (10進数だと305419896) を入れます。
    // こうするとメモリ上でバイトの並び順がわかりやすくなります。
    int number = 0x12345678;

    // 2. 配列を定義
    // 文字の 'A', 'B', 'C', 'D' と、終端文字(0)です。
    char text[] = "ABCD";

    // 3. ポインタを定義
    // number の住所(アドレス)を格納します。
    int *ptr = &number;

    printf("変数 number のアドレス: %p\n", &number);
    printf("変数 number の値: 0x%x\n", number);
    printf("配列 text の先頭アドレス: %p\n", text);
    printf("ポインタ ptr が持っているアドレス: %p\n", ptr);

    // ★ここで一時停止してMEMORYビューを見るための「意味のない処理」
    printf("ここでブレークポイントを止めてください。\n");

    return 0;
}