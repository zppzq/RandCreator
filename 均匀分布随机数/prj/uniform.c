/*
 *
 *参考:一维均匀分布随机数序列的产生方法:http://wenku.baidu.com/view/b0bded290066f5335a81216e
 *     <<数字信号处理C语言程序集>>1.1 均匀分布的随机数
 */
#include "uniform.h"

/*
 *功能:产生(a, b)区间上均匀分布的随机数
 *参数:a    给定区间的下限
 *     b    给定区间的上限
 *     seed 随机数种子的指针
 *返回:得到的随机数
 
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
 *以上函数也可以这么写,结果一致
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
