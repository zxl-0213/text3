#include"SeqList.h"
//≤‚ ‘Õ∑Œ≤µƒ≤Â»Î…æ≥˝ 
void TestSeqList1()
{
	SL s;
	SeqListInit(&s);
	SeqListPushBack(&s,1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPrint(&s);

	SeqListPopBack(&s);
	SeqListPopBack(&s);
	SeqListPrint(&s);

	SeqListPushFront(&s,4);
	SeqListPushFront(&s, 5);
	SeqListPushFront(&s, 6);
	SeqListPrint(&s);

	SeqListPopFront(&s);
	SeqListPopFront(&s);
	SeqListPrint(&s);

	SeqListInsert(&s, 1, 9);
	SeqListInsert(&s, 0, 8);
	SeqListPrint(&s);


	SeqListErase(&s, 2);
	SeqListPrint(&s);

	int pos = SeqListFind(&s, 4);
	printf("%d\n",pos);

	
	SeqListDestory(&s);

}

int main()
{
	TestSeqList1();

	return 0;
}