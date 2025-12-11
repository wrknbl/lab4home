#include <stdio.h>
#include <windows.h>

int factorial(int n) {
	if (n == 0) return 1;
	return n * factorial(n - 1);
}

int f1(int n) {
	if (n >= 1) {
		printf("%d ", n);
		f1(n - 2);
	}
}

int f2(int n) {
	if (n > 1) {
		f2(n - 2);
	}
	printf("%d ", n);
}

int f3(int n) {
	printf("%d ", n);
	if (n > 1) {
		f3(n - 2);
		printf("%d ", n);
	}
}

void recEGE1(int n) {
	if (n >= 1) {
		printf(" %d", n);
		recEGE1(n - 1);
		recEGE1(n - 1);
	}
}

void F1(int n) {
	if (n > 2) {
		printf("%d\n", n);
		F1(n - 3);
		F1(n - 4);
	}
}

void F2(int n) {
	printf("%d\n", n);
	if (n < 5) {
		F2(n + 1);
		F2(n + 3);
	}
}

void G3(int n);

void F3(int n) {
	if (n > 0)
		G3(n - 1);
}

void G3(int n) {
	printf("*");
	if (n > 1)
		F3(n - 3);
}

int first_call = 1;
void f(int n) {
	if (n == 0) return;
	int b = n;
	if (first_call == 1) {
		while (b >= 1) {
			printf("<");
			b -= 1;
			first_call = 0;
		}
	}
	f(n - 1);
	if (n == 1) {
		printf("%d>", n);
	}
	else {
		printf("%d>", n);
	}
}

void toBinary(int n) {
	if (n > 1) {
		toBinary(n / 2);
	}
	printf("%d", n % 2);
}

void toBinar222y(int n) {
	if (n > 1) {
		toBinary(n / 2);
	}
	printf("%d", n % 2);
}

void toB22inar222y(int n) {
	if (n > 1) {
		toBinary(n / 2);
	}
	printf("%d", n % 2);
}


void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int number, i, n;
	do {
		printf("===========================================\n");
		printf("Выбeрите нужную вам операцию: \n");
		printf("1: Задание 9.1\n");
		printf("2: Задание 9.2\n");
		printf("3: Задание 9.4\n");
		printf("4: Задание 9.5\n");
		printf("5: Задание 9.6\n");
		printf("6: Задание 9.7\n");
		printf("7: Задание 9.9\n");
		printf("8: Задание 9.10(Преобразование числа в двоичную систему)\n");
		printf("0: Выйти из программы\n");
		scanf_s("%d", &number);
		switch (number)
		{
		case 1:
			printf("Введите n = ");
			scanf_s("%d", &n);
			printf("%ld\n", factorial(n));
			break;
		case 2:
			f1(11);
			printf("\n");
			f2(11);
			printf("\n");
			f3(11);
			printf("\n");
			break;
		case 3:
			recEGE1(3);
			printf("\n");
			break;
		case 4:
			F1(10);
			printf("\n");
			break;
		case 5:
			F2(1);
			printf("\n");
			break;
		case 6:
			F3(11);
			printf("\n");
			break;
		case 7:
			printf("Введите n = ");
			scanf_s("%d", &n);
			f(n);
			printf("\n");
			first_call = 1;
			break;
		case 8:
			printf("Введите n = ");
			scanf_s("%d", &n);
			toBinary(n);
			printf("\n");
			break;
		}
	} while (number != 0);
}
