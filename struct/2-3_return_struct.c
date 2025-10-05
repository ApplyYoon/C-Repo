#include <stdio.h>
#include <string.h>

typedef struct {
    char name[20];
    int age;
    double score;
} Student;

// 구조체를 반환하는 함수
Student createStudent(const char *name, int age, double score) {
    Student s;

    strncpy(s.name, name, sizeof(s.name) - 1);
    s.name[sizeof(s.name) - 1] = '\0';
    s.age = age;
    s.score = score;

    return s; // 구조체 전체가 복사되어 반환됨
}

// 구조체 출력 함수
void printStudent(const Student *s) {
    printf("이름: %s, 나이: %d, 점수: %.1f\n",
           s->name, s->age, s->score);
}

int main(void) {
    Student s1 = createStudent("Alice", 18, 95.5);
    Student s2 = createStudent("Bob", 19, 88.0);

    printStudent(&s1);
    printStudent(&s2);

    return 0;
}