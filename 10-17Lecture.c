//함수 선언(function declaration):
//
//	함수의 정의가 항상 호출지점 위에 배치되어야 하는 것은 아닙니다. 아래의 프로그램을 통해 이를 알아보겠습니다.


#include <stdio.h>
// 함수의 선언부 : 함수의 정의부를 작성하기 전에 컴파일러에게 아래와 같은 함수가 있음을 미리 알림으로써 에러없이 처리되도록 합니다.

double average(double a, double b); // 함수의 선언부 끝에는 세미콜론을 반드시 작성해야 합니다.

//	double average(double a, double b) {
//		return (a + b) / 2;
//
//}

//int main(void) {
//	average(1.23, 3.45);
//
//	return;
//}

//int main(void) {
//	double result;
//
//	result = average(1.23, 3.45);
//
//	printf("두 값의 평균 : %.21f\n", average(1.23, 3.45));
//
//	return;
//}
//
//double average(double a, double b) {
//	return (a + b) / 2;
//}
//
//인수(Arguments):
//	매개 변수는 함수의 정의부에 나타납니다. 매개 변수는 함수가 호출 될 때 제공될 값을 저장하는 일종의 더미(dummy)이름입니다.
//	이에 반해서 인수는 함수 호출에 나타나는 표현식(혹은 값)입니다.
//
//	함수가 호출되는 과정에서 호출부의 인수가 함수의 매개변수에 복사가 일어납니다.
//
//	num : | 10 |
//
//	somefunction(int num) { // num = number
//	작업을 처리;
//
//	num = 20;
//}
//main() {
//number: | 10 |
//int number = 10;
//
//somefunc(number);
//
//연수가 값에 의해 전달된다는 사실은 장단점을 모두 가지고 있습니다.
//
//호출부의 인수에 영향을 주지 않고 매개 변수를 수정할 수 있기 때문에 함수 내에서 매개변수를 변수로 사용하여 필요한 변수의 수를 줄일 수 있습니다.
//
//숫자 x를 거듭 제곱으로 계산하는 다음 함수를 보겠습니다.


//#include <stdio.h>
//
//int power(int x, int n) {
//	int i, result = 1; // result는 x를 n회 곱한 값을 저장해야 하므로 1로 초기화 했습니다.
//	for (i = 1; i <= n; ++i)
//		result = result * x;
//
//	return result;
//}
//
//int main(void) {
//	int result;
//
//	result = power(2, 5);
//
//	return 0;
//}
//
//
////매개 변수 n은 원래 지수의 복사본이기 때문에 함수 내부에서 n을 수정 할 수 있으므로 변수 1는 사용할 필요가 없습니다.(최적화 : 메모리를 아껴쓰는 방법)
//
//int power(int x, int n) {
//	int result = 1;
//
//	while (n-- > 0) { // n값을 후위 감소한 이유는 n번의 반복울 수행하기 위해서입니다.
//		// 후위 증가경우
//		result = result * x; // result * = x; 와 동일
//	}
//
//	return result;
//}
//
//int main(void) {
//	int result_of_power;
//
//	result_of_power = power(2, 5);
//
//	printf("2의 5제곱값  : %d\n", result_of_power);
//
//	return 0;
//}

//c의 인수를 값으로 전달하는 방식은 특정 종류의 함수를 작성하는 것을 어렵게 만듭니다. 예를 들어 double 값을 정수부분과 분수 부분으로 분해하는 함수가 필요하다고 가정하겠습니다.
//
//함수가 두개의 숫자를 반환하는 것이 불가능하므로 변수쌍을 함수에 전달하여 수정하도록 시도해볼 수 있습니다.


//#include <stdio.h>
//
////분해 함수
//
//void decompose(double x, long int_part, double frac_part) {
//	long int_part = (long)x; // (long)3.14 => 3L
//	double frac_part = x - int_part; // 3.14 - 3 => .14
//
//
//	int_part = (long)x;
//	frac_part = x - int_part;
//
//	//i_part, f_part = decompose(3.14); // c에서는 불가능한 방법
//
//	return int_part, frac_part;
//}
//
//int main(void) {
//	
//	long i_part;
//	double f_part;
//
//
//	decompose(3.14, i_part, f_part);
//	return 0;
//}

//배열 인수 : 
//
//배열은 종종 함수의 인수로 사용됩니다. 매개변수가 1차원 배열인 경우 배열의 길이는 지정하지 않은 채로 함수를 정의할 수 있습니다.
//형태는 아래와 같습니다.

//int func(int a[]) {
//	...입력으로 들어온 배열을 처리합니다.
//}
//
//한 가지 문제는 함수가 배열의 길이를 알아낼 수 없다는 것입니다. 그러므로 함수의 매개변수가 배열형인 경우 넘겨받을 배열의 크기도 같이 바아야 함수 내부에서 배열에 대한 작업을 처리할 수 있습니다.
//그러므로 형태는 다음과 같아집니다.
//
//int func(int a[], int arr_size) {
//
//}
//
//sizeof 연산자를 함수의 내부에서 사용하여 배열 크기를 알아보려 시도할 수 있지만 정확한 값을 얻을 수 없습니다.
//
//int func(int a[]) { // a 라는 매개변수로 넘겨받은 값은 배열이 저장되어 있는 곳의 주소입니다.
//	// 작업하는 환경에 따라 다르지만 메모리 주소는 8바이트 혹은 4바이트입니다.
//	int len = sizeof(a) / sizeof(a[0]); // 정확한 크기가 계산되지 않습니다.
//					^ 배열의 시작주소(8바이트) / 4바이트 = 2;
//}
//
//#include <stdio.h>
//#define ARR_SIZE 5
//
//int sum_of_array(int a[], int size) {
//	// int arr_size = sizeof(a) / sizeof(a[0]);
//
//	/*printf("배열 안에서 계산한 배열의 크기 : %d\n", arr_size);*/
//
//	int i;
//	int sum = 0; // 누적합을 저장할 변수
//
//	for (i = 0; i < size; ++i) {
//		sum += a[i];
//	}
//
//	return sum;
//}
//
//int main(void)
//
//{
//	int arr[ARR_SIZE] = { 10, 20, 30, 40, 50 };
//	int sum = 0;
//
//	int arr_size = sizeof(arr) / sizeof(arr[0]);
//
//	printf("main에서 구한 배열의 크기 %d\n", arr_size);
//
//	sum = sum_of_array(arr, arr_size); // 배열 이름은 메모리상에 할당받은 배열의 시작 주소입니다.
//
//
//	return 0;
//}

// 배열의 매개 변수로 호출부의 값을 변경하는 것도 가능합니다 .다음 함수는 호출부의 배열 각 요소중 앞으로부터 n개의 요소를 0으로 초기화합니다.

#include <stdio.h>
//
//void store_zeros(int a[], int last_index) {
//	for ()
//}
//
//
//int main(void) {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	
//	store_zeros(arr, 4);
//
//	return 0;
//	
//}
//
//void store_zeros(int a[], int last_index) {
//	int i;
//
//	for (i = 0; i < last_index; ++i)
//		a[i] = 0;
//}
//
//void print_array(int a[], int size) {
//	int i;
//	printf("array elements : ");
//	for (i = 0; i < size; ++i)
//		printf("%d", a[i]);
//}
//
//int main(void) {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr_size = sizeof(arr) / sizeof(arr[0]);
//
//	printf("초기화 전의 배열 요소 출력\n");
//	print_array(arr, arr_size);
//
//	store_zeros(arr, 5);
//	printf("\n\n초기화 후의 배열 요소 출력\n");
//	print_array(arr, arr_size);
//
//	return 0;
//}

//다차원 배열을 함수에 넘기는 방법
//
//매개 변수가 다차원 배열인 경우 매개 변수를 선언할 때 첫 번째 차원의 길이만 생략할 수 있습니다.
//
//예를 들어 sum_array 함수를 수정하여 a가 2차원 배열인 경우에 행의 길이는 생략 가능하지만 열의 길이는
//
//반드시 지정해야 합니다.
//
//2차원 배열의 경우 : int arr3D[3][5]
//							  ^  ^ 
//							  행 열
//
//
//3차원 배열의 경우 : int arr3D[3][5][2]
//							  ^  ^  ^
//							  면 행 열
//
//
//	다음은 2차원 배열의 누적합을 구하는 함수의 예입니다.

#include <stdio.h>
#define ROWS 2
#define COLS 10

int sum_two_dimensional_array(int a[][COLS], int rows) {
	// 중첩 for문에 사용할 두개의 변수, 누적합을 저장할 변수
	int  i, j, sum = 0;

	for (i = 0; i < rows; ++i) {
		for (j = 0; j < COLS; ++j) {
			sum += a[i][j];
		}
	}
	return sum;
}

int main(void) {
	int arr2D[ROWS][COLS] = {
		{1,2,3,4,5,6,7,8,9,10},
	//  ^
	// arr2D[0]
		{11,22,33,44,55,66,77,88,99,100}
	//  ^
	// arr2D[1]
	};
	int sum;
	int size_of_row;

	size_of_row = sizeof(arr2D) / sizeof(arr2D[0]);
	printf("size_or_row : %d\n", size_of_row);

	sum = sum_two_dimensional_array(arr2D, ROWS);

	return 0;
}