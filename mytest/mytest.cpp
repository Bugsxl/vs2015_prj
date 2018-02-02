// mytest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
//#include <stdlib.h>
#include <string.h>
//#include "assert.h"
#include "stdio.h"
#include "math.h"
#define N 10000
#define CAL 5

double testln(int x)
{
	double y = exp(-1.0 / 2.0 * x*x);
	return y;
}

void calc()
{
	double y,ans=0.0;
	int x,i;
	for (i = 0; i < N; i++)
	{
		y = ((double)testln(i) + (double)testln(i + 1)) * 1.0 / 2.0;
		ans += y;
	}
	printf("ans=%lf\n",ans);
}
int main(void)
{
	calc();
	printf("%lf",exp(-1.0/2.0 * 10));
	return 0;
}


/*
void stdline(int *h, int n)
{
	int i;
	for (i = 1; i <= n; i++)
		*(h + i - 1) = i;
}
void outline(int *h, int n, int call)
{
	int *p, total, callnum;
	total = 0;
	callnum = 0;
	p = h;
	while (total < n)
	{
		if (*p != 0)
			callnum++;
		if (callnum == call)
		{
			printf("%d ", *p);
			total++;
			if (total == n)
			{
				*h = *p;
				return;
			}
			callnum = 0;
			*p = 0;
		}
		p++;
		if (p > h + n - 1)
		{
			p = h;
		}
	}
}
void main()
{
	int a[N];
	stdline(a, N);
	outline(a, N, CAL);
	printf("最后留下来的是%d号", *a);
}
*/
/*
typedef struct node
{
	int data;
	node* next;
}node;

void createList(node*& head, node*& tail, int n)
{
	if (n < 1)
	{
		head = NULL;
		return;
	}
	head = new node();
	head->data = 1;
	head->next = NULL;
	node* p = head;
	for (int i = 2; i < n + 1; i++)
	{
		p->next = new node();
		p = p->next;
		p->data = i;
		p->next = NULL;
	}
	tail = p;
	p->next = head;
}
void Print(node*& head)
{
	node* p = head;
	while (p&&p->next != head)
	{
		printf("%d ", p->data);
		p = p->next;
	}
	if (p)
	{
		printf("%d\n", p->data);
	}
}

void CountPrint(node*& head, node*& tail, int m)
{
	node* cur = head;
	node* pre = tail;
	int cnt = m - 1;
	while (cur&&cur != cur->next)
	{
		if (cnt)
		{
			cnt--;
			pre = cur;
			cur = cur->next;
		}
		else
		{
			pre->next = cur->next;
			printf("%d ", cur->data);
			delete cur;
			cur = pre->next;
			cnt = m - 1;
		}
	}
	if (cur)
	{
		printf("%d ", cur->data);
		delete cur;
		head = tail = NULL;
	}
	printf("\n");
}
int main()
{
	node* head;
	node* tail;
	int m;
	int n;
	scanf("%d", &n);
	scanf("%d", &m);
	createList(head, tail, n);
	Print(head);
	CountPrint(head, tail, m);
	//system("pause");
	return 0;
}*/












/*
int test2()
{
	int num = 0;
	for (int m = 0; m <= 100; m += 5)
	{
		num += (m + 2) / 2;
	}
	return num;
}

int test1()
{
	int num = 0;
	int x, y, z;
	for (x = 0; x <= 100; x++)
		for (y = 0; y <= 50; y++)
			for (z = 0; z <= 20; z++)
				if ((x + 2 * y + 5 * z) == 100)
					num++;
	return num;

}

//#define DEBUG
int main()
{
	int num;
	int result;
#ifdef DEBUG
	num=test1();
#endif
	num = test2();
	result = test2();
	assert(result == test1());
	printf("num =%d", num);
	return 0;
}
*/

/*字符串查找并替换*/
/*
char *mystrstr(char *s1, char *s2)
{
	int n;
	if (*s2)
	{
		while (*s1)
		{
			for (n = 0; *(s1 + n) == *(s2 + n); n++)
			{
				if (!*(s2 + n + 1))
					return (char*)s1;
			}
			s1++;
		}
		return NULL;
	}
	else
	{
		return (char*)s1;
	}
}*/
/*
char *mystrstr(char *s1, char *s2)
{
	int n;
	if (*s2)
	{
		while (*s1)
		{
			for (n = 0; *(s1 + n) == *(s2 + n); n++)
			{
				if (!*(s2 + n + 1))
				{
					return (char*)s1;
				}
			}
			s1++;
		}
		return NULL;
	}
	else
	{
		return (char*)s1;
	}
}

void find_and_replace(char *pSrc, char *pDst, char *pOldString, char *pNewString)
{
	char *pInput = pSrc,
		*pOutput = pDst,
		*p = NULL;
	int nOldStringLen = strlen(pOldString);
	int nNewStringLen = strlen(pNewString);
	int nLen;
	p = strstr(pInput, pOldString);
	if (p)
	{
		while (p)
		{
			//printf("%d\n", p);
			nLen = (int)(p - pInput);
			memcpy(pOutput, pInput, nLen);
			memcpy(pOutput + nLen, pNewString, nNewStringLen);
			pInput = p + nOldStringLen;
			pOutput = pOutput + nLen + nNewStringLen;
			p = strstr(pInput, pOldString);
		}
		strcpy(pOutput, pInput);
	}
	else // 如果被替换串不在源字符串中出现，则返回源字符串  
	{
		strcpy(pDst, pSrc);
	}

}
int main(int argc, char argv[])
{
	char src[] = "abcdesdabsd";
	char dst[100];

	find_and_replace(src, dst, "sd", "ILOVEYOU");
	printf("%s\n", dst);

	return 0;
}
*/

//void test1(char* pSrc,char* pDst,char* pOldString)


/*
int Next_Minute(int *nyear, int *nmonth, int *ndate, int *nhour, int *nmin, int *nsec)
{
	int ndays;
	switch (*nmonth)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		ndays = 31;
		break;
	case 2:
		if (*nyear % 400 == 0 || (*nyear % 100 != 0 && *nyear % 4 == 0))
		{
			ndays = 29;
		}
		else
		{
			ndays = 28;
		}

		break;
	default:
		ndays = 30;
		break;
	}
	
	if (*ndate > ndays)
	{
		return -1 ;
	}
	
	(*nsec)++;
	if (*nsec >= 60)
	{
		*nsec = 0;
		(*nmin)++;
		if (*nmin >= 60)
		{
			*nmin = 0;
			(*nhour)++;
			if (*nhour >= 24)
			{
				*nhour = 0;
				(*ndate)++;
				if (*ndate > ndays)
				{
					*ndate = 1;
					(*nmonth)++;
					if (*nmonth > 12)
					{
						*nmonth = 1;
						(*nyear)++;
					}
				}
			}
		}
	}
}

int main(int argc, int argv[])
{	
	int ret = 0;
	int nYear = 2012, nMonth = 2, nDate = 30, nHour = 59, nMinute = 59, nSecond = 59;
	ret=Next_Minute(&nYear, &nMonth, &nDate, &nHour, &nMinute, &nSecond);
	if (ret == 0)
		printf("The result:%d-%d-%d %d:%d:%d", nYear, nMonth, nDate, nHour, nMinute, nSecond);
	else
		printf("The date is wrong");
}*/

/*int main()
{
	char* src = "hello,world";
	int len = strlen(src);
	char* dest = (char*)malloc((len + 1) * sizeof(char));
	printf("%d\n", len);
	
	char* d = dest;
	char* s = &src[len-1];

	while (len-- != 0)
		*d++ = *s--;
	*d = '\0';
	printf("%s\n", dest);
	free(dest);
	return 0;
}*/
/*
int fun(char *p)
{
	if (p == NULL)
		return -1;
	else
	{
		int length = 0;
		int judge = 1;
		length = strlen(p);
		for (int i = 0; i < length / 2; i++)
		{
			if (p[i] != p[length - 1 - i])
				judge = 0;
			break;

		}
		if (judge == 0)
			return 0;
		else
			return 1;
	}
}
*/


