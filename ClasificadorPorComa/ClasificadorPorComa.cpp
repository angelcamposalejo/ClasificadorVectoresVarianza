#include "stdafx.h"  //________________________________________ ClasificadorPorComa.cpp
#include "ClasificadorPorComa.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	ClasificadorPorComa app;
	return app.BeginDialog(IDI_ClasificadorPorComa, hInstance);
}

void ClasificadorPorComa::Window_Open(Win::Event& e)
{
}

void ClasificadorPorComa::btMinimo_Click(Win::Event& e)
{
	valarray<double>inputData;
	Sys::Convert::ToVector(tbxEntrada.Text, inputData);
	tbxSalida.DoubleValue = inputData.min();
}

void ClasificadorPorComa::btMaximo_Click(Win::Event& e)
{
	valarray<double>inputData;
	Sys::Convert::ToVector(tbxEntrada.Text, inputData);
	tbxSalida.DoubleValue = inputData.max();
}

void ClasificadorPorComa::btPositivo_Click(Win::Event& e)
{
	valarray<double>inputData;
	vector<double> output;
	Sys::Convert::ToVector(tbxEntrada.Text, inputData);
	const int size = inputData.size();
	for (int i = 0; i < size; i++)
	{
		if (inputData[i] >= 0)
		{
			output.push_back(inputData[i]);
		}
	}
	wstring texto;
	Sys::Convert::ToString(output, texto);
	tbxSalida.Text = texto;
}

void ClasificadorPorComa::btNegativo_Click(Win::Event& e)
{
	valarray<double>inputData;
	vector<double> output;
	Sys::Convert::ToVector(tbxEntrada.Text, inputData);
	const int size = inputData.size();
	for (int i = 0; i < size; i++)
	{
		if (inputData[i] < 0)
		{
			output.push_back(inputData[i]);
		}
	}
	wstring texto;
	Sys::Convert::ToString(output, texto);
	tbxSalida.Text = texto;
}

void ClasificadorPorComa::btSuma_Click(Win::Event& e)
{
	valarray<double>inputData;
	Sys::Convert::ToVector(tbxEntrada.Text, inputData);
	tbxSalida.DoubleValue = inputData.sum();
}

void ClasificadorPorComa::btPromedio_Click(Win::Event& e)
{
	valarray<double>inputData;
	Sys::Convert::ToVector(tbxEntrada.Text, inputData);
	double suma = inputData.sum();
	double size = inputData.size();
	tbxSalida.DoubleValue = suma / size;
}

void ClasificadorPorComa::btVarianza_Click(Win::Event& e)
{
	valarray<double>inputData;
	Sys::Convert::ToVector(tbxEntrada.Text, inputData);
	double suma = 0.0;
	double suma2 = 0.0;
	double varianza=0.0;
	double media = inputData.sum()/inputData.size();
	for (int i = 0; i < inputData.size(); i++)
	{
		varianza += ((inputData[i] - (media))*(inputData[i] - (media)));
	}
	int n = inputData.size();
	varianza = varianza/(n-1);
	tbxSalida.DoubleValue = varianza;
}

void ClasificadorPorComa::btLimpiar_Click(Win::Event& e)
{
	tbxEntrada.Text = L"";
	tbxSalida.Text = L"";
}

