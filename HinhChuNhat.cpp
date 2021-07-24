#include "HinhChuNhat.h"

HinhChuNhat::HinhChuNhat()
{
	chieuDai = 1;
	chieuRong = 0;
}

HinhChuNhat::HinhChuNhat(float chieuDai, float chieuRong)
{
	this->chieuDai = chieuDai;
	this->chieuRong = chieuRong;
}

void HinhChuNhat::setChieuDai(float chieuDai)
{
	this->chieuDai = chieuDai;
}

void HinhChuNhat::setChieuRong(float chieuRong)
{
	this->chieuRong = chieuRong;
}

float HinhChuNhat::tinhChuVi()
{
	return (chieuDai + chieuRong) * 2;
}

float HinhChuNhat::tinhDienTich()
{
	return chieuDai * chieuRong;
}
