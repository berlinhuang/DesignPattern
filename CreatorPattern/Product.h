#ifndef _PRODUCT_H_
#define _PRODUCT_H_
//�����ࣺ���д����⺯�������Ϊ
// 1.�����಻����������δʵ�ֵķ������������԰�����Ա������ֻ����Ϊ����
// 2.�����಻��ֱ��ʵ�����������Զ���ָ��
// 3.���������ʵ��δʵ�ֵķ���
// 4.���������������������غͳ䵱ȫ�ֱ����Ľ�ɫ
class Product
{
private:

protected:
	Product();
public:
	virtual ~Product() = 0;//���麯�� �������б�����д
};

/***************************************************************/
class  ConcreateProduct:public Product
{
private:

protected:

public:
	 ConcreateProduct();
	~ ConcreateProduct();


};






#endif