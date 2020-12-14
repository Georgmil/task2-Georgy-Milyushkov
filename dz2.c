#include <stdio.h>
#include <math.h>


	void task1() {
		int year1, year2, month1, month2, date1, date2;
		printf("task1\n");
		printf("Person 1");
		printf("\nenter year of bith:");
		scanf_s("%d", &year1);
		printf("enter number of month(1-12) of bith:");
		scanf_s("%d", &month1);
		printf("nenter date of bith(1-31):");
		scanf_s("%d", &date1);

		printf("\n");
		printf("Person 2");
		printf("enter year of bith:");
		scanf_s("%d", &year2);
		printf("enter number of month(1-12) of bith:");
		scanf_s("%d", &month2);
		printf("enter date of bith(1-31):");
		scanf_s("%d", &date2);

		if (year1 < year2)
			printf("\nperson 1 is older person 2");
		else if (year1 > year2)
			printf("\nperson 2 is older person 1");
		else {
			if (month1 < month2)
				printf("\nperson 1 is older person 2");
			else if (month1 > month2)
				printf("\nperson 2 is older person 1");
			else {
				if (date1 < date2)
					printf("\nperson 1 is older person 2");
				else if (date1 > date2)
					printf("\nperson 2 is older person 1");
				else
					printf("\nPerson 1 and 2 are same age");
			}
		}
	}

	void task2() {
		printf("task2\n");

		float x, y, x2, y2;

		printf("you will now decide a point x,y and we will check if it is in the shaded part\n");
		printf("enter x value for the point: ");
		scanf_s("%f", &x);
		printf("enter y value for the point: ");
		scanf_s("%f", &y);

		x2 = pow(x, 2);
		y2 = pow(y, 2);

		if (x > -2 && x < 0 && y <(-x - 2) && y>-2)
			printf("the point is in the shaded part outside rhomb (left bottom triangle)\n");
		else if (x > -2 && x<0 && y>(x + 2) && y < 2)
			printf("the point is in the shaded part outside rhomb (left upper triangle)\n");
		else if (x > 0 && x < 2 && y<(x - 2) && y>-2)
			printf("the point is in the shaded part outside rhomb (right bottom triangle)\n");
		else if (x > 0 && x<2 && y>(-x + 2) && y < 2)
			printf("the point is in the shaded part outside rhomb (right upper triangle)\n");
		else
			printf("point is not in the shadded part outside rhomb \n");



		if (x > -2 && x < 0 && x2 + y2>4 && y > -2)
			printf("the point is in the shaded part outside ring \n");
		else if (x > 0 && x < 2 && x2 + y2>4 && y > -2 && y < 0)
			printf("the point is in the shaded part outside ring \n");
		else
			printf("the point is not in the shaded part \n");



	}
	void task3() {
		printf("task 3\n");

		float t;
		int u;
		printf("Set a value of x:");
		scanf_s("%f", &t);

		u = t;
		if (t < 0)
			printf("f is 0");
		else if (u % 2 == 0)
			printf("f is 1");
		else
			printf("f is -1");

	}
	void task4() {
		printf("task 4\n");

		float lena1, lenb1, lenc1, lena2, lenb2, lenc2, maxlen1, maxlen2, minlen1, minlen2, midlen1, midlen2;
		printf("Type the length of the first side of 1 triangle:\n");
		scanf_s("%f", &lena1);
		printf("Type the length of the second side of 1 triangle:\n");
		scanf_s("%f", &lenb1);
		printf("Type the length of the third side of 1 triangle:\n");
		scanf_s("%f", &lenc1);
		printf("Type the length of the first side of 2 triangle:\n");
		scanf_s("%f", &lena2);
		printf("Type the length of the second side of 2 triangle:\n");
		scanf_s("%f", &lenb2);
		printf("Type the length of the third side of 2 triangle:\n");
		scanf_s("%f", &lenc2);

		if (lena1 >= lenb1) {
			maxlen1 = lena1;
			minlen1 = lenb1;
		}
		else {
			maxlen1 = lenb1;
			minlen1 = lena1;
		}


		if (maxlen1 >= lenc1 && lenc1 <= minlen1) {
			midlen1 = minlen1;
			minlen1 = lenc1;
		}
		else if (maxlen1 >= lenc1 && lenc1 >= minlen1)
			midlen1 = lenc1;

		else {
			midlen1 = maxlen1;
			maxlen1 = lenc1;
		}






		if (lena2 >= lenb2) {
			maxlen2 = lena2;
			minlen2 = lenb2;
		}
		else {
			maxlen2 = lenb2;
			minlen2 = lena2;
		}

		if (maxlen2 >= lenc2 && lenc2 <= minlen2) {
			midlen2 = minlen2;
			minlen2 = lenc2;
		}
		else if (maxlen2 >= lenc2 && lenc2 >= minlen2)
			midlen2 = lenc2;

		else {
			midlen2 = maxlen2;
			maxlen2 = lenc2;
		}




		float res, res2, res3, eps;

		res = maxlen1 / maxlen2;
		res2 = midlen1 / midlen2;
		res3 = minlen1 / minlen2;




		if (res == res2 && res == res3)
			printf("Treugloniki podobine");
		else
			printf("treugloniki ne podobnie");

	}
	void task5() {
		printf("Task 5\n");

		int year;
		printf("type in a year number:");
		scanf_s("%d", &year);

		if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
			printf("366 days in the year");
		else
			printf("365 days in the year");

	}

	void task6() {
		printf("task 6\n");

		int age;
		printf("Type in age between 20-69:\n");
		scanf_s("%d", &age);


		switch (age / 10) {

		case 2: printf("Dvatsat "); break;
		case 3: printf("Tridsat "); break;
		case 4: printf("Sorok "); break;
		case 5: printf("Pjatdisat "); break;
		case 6: printf("Shedsisat "); break;
		}

		switch (age % 10) {
		case 0: printf("let "); break;
		case 1: printf("odin god "); break;
		case 2: printf("dva goda "); break;
		case 3: printf("tri goda "); break;
		case 4: printf("chetiri goda "); break;
		case 5: printf("pjat let "); break;
		case 6: printf("shest let "); break;
		case 7: printf("semj let "); break;
		case 8: printf("vosem let "); break;
		case 9: printf("djevatj let "); break;

		}


	}

	int main() {
		int n = 1;
		while (n) {
			printf("\n\n");
			printf("Which task do you want to slove, task 1, 2,3, 4, 5 or 6. (Type 0 to exit):\n");
			scanf_s("%d", &n);
			printf("\n");
			switch (n) {
			case 1: task1(); break;
			case 2: task2(); break;
			case 3: task3(); break;
			case 4: task4(); break;
			case 5: task5(); break;
			case 6: task6(); break;

			}
		}


		return 0;
	}