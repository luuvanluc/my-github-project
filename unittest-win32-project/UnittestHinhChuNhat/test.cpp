#include "pch.h"
#include "HinhChuNhat.h"

TEST(TestCaseName, TestName) {
	EXPECT_EQ(1, 1);
	EXPECT_TRUE(true);
}

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