#define _CRT_SECURE_NO_WARNINGS 1
#include "Contact.h"

void InitContact(Contact* pc) {
	pc->count = 0;
	memset(pc->data, 0, sizeof(pc->data));
}

void AddContact(Contact* pc) {
	assert(pc);
	char name[MAX_NAME] = { 0 };
	int age = 0;
	char sex[MAX_SEX] = {0};
	char tele[MAX_TELE] = { 0 };
	char addr[MAX_TELE] = { 0 };
	PeoInfo p = { 0 };
	if (pc->count==MAX)
	{
		printf("ͨѶ¼�������������\n");
		return;
	}
	printf("����������:>");
	scanf("%s", pc->data[pc->count].name);

	printf("����������:>");
	scanf("%d", &(pc->data[pc->count].age));

	printf("�������Ա�:>");
	scanf("%s", pc->data[pc->count].sex);

	printf("��������ϵ��ʽ:>");
	scanf("%s", pc->data[pc->count].tele);

	printf("�������ַ:>");
	scanf("%s", pc->data[pc->count].addr);

	pc->count++;
	return;
}

void ShowContact(Contact* pc) {
	assert(pc);
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n",
		"����",
		"����",
		"�Ա�",
		"��ϵ��ʽ",
		"��ַ");
	for (int i = 0; i < pc->count; i++)
	{
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-30s\n",
			pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}

static int findByName(Contact * pc, char name[]) {
	assert(pc);
	for (int i = 0; i < pc->count; i++)
	{
		if (0 == strcmp(pc->data[i].name, name)) {
			return i;
		}
	}
	return -1;
}


void DelContact(Contact* pc) {
	assert(pc);
	if (pc->count==0)
	{
		printf("ͨѶ¼Ϊ�գ��޷�ɾ��\n");
		return;
	}
	char name[20] = { 0 };
	printf("������Ҫɾ�����˵�����:>");
	scanf("%s", &name);
	int pos = findByName(pc, name);
	if (pos==-1)
	{
		printf("û���ҵ�����ϵ�ˣ�ɾ��ʧ��\n");
		return;
	}
	for (int i = pos; i < pc->count-1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->count--;
}

void SearchContact(Contact* pc) {
	assert(pc);
	char name[20] = { 0 };
	printf("������Ҫ���ҵ���ϵ������:>");
	scanf("%s", name);
	int pos = findByName(pc, name);
	if (pos==-1)
	{
		printf("ͨѶ¼��û�д���\n");
		return;
	}
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n",
		"����",
		"����",
		"�Ա�",
		"��ϵ��ʽ",
		"��ַ");
	printf("%-20s\t%-5d\t%-5s\t%-12s\t%-30s\n",
		pc->data[pos].name,
		pc->data[pos].age,
		pc->data[pos].sex,
		pc->data[pos].tele,
		pc->data[pos].addr);
}

void ModifyContact(Contact* pc) {
	assert(pc);
	char name[20] = { 0 };
	printf("������Ҫ�޸ĵ���ϵ������:>");
	scanf("%s", name);
	int pos = findByName(pc, name);
	if (pos == -1)
	{
		printf("ͨѶ¼��û�д���\n");
		return;
	}

	printf("����������:>");
	scanf("%s", pc->data[pos].name);

	printf("����������:>");
	scanf("%d", &(pc->data[pos].age));

	printf("�������Ա�:>");
	scanf("%s", pc->data[pos].sex);

	printf("��������ϵ��ʽ:>");
	scanf("%s", pc->data[pos].tele);

	printf("�������ַ:>");
	scanf("%s", pc->data[pos].addr);
	printf("�޸ĳɹ���\n");
}

int cmp_by_name(const void* e1, const void* e2) {
	//return ((PeoInfo*)e1)->name - ((PeoInfo*)e2)->name; ����,name�������׵�ַ
	return strcmp(((PeoInfo*)e1)->name,((PeoInfo*)e2)->name);
}

void SortContact(Contact* pc) {
	assert(pc);
	qsort(pc->data, pc->count, sizeof(PeoInfo), cmp_by_name);
	printf("����ɹ�!\n");
}