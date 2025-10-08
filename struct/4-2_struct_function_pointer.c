#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 함수 포인터를 포함한 구조체 정의
typedef struct {
    char name[20];
    int age;
    double score;

    // 함수 포인터: 구조체 내부 데이터를 처리할 함수들
    void (*print)(const char *name, int age, double score);
    void (*updateScore)(double *score, double delta);
} Student;

// 함수 정의
void printStudent(const char *name, int age, double score) {
    printf("이름: %-10s | 나이: %2d | 점수: %.1f\n", name, age, score);
}

void addScore(double *score, double delta) {
    *score += delta;
    if (*score > 100.0) *score = 100.0; // 점수 상한선 처리
}

int main(void) {
    // 구조체 생성
    Student s;

    strncpy(s.name, "Alice", sizeof(s.name) - 1);
    s.name[sizeof(s.name) - 1] = '\0';
    s.age = 18;
    s.score = 95.0;

    // 함수 포인터에 실제 함수 주소 연결
    s.print = printStudent;
    s.updateScore = addScore;


    s.print(s.name, s.age, s.score);

    printf("\n점수 +3.5 보정 적용 중...\n");
    s.updateScore(&s.score, 3.5);

    s.print(s.name, s.age, s.score);

    return 0;
}