// 변수의 영역 :

//지역변수(local veriable) :
//	로컬변수라고도 부릅니다.
//	함수의 본문에 선언된 변수는 함수에 로컬이라고 합니다. 함수도 매개변수도 지역변수입니다.
//	다른 함수에서 변수 sum은 지역변수 입니다.

//#include <stdio.h>
//
//int sum_digits(int n) {
//	//지역 변수 sum 의 초기화
//	int sum = 0;
//	while (n > 0) {
//		sum += n % 10; // 입력받은 숫자의 일의 자리 수를 sum에 누적 시킵니다.
//		n /= 10; // 현재 처리중인 숫자의 일의 자리 수를 제거합니다.
//	}
//	return sum;
//}
//
//int main(void)
//{
//	int number = 2350;
//	int returned_sum;
//
//	printf("함수를 입력하세요 : ");
//	scanf("%d", &number);
//
//	returned_sum = sum_digits(number);
//
//	printf("각 자릿수의 누적합 : %d\n", returned_sum);
//
//	return 0;
//}

// 지역 변수의 속성은 다음과 같습니다 : 

	/*자동 저장 기간을 갖습니다. 로컬 변수에 대한 메모리는 함수가 호출 될 때(혹은 변수가 함수안에서 선언될 때)
	"자동으로" 할당되고 함수가 반환될 때 할당(변수가 사용할 메모리를 준비하는 과정) 해제됩니다.
	지역변수는 함수가 반환되면 그 값을 유지하지 못합니다.

	변수의 사용 범위(scope)는 변수를 참조할 수 있는 프로그램 텍스트의 부분을 말합니다. 지역 변수는 함수가 반환되면 그 값을
	유지하지 못합니다.*/
//	
//void function(void) {
//	int i; -----
//			 
//		: 변수를 사용 가능한 범위
//
//		   -----
//	}

//정적 지역변수(static local variable):
//	지역 변수 선언의 앞에 static 이라는 키워드를 넣으면 자동저장 기간이 아닌 정적 저장 기간이 됩니다. 정적 저장 기간이
//	있는 변수는 영구 저장 위치를 가지고 있기 때문에 프로그램을 실행하는 동안은 그 값을 유지합니다.
//	
//	형태는 아래와 같습니다.
//
//	void function(void) {
//	static int i; // 정적 지역 변수
//	}
//
//위의 변수 i는 static으로 선언되었기 때문에 프로그램 실행 내내 동일한 메모리 위치를 점유합니다. function을 다시
//호출했을 때 저장하고 있던 값을 유지합니다.
//
//정적 지역 변수도 블록 범위를 갖으므로 다른 함수에서는 사용할 수 없습니다.
//
//간단히 말해서, 정적 변수는 다른 함수로부터 데이터를 숨기지만 같은 함수의 효율을 위해 데이터를 유지하는 변수입니다.
//

//#include <stdio.h>
//// 호출 시 함수의 지역 변수의 정적 지역 변수에 2씩 값을 더하는 함수
//void addTwo() {
//
//	// local_var : | 2 |, static_var : | 0 |
//	int local_var = 0; // 지역변수 선언
//	static int static_var = 0; // 정적 지역 변수 선언
//
//	local_var += 2;
//	static_var += 2;
//
//	printf("\tlocal variable(지역 변수): %d\n", local_var);
//	printf("\tstatic variable(정적 변수): %d\n", static_var);
//}
//
//int main(void) {
//	int i;
//
//	for (i = 0; i < 5; ++ i) {
//		addTwo();
//		printf("\n");
//
//		if (i < 4)
//			printf("%d 번째 addTwo(함수 호출\n\n", i + 1);
//	}
//
//	return 0;
//}
//
//
//전역 변수 :
//
//전역 변수(Global variable) :
//	전역 변수는 정적 저장 기간을 갖습니다.즉 프로그램 종료시까지 메모리를 점유하고 사용하고 그 값도 유지합니다.
//	전역(외부) 변수는 파일 범위를 갖으므로 현재 파일에 정의된 모든 함수에서접근하여 사용이 가능합니다.
// 전역 변수는 될 수 있으면 사용을 피하는 것이 좋습니다. 모든 함수에서 접근하여 그 값을 변경할 수 있기 때문에
// 원치않는 논리 오류가 발생할 가능성이 있습니다..

//#include <stdio.h>
//
//int number;
//
//void print_global_variable() {
//	printf("전역변수의 값 : %d\n", number);
//}
//
//void set_gVar() {
//	int input;
//
//	printf("전역 변수에 저장할 값 입력 : ");
//	scanf("%d", &input);
//	number = input;
//}
//
//int main(void) {
//	number = 10;
//
//	print_global_variable();
//	set_gVar();
//	print_global_variable();
//
//	return 0;
//}
//

//프로그램 실행형태는 다음과 같습니다.
//
//A new number has been chosen.(랜덤 번호생성)
//
//Enter guess : 55
//
//Too low; try again
//
//Enter guess : 58
//
//You won in 4 guesses!
//
//play again(Y/N)y
//
//A new number has been chosen. (랜덤번호설정)
//
//Enter guess : 78
//
//...
//
//You won in 2 guesses!
//
//play again(Y/N)n
//
//프로그램 종료
//
//이 프로그램은 난수 생성, 비밀 번호 선택, 정확한 번호가 선택될 때까지 사용자의 상호 작용등 여러 가지 작업을 수행해야 합니다.
//
//각 작업을 처리하기 위해 별도의 함수를 작성하여 프로그램을 작성합니다.


//#include <stdio.h>
//#include <stdlib.h> // rand(), srand()
//#include <time.h> // time()
//
//#define MAX_NUMBER 100
//
//// 전역 변수 선언 : 현재 작업 파일의 모든 함수에서 접근 가능한 변수
//
//int secret_number; // 정답을 저장할 전역 변수
//
//void initialize_number_generator(void); // 숫자 생성기를 초기화하는 함수
//int choose_new_secret_number(void); // 새로운 정답을 선택하는 함수
//void read_guesses(void); // 사용자로부터 추측값을 입력받고 정답인지 여부에 따라 알맞은 처리를 수행합니다.
//
//int main(void) {
//	char command; // 게임을 다시 수행할지 여부를 사용자에게 입력받아서 저장할 변수
//
//	int secret_number;
//	printf("Guess the secret number between 1 and %d.\n\n", MAX_NUMBER);
//	//게임에 대한 안내 메시지
//	//숫자 생성기를 초기화합니다.
//	initialize_number_generator();
//	do {
//		//함수가 반환하는 정답을 지역 변수 secret_number에 저장합니다.
//		secret_number = choose_new_secret_number();
//		//정답을 선택합니다.
//		printf("A new number has been chosen.\n");
//		// 지역변수 secret_number에 저장한 정답을 read_guesses함수의 입력으로 넘겨셔 함수 내부의 비교구문에 사용할
//		// 수 있게 됩니다.
//		read_guesses();
//		// 게임을 다시 수행할 건지 물어봅니다.
//		printf("play again? (Y/N)");
//		scanf(" %c", &command);
//		printf("\n");
//	} while (command == 'y' || command == 'Y');
//
//	return 0;
//}
//
//void initialize_number_generator(void) {
//	// 랜덤 함수의 씨앗값을 설정합니다.
//	srand((unsigned int)time(NULL));
//}
//
//// 1~ 100 사이의 값중 하나를 선택하여 전역변수 secret_number에 저장합니다.
//// 변경된 함수
//int choose_new_secret_number(void)
//{
//	//선택한 정답을 호출부로 반환합니다.
//	return rand() % MAX_NUMBER + 1;
//	/*secret_number = rand() % MAX_NUMBER + 1; */
//	// rand() % MAX_NUMBER 로 수행했을 때 나올 수 있는 값의 범위는 0~ 99까지
//	//이 값에 1을 더하여 보정을 합니다.
//}
//
//void read_guesses(int secret_number)
//{
//	//플레이어 추측값, 추측 횟수를 저장할 변수 선언
//	int guess, num_guesses = 0;
//
//	//플레이어가 정답을 맞출 때까지 반복합니다.
//	for (;;) {
//		// 매 반복이 시작되면 한 번의 추측이 수행되므로 추측 횟수를 1 증가 시킵니다.
//		num_guesses ++;
//		printf("Enter guess : ");
//		scanf("%d", &guess);
//		//입력 받은 값이 정답인지 체크합니다
//		if (guess == secret_number) {
//			printf("You won in %d guesses!\n\n", num_guesses);
//			//정답을 맞췄으므로 호출부로 들어가서 재 실행 여부를 입력받습니다.
//			return 0;
//		}
//		else if (guess < secret_number) // 추측값이 정답보다 작은 경우
//			printf("Too low; trt again \n");
//		else
//			printf("Too high; try again \n");
//	}
//}
//
////프로그램은 항상 작동하지만 전역 변수에 의존합니다. 이는 위에서 언급했듯이 여러 가지 문제가 발생할 여지를 가지고 있습니다.
////read_guesses와 choose_new_secret_number를 조금 변경하여 secret_number를 main 함수로 옮기겠습니다. 즉 메인함수의
////지역변수화 시키겠습니다.
////
////choose_new_secret_number를 수정하여 선택한 정답을 반환하게 하고 secret_number를 read_guesses함수에 인수로 전달하고
////매개 변수로 받는 형태로 다시 작성합니다.
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#define MAX_NUMBER 100
//
////함수의 원형
//void initialize_number_generator(void);
/////choose_new_secret_number() 함수는 정답을 임의 선택하여 호출부로 반환하는 형태로 변경합니다.
//int choose_new_secret_number(void);
//// read_guesses 함수는 정답을 입력으로 받아 처리하고 반환값은 없습니다.
//void read_guesses(int secret_number);
//
//int main(void)
//{
//	char command;
//	//기존에 전역 변수였던 secret_number를 메인의 지역변수로 선언합니다.
//	int secret_number;
//
//	printf()
//}
//전역변수는 꼭 사용해야할때를 제외하고 되도록 사용하지 않는 것이 안전하다.


//지역 변수 보충 설명 : 
//지역 변수가 선언되는 블록은 분기문(if, switch문), 반복문(do - while, while, for)문의 본문을 포함하는 중괄호도
//해당됩니다.
//
//int i = 10;
//int j = 5;
//
//// i 값이 j 값보다 큰 경우 두값을 스왑(swap)하는 경우
//if (i > j) {
//	//프로그램에서 두 값을 교환하기 위해서는 임시 변수가 필요합니다.
//	// i : | 5 |, j : | 10 |
//	// temp : | 10 |
//	int temp
//
//		temp = i;
//	i = j;
//	j = temp; 
//}

// 동일한 변수명을 서로 다른 영역에 선언하여 사용하게 되면 현재 처리하는 값이 어떤 변수의 값인지 혼동이 올 수 있습니다.

//#include <stdio.h>
//
//int i; // 전역 변수 i 선언
//
//void function(int i) { // 매개 변수 i 선언
//	i = 1; // 함수의 지역변수는 전역변수보다 우선권이 있으므로 이 때 참조되는 변수 i는 매개변수 i입니다.
//}
//
//void g_function(void) {
//	int i = 2; // 함수의 지역 변수 i 선언
//
//	if (i > 0) {
//		int i; // if문의 지역 변수 i 선언. 중괄호 안에 선언된 변수가 우선권이 있으므로 중괄호 안에서 사용되는
//		// 변수 i는 if문에서 선언한 변수입니다.
//		i = 3; // if문 안의 변수 i는 if문을 벗어나면 메모리에서 사라지므로 참조 할 수 없습니다.
//	}
//	i = 4; // g_function의 지역 변수 i가 사용됩니다.
//}
//
//void h_function(void) {
//	i = 5; // 전역 변수 i에 값을 대입
//}
//
//int main(void)
//{
//	return 0;
//}

C 프로그램 구성

C 언어에서 프로그램 작성시 다음과 같은 순서로 작성하는 것이 좋습니다.

#include 및 #define 과 같은 사전 처리 지시어

형식 정의(typedef)

외부 변수 선언

함수 프로토타입(원형) : 선언부

메인 함수

함수 정의

연습 문제:

	다음 값을 반환하는 함수를 작성하세요. (a와 n이 매개변수라고 가정합니다.) 여기서 a는 int값들을 저장하는
		배열이고 n은 배열의 길이입니다.

		(1) 배열 arr에서 가장 큰 값을 반환하는 함수
		(2) 배열 arr의 모든 요소 평균을 반환하는 함수
		(3) 배열 arr의 양의 요소(양수값) 갯수를 반환하는 함수