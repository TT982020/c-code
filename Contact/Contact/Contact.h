#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include<stdio.h>
#include <assert.h>
#include <stdlib.h>
#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30
typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_TELE];
}PeoInfo;

typedef struct Contact {
	PeoInfo data[MAX];
	int count;
}Contact;

void InitContact(Contact* pc);

void AddContact(Contact* pc);

void ShowContact(Contact* pc);

void DelContact(Contact* pc);

void SearchContact(Contact* pc);

void ModifyContact(Contact* pc);

void SortContact(Contact* pc);

