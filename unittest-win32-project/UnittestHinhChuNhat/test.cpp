#include "pch.h"
#define  private public
#define  protected public
#include "HinhChuNhat.h"

TEST(HinhChuNhat, tinhDienTich)
{
	HinhChuNhat hcn;
	hcn.setChieuDai(3);
	hcn.setChieuRong(2);
	float dienTich = hcn.tinhDienTich();
	EXPECT_FLOAT_EQ(dienTich, 6);
}

TEST(HinhChuNhat, tinhChuVi)
{
	HinhChuNhat hcn;
	hcn.setChieuDai(3);
	hcn.setChieuRong(2);
	float dienTich = hcn.tinhChuVi();
	EXPECT_FLOAT_EQ(dienTich, 10);
}

TEST(HinhChuNhat, Contructor1)
{
	HinhChuNhat hcn;
	EXPECT_FLOAT_EQ(hcn.chieuDai, 0);
	EXPECT_FLOAT_EQ(hcn.chieuRong, 0);
}

TEST(HinhChuNhat, Contructor2)
{
	HinhChuNhat hcn(2,1);
	EXPECT_FLOAT_EQ(hcn.chieuDai, 2);
	EXPECT_FLOAT_EQ(hcn.chieuRong, 1);
}