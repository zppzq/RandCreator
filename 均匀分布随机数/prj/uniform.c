/*
 *
 *�ο�:һά���ȷֲ���������еĲ�������:http://wenku.baidu.com/view/b0bded290066f5335a81216e
 *     <<�����źŴ���C���Գ���>>1.1 ���ȷֲ��������
 */
#include "uniform.h"

/*
 *����:����(a, b)�����Ͼ��ȷֲ��������
 *����:a    �������������
 *     b    �������������
 *     seed ��������ӵ�ָ��
 *����:�õ��������
 
double uniform(double a, double b, long int *seed)
{
	double t;
	*seed = 2045 * (*seed) + 1;
	*seed = *seed - (*seed/1048576) * 1048576;
	t = (*seed)/1048576.0;
	t = a + (b - a) * t;
	return t;
}*/

/*
 *���Ϻ���Ҳ������ôд,���һ��
 */
double uniform(double a, double b, long int *seed)
{
	double t;
	*seed = 2045 * (*seed) + 1;
	*seed =(*seed%1048576);
	t = (*seed)/1048576.0;
	t = a + (b - a) * t;
	return t;
}
