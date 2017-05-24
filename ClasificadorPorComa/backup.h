#pragma once  //______________________________________ ClasificadorPorComa.h  
#include "Resource.h"
class ClasificadorPorComa: public Win::Dialog
{
public:
	ClasificadorPorComa()
	{
	}
	~ClasificadorPorComa()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Label lb1;
	Win::Textbox tbxEntrada;
	Win::Button btMinimo;
	Win::Button btMaximo;
	Win::Button btPositivo;
	Win::Button btNegativo;
	Win::Button btSuma;
	Win::Button btPromedio;
	Win::Button btVarianza;
	Win::Label lb2;
	Win::Textbox tbxSalida;
	Win::Button btLimpiar;
protected:
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(721);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(194);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"ClasificadorPorComa";
		lb1.Create(NULL, L"Escribe algunos números separados por coma", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 9, 7, 301, 25, hWnd, 1000);
		tbxEntrada.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 9, 37, 600, 25, hWnd, 1001);
		btMinimo.Create(NULL, L"Minimo", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 11, 76, 97, 28, hWnd, 1002);
		btMaximo.Create(NULL, L"Maximo", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 115, 76, 96, 28, hWnd, 1003);
		btPositivo.Create(NULL, L"Positivo", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 217, 76, 96, 28, hWnd, 1004);
		btNegativo.Create(NULL, L"Negativo", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 319, 76, 95, 28, hWnd, 1005);
		btSuma.Create(NULL, L"Suma", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 418, 76, 95, 28, hWnd, 1006);
		btPromedio.Create(NULL, L"Promedio", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 517, 76, 94, 28, hWnd, 1007);
		btVarianza.Create(NULL, L"Varianza", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 619, 76, 95, 28, hWnd, 1008);
		lb2.Create(NULL, L"Salida", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 13, 123, 96, 25, hWnd, 1009);
		tbxSalida.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_AUTOVSCROLL | ES_MULTILINE | ES_READONLY | ES_LEFT | ES_WINNORMALCASE, 13, 154, 595, 33, hWnd, 1010);
		btLimpiar.Create(NULL, L"Limpiar", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 619, 155, 95, 28, hWnd, 1011);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		lb1.Font = fontArial014A;
		tbxEntrada.Font = fontArial014A;
		btMinimo.Font = fontArial014A;
		btMaximo.Font = fontArial014A;
		btPositivo.Font = fontArial014A;
		btNegativo.Font = fontArial014A;
		btSuma.Font = fontArial014A;
		btPromedio.Font = fontArial014A;
		btVarianza.Font = fontArial014A;
		lb2.Font = fontArial014A;
		tbxSalida.Font = fontArial014A;
		btLimpiar.Font = fontArial014A;
	}
	//_________________________________________________
	void btMinimo_Click(Win::Event& e);
	void btMaximo_Click(Win::Event& e);
	void btPositivo_Click(Win::Event& e);
	void btNegativo_Click(Win::Event& e);
	void btSuma_Click(Win::Event& e);
	void btPromedio_Click(Win::Event& e);
	void btVarianza_Click(Win::Event& e);
	void btLimpiar_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btMinimo.IsEvent(e, BN_CLICKED)) {btMinimo_Click(e); return true;}
		if (btMaximo.IsEvent(e, BN_CLICKED)) {btMaximo_Click(e); return true;}
		if (btPositivo.IsEvent(e, BN_CLICKED)) {btPositivo_Click(e); return true;}
		if (btNegativo.IsEvent(e, BN_CLICKED)) {btNegativo_Click(e); return true;}
		if (btSuma.IsEvent(e, BN_CLICKED)) {btSuma_Click(e); return true;}
		if (btPromedio.IsEvent(e, BN_CLICKED)) {btPromedio_Click(e); return true;}
		if (btVarianza.IsEvent(e, BN_CLICKED)) {btVarianza_Click(e); return true;}
		if (btLimpiar.IsEvent(e, BN_CLICKED)) {btLimpiar_Click(e); return true;}
		return false;
	}
};
