// inputData1.cpp
// 輸出一筆數字資料，然後將資料顯示在螢幕
#include <iostream> //允許程式能接受鍵盤輸入資料，及將資料輸出到螢幕

// 主程式由 main()函式 開始執行
int main(void)
{ //開始主程式 main()函式
	//宣告一個變數，讓程式儲存輸入的資料
	int number1 = 0; //增加一個整數型態的變數，並初始化變數數值為0

	printf("請輸入一個數字:"); // 顯示 '請輸入一個數字:' 在螢幕上
	scanf("%d", &number1); //從鍵盤輸入讀取資料，儲存在變數 number1 中

	printf("您輸入的數字為:%d", number1); //顯示變數 number1 的資料在螢幕上
	return 0; // 回傳 0, 表示程式成功執行結束
} //結束主程式 main()函式
