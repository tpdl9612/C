//�Լ� ����(function declaration):
//
//	�Լ��� ���ǰ� �׻� ȣ������ ���� ��ġ�Ǿ�� �ϴ� ���� �ƴմϴ�. �Ʒ��� ���α׷��� ���� �̸� �˾ƺ��ڽ��ϴ�.


#include <stdio.h>
// �Լ��� ����� : �Լ��� ���Ǻθ� �ۼ��ϱ� ���� �����Ϸ����� �Ʒ��� ���� �Լ��� ������ �̸� �˸����ν� �������� ó���ǵ��� �մϴ�.

double average(double a, double b); // �Լ��� ����� ������ �����ݷ��� �ݵ�� �ۼ��ؾ� �մϴ�.

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
//	printf("�� ���� ��� : %.21f\n", average(1.23, 3.45));
//
//	return;
//}
//
//double average(double a, double b) {
//	return (a + b) / 2;
//}
//
//�μ�(Arguments):
//	�Ű� ������ �Լ��� ���Ǻο� ��Ÿ���ϴ�. �Ű� ������ �Լ��� ȣ�� �� �� ������ ���� �����ϴ� ������ ����(dummy)�̸��Դϴ�.
//	�̿� ���ؼ� �μ��� �Լ� ȣ�⿡ ��Ÿ���� ǥ����(Ȥ�� ��)�Դϴ�.
//
//	�Լ��� ȣ��Ǵ� �������� ȣ����� �μ��� �Լ��� �Ű������� ���簡 �Ͼ�ϴ�.
//
//	num : | 10 |
//
//	somefunction(int num) { // num = number
//	�۾��� ó��;
//
//	num = 20;
//}
//main() {
//number: | 10 |
//int number = 10;
//
//somefunc(number);
//
//������ ���� ���� ���޵ȴٴ� ����� ������� ��� ������ �ֽ��ϴ�.
//
//ȣ����� �μ��� ������ ���� �ʰ� �Ű� ������ ������ �� �ֱ� ������ �Լ� ������ �Ű������� ������ ����Ͽ� �ʿ��� ������ ���� ���� �� �ֽ��ϴ�.
//
//���� x�� �ŵ� �������� ����ϴ� ���� �Լ��� ���ڽ��ϴ�.


//#include <stdio.h>
//
//int power(int x, int n) {
//	int i, result = 1; // result�� x�� nȸ ���� ���� �����ؾ� �ϹǷ� 1�� �ʱ�ȭ �߽��ϴ�.
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
////�Ű� ���� n�� ���� ������ ���纻�̱� ������ �Լ� ���ο��� n�� ���� �� �� �����Ƿ� ���� 1�� ����� �ʿ䰡 �����ϴ�.(����ȭ : �޸𸮸� �Ʋ����� ���)
//
//int power(int x, int n) {
//	int result = 1;
//
//	while (n-- > 0) { // n���� ���� ������ ������ n���� �ݺ��� �����ϱ� ���ؼ��Դϴ�.
//		// ���� �������
//		result = result * x; // result * = x; �� ����
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
//	printf("2�� 5������  : %d\n", result_of_power);
//
//	return 0;
//}

//c�� �μ��� ������ �����ϴ� ����� Ư�� ������ �Լ��� �ۼ��ϴ� ���� ��ư� ����ϴ�. ���� ��� double ���� �����κа� �м� �κ����� �����ϴ� �Լ��� �ʿ��ϴٰ� �����ϰڽ��ϴ�.
//
//�Լ��� �ΰ��� ���ڸ� ��ȯ�ϴ� ���� �Ұ����ϹǷ� �������� �Լ��� �����Ͽ� �����ϵ��� �õ��غ� �� �ֽ��ϴ�.


//#include <stdio.h>
//
////���� �Լ�
//
//void decompose(double x, long int_part, double frac_part) {
//	long int_part = (long)x; // (long)3.14 => 3L
//	double frac_part = x - int_part; // 3.14 - 3 => .14
//
//
//	int_part = (long)x;
//	frac_part = x - int_part;
//
//	//i_part, f_part = decompose(3.14); // c������ �Ұ����� ���
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

//�迭 �μ� : 
//
//�迭�� ���� �Լ��� �μ��� ���˴ϴ�. �Ű������� 1���� �迭�� ��� �迭�� ���̴� �������� ���� ä�� �Լ��� ������ �� �ֽ��ϴ�.
//���´� �Ʒ��� �����ϴ�.

//int func(int a[]) {
//	...�Է����� ���� �迭�� ó���մϴ�.
//}
//
//�� ���� ������ �Լ��� �迭�� ���̸� �˾Ƴ� �� ���ٴ� ���Դϴ�. �׷��Ƿ� �Լ��� �Ű������� �迭���� ��� �Ѱܹ��� �迭�� ũ�⵵ ���� �پƾ� �Լ� ���ο��� �迭�� ���� �۾��� ó���� �� �ֽ��ϴ�.
//�׷��Ƿ� ���´� ������ �������ϴ�.
//
//int func(int a[], int arr_size) {
//
//}
//
//sizeof �����ڸ� �Լ��� ���ο��� ����Ͽ� �迭 ũ�⸦ �˾ƺ��� �õ��� �� ������ ��Ȯ�� ���� ���� �� �����ϴ�.
//
//int func(int a[]) { // a ��� �Ű������� �Ѱܹ��� ���� �迭�� ����Ǿ� �ִ� ���� �ּ��Դϴ�.
//	// �۾��ϴ� ȯ�濡 ���� �ٸ����� �޸� �ּҴ� 8����Ʈ Ȥ�� 4����Ʈ�Դϴ�.
//	int len = sizeof(a) / sizeof(a[0]); // ��Ȯ�� ũ�Ⱑ ������ �ʽ��ϴ�.
//					^ �迭�� �����ּ�(8����Ʈ) / 4����Ʈ = 2;
//}
//
//#include <stdio.h>
//#define ARR_SIZE 5
//
//int sum_of_array(int a[], int size) {
//	// int arr_size = sizeof(a) / sizeof(a[0]);
//
//	/*printf("�迭 �ȿ��� ����� �迭�� ũ�� : %d\n", arr_size);*/
//
//	int i;
//	int sum = 0; // �������� ������ ����
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
//	printf("main���� ���� �迭�� ũ�� %d\n", arr_size);
//
//	sum = sum_of_array(arr, arr_size); // �迭 �̸��� �޸𸮻� �Ҵ���� �迭�� ���� �ּ��Դϴ�.
//
//
//	return 0;
//}

// �迭�� �Ű� ������ ȣ����� ���� �����ϴ� �͵� �����մϴ� .���� �Լ��� ȣ����� �迭 �� ����� �����κ��� n���� ��Ҹ� 0���� �ʱ�ȭ�մϴ�.

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
//	printf("�ʱ�ȭ ���� �迭 ��� ���\n");
//	print_array(arr, arr_size);
//
//	store_zeros(arr, 5);
//	printf("\n\n�ʱ�ȭ ���� �迭 ��� ���\n");
//	print_array(arr, arr_size);
//
//	return 0;
//}

//������ �迭�� �Լ��� �ѱ�� ���
//
//�Ű� ������ ������ �迭�� ��� �Ű� ������ ������ �� ù ��° ������ ���̸� ������ �� �ֽ��ϴ�.
//
//���� ��� sum_array �Լ��� �����Ͽ� a�� 2���� �迭�� ��쿡 ���� ���̴� ���� ���������� ���� ���̴�
//
//�ݵ�� �����ؾ� �մϴ�.
//
//2���� �迭�� ��� : int arr3D[3][5]
//							  ^  ^ 
//							  �� ��
//
//
//3���� �迭�� ��� : int arr3D[3][5][2]
//							  ^  ^  ^
//							  �� �� ��
//
//
//	������ 2���� �迭�� �������� ���ϴ� �Լ��� ���Դϴ�.

#include <stdio.h>
#define ROWS 2
#define COLS 10

int sum_two_dimensional_array(int a[][COLS], int rows) {
	// ��ø for���� ����� �ΰ��� ����, �������� ������ ����
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