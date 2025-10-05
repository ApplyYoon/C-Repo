#include <stdio.h>
#include <string.h>

typedef struct {
    char name[20];
    int age;
    double score;
} Student;

// 구조체 정보 출력 함수
void printStudents(const Student *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("이름: %-10s | 나이: %2d | 점수: %.1f\n",
               arr[i].name, arr[i].age, arr[i].score);
    }
}

// 구조체 배열 정렬 (점수 기준 오름차순)
void sortStudentsByScore(Student *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i].score > arr[j].score) {
                // 구조체 전체 swap
                Student temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(void) {
    Student students[3];

    // 데이터 입력 (하드코딩)
    strncpy(students[0].name, "Alice", sizeof(students[0].name) - 1);
    students[0].name[sizeof(students[0].name) - 1] = '\0';
    students[0].age = 18;
    students[0].score = 95.5;

    strncpy(students[1].name, "Bob", sizeof(students[1].name) - 1);
    students[1].name[sizeof(students[1].name) - 1] = '\0';
    students[1].age = 19;
    students[1].score = 88.0;

    strncpy(students[2].name, "Charlie", sizeof(students[2].name) - 1);
    students[2].name[sizeof(students[2].name) - 1] = '\0';
    students[2].age = 20;
    students[2].score = 92.3;

    printf("=== 정렬 전 ===\n");
    printStudents(students, 3);

    sortStudentsByScore(students, 3);

    printf("\n=== 점수 기준 오름차순 정렬 후 ===\n");
    printStudents(students, 3);

    return 0;
}