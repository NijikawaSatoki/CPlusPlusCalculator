/* =========================================================================
 * 多関数の電卓
 * =========================================================================
 * 
 * 制作者：虹川郷鬼
 * バージョン：1.00a
 * 
 */

#include <iostream>
#include <cmath>
#include "Calculator.h"
using namespace std;

int main() {
	// 必要な変数を初期化します
	double x = 0.0;
	double y = 0.0;
	double result = 0.0;
	char oper = '+';
	
	// ユーザーさんに挨拶し、指示を提供します
	cout << "《シェルエンバイロンメントにいる電卓》" << endl << endl;
	cout << "実行する演算を入力して下さい。\n形式：a+b | a-b | a*b | a/b | a%b | a^b" << endl;
	
	// 計算を実行します
	Calculator c;
	while (true) {
		cin >> x >> oper >> y;
		if (oper == '/' && y == 0) {
			cout << "error: ０で除算しようとしています！" << endl;
			return 0;
		} else if (oper == '%' && y == 0) {
			cout << "error: ０で除算しようとしています！" << endl;
			return 0;
		} else {
			result = c.Calculate(x, oper, y);
		}
		cout << "答えは" << result << "です" << endl;
		return 0;
	}
	
	// アプリの終了です
	cout << endl;	// ターミナルのぎこちなさを避けるために必要です
	return 0;
}
