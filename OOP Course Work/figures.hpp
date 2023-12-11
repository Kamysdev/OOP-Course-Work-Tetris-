#pragma once
#include <utility>

enum figure_type{I, T, S, Z, L, J, O};

class Figures
{
public:

	Figures();

protected:
	std::pair<int, int> vector2;
	void drawFigure(int figure_type, std::pair<int, int> vector2);
};

class I_figure : public Figures
{

};

class T_figure : public Figures
{

};

class S_figure : public Figures
{


};

class Z_figure : public Figures
{

};

class L_figure : public Figures
{

};

class J_figure : public Figures
{

};

class O_figure : public Figures
{

};
