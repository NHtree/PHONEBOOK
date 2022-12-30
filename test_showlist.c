#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "double_linked_list.h"
#include "phonebook.h"

// 내 파일의 function을 test 하기 위한 main 함수 나중에는 test파일로 이동
int main(void) {
    stNode* selected_node;
    stList list = {0};   
    stNode member1 = {10001, (int)1, "KIM CheolMin", "010-5324-2342", "TEAM", 0, 0};
    stNode member2 = {10002, (int)2, "NAM HyeMin", "010-3333-2222", "SECURITY", 0, 1};
    stNode member3 = {10003, (int)3, "YANG ChangMin", "010-5879-8156", "VEHICLE", 0 ,1};
    stNode member4 = {10004, (int)4, "YU Mi", "010-8488-9323", "VEHICLE", 0, 0};
    stNode member5 = {10005, (int)5, "YI TaeYeob", "032-4251-0548", "DOMAIN", 0, 0};
    stNode member6 = {10006, (int)6, "JEONG SeungYeon", "02-257-2254", "SECURITY", 0, 1};
    stNode member7 = {10007, (int)7, "JEONG InJae", "010-0587-3525", "DOMAIN", 0 ,1};
    stNode member8 = {10008, (int)8, "CHOI EunBeom", "010-8759-7452", "VEHICLE", 0, 0};

    list.sort_needs=1;   // 디폴트는 정렬 필요로 설정

    InitializeList(&list);
    
    printf("****** START *****\n");

// 노드 추가
    printf("****** Added 8 nodes *****\n");
    AddtoTailNode(&list, &member1);
    AddtoTailNode(&list, &member2);
    AddtoTailNode(&list, &member3);
    AddtoTailNode(&list, &member4);
    AddtoTailNode(&list, &member5);
    AddtoTailNode(&list, &member6);
    AddtoTailNode(&list, &member7);
    AddtoTailNode(&list, &member8);

    //PrintList(&list);
    
// 5. 전체 리스트를 이름 알파벳 순서로 정렬하여 보여준다    
// 8. 즐겨찾기 등록한 사람들은 가장 위로 따로 보여준다.
    selected_node = ShowList(&list);   
       
    printf("\n(RET) selected node is %s\n", selected_node->name);
// 서브메뉴 콜은 메인 메뉴에서 실행 필요

    DeleteNode(&list, 5);    // index가 5번인 노드를 삭제
    printf("\n\n");
    PrintList(&list);
    
}
