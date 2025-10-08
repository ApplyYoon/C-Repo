#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    char name[20];
    int age;
    double score;
    struct Node *next;   // 다음 노드를 가리키는 포인터
} Node;

// 새 노드 생성 함수
Node* createNode(const char *name, int age, double score) {
    Node *newNode = malloc(sizeof(Node));
    if (newNode == NULL) {
        fprintf(stderr, "메모리 할당 실패\n");
        exit(1);
    }

    strncpy(newNode->name, name, sizeof(newNode->name) - 1);
    newNode->name[sizeof(newNode->name) - 1] = '\0';
    newNode->age = age;
    newNode->score = score;
    newNode->next = NULL;
    return newNode;
}

// 리스트의 끝에 새 노드 추가
void appendNode(Node **head, const char *name, int age, double score) {
    Node *newNode = createNode(name, age, score);

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    Node *cur = *head;
    while (cur->next != NULL)
        cur = cur->next;

    cur->next = newNode;
}

// 리스트 출력
void printList(const Node *head) {
    printf("\n=== 학생 목록 ===\n");
    const Node *cur = head;
    while (cur != NULL) {
        printf("이름: %-10s | 나이: %2d | 점수: %.1f\n",
               cur->name, cur->age, cur->score);
        cur = cur->next;
    }
}

// 메모리 해제
void freeList(Node *head) {
    Node *cur = head;
    while (cur != NULL) {
        Node *next = cur->next;
        free(cur);
        cur = next;
    }
}

int main(void) {
    Node *head = NULL;

    appendNode(&head, "Alice", 18, 95.5);
    appendNode(&head, "Bob", 19, 88.0);
    appendNode(&head, "Charlie", 20, 92.3);

    printList(head);

    freeList(head);
    head = NULL;

    return 0;
}