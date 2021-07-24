#pragma once

class HinhChuNhat
{
public:
	HinhChuNhat();
	HinhChuNhat(float chieuDai, float chieuRong);
	void setChieuDai(float chieuDai);
	void setChieuRong(float chieuRong);
	float tinhChuVi();
	float tinhDienTich();

private:
	float chieuDai;
	float chieuRong;
};
