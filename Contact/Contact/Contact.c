#define _CRT_SECURE_NO_WARNINGS 1
#include "Contact.h"

//静态版本
//void InitContact(Contact* pc) {
//	pc->count = 0;
//	memset(pc->data, 0, sizeof(pc->data));
//}

//动态版本
int InitContact(Contact* pc) {
	 pc->count = 0;
	 pc->data = (PeoInfo*) calloc(DEFAULT_SZ, sizeof(PeoInfo));
	 if (pc->data == NULL)
	 {
		 printf("InitContact::%s\n", strerror(errno));
		 return 1;
	 }

	pc->capacity = DEFAULT_SZ;
	return 0;
}
void CheckCapacity(Contact* pc) {
	if (pc->count == pc->capacity)
	{
		PeoInfo* ptr = (PeoInfo*)realloc(pc->data, (pc->capacity + INC_SZ) * sizeof(PeoInfo));
		if (ptr == NULL)
		{
			printf("AddContact::%s\n", strerror(errno));
		}
		else {
			pc->data = ptr;
			pc->capacity += INC_SZ;
			//不能free ptr，因为此时pc->data就是ptr，会销毁掉还需要用的数据
			/*free(ptr);
			ptr = NULL;*/
			printf("扩容成功\n");
		}
	}
	
	
}

void AddContact(Contact* pc) {
	assert(pc);

	CheckCapacity(pc);
	
	printf("请输入姓名:>");
	scanf("%s", pc->data[pc->count].name);

	printf("请输入年龄:>");
	scanf("%d", &(pc->data[pc->count].age));

	printf("请输入性别:>");
	scanf("%s", pc->data[pc->count].sex);

	printf("请输入联系方式:>");
	scanf("%s", pc->data[pc->count].tele);

	printf("请输入地址:>");
	scanf("%s", pc->data[pc->count].addr);

	pc->count++;
	return;
}

void ShowContact(Contact* pc) {
	assert(pc);
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n",
		"姓名",
		"年龄",
		"性别",
		"联系方式",
		"地址");
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
		printf("通讯录为空，无法删除\n");
		return;
	}
	char name[20] = { 0 };
	printf("请输入要删除的人的姓名:>");
	scanf("%s", &name);
	int pos = findByName(pc, name);
	if (pos==-1)
	{
		printf("没有找到该联系人，删除失败\n");
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
	printf("请输入要查找的联系人姓名:>");
	scanf("%s", name);
	int pos = findByName(pc, name);
	if (pos==-1)
	{
		printf("通讯录中没有此人\n");
		return;
	}
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n",
		"姓名",
		"年龄",
		"性别",
		"联系方式",
		"地址");
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
	printf("请输入要修改的联系人姓名:>");
	scanf("%s", name);
	int pos = findByName(pc, name);
	if (pos == -1)
	{
		printf("通讯录中没有此人\n");
		return;
	}

	printf("请输入姓名:>");
	scanf("%s", pc->data[pos].name);

	printf("请输入年龄:>");
	scanf("%d", &(pc->data[pos].age));

	printf("请输入性别:>");
	scanf("%s", pc->data[pos].sex);

	printf("请输入联系方式:>");
	scanf("%s", pc->data[pos].tele);

	printf("请输入地址:>");
	scanf("%s", pc->data[pos].addr);
	printf("修改成功！\n");
}

int cmp_by_name(const void* e1, const void* e2) {
	//return ((PeoInfo*)e1)->name - ((PeoInfo*)e2)->name; 错误,name是数组首地址
	return strcmp(((PeoInfo*)e1)->name,((PeoInfo*)e2)->name);
}

void SortContact(Contact* pc) {
	assert(pc);
	qsort(pc->data, pc->count, sizeof(PeoInfo), cmp_by_name);
	printf("排序成功!\n");
}


void DestroyContact(Contact* pc) {
	free(pc->data);
	pc->data = NULL;
	return;
}