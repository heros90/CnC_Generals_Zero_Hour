/*
**	Command & Conquer Generals(tm)
**	Copyright 2025 Electronic Arts Inc.
**
**	This program is free software: you can redistribute it and/or modify
**	it under the terms of the GNU General Public License as published by
**	the Free Software Foundation, either version 3 of the License, or
**	(at your option) any later version.
**
**	This program is distributed in the hope that it will be useful,
**	but WITHOUT ANY WARRANTY; without even the implied warranty of
**	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
**	GNU General Public License for more details.
**
**	You should have received a copy of the GNU General Public License
**	along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

// MyToolBar.h
// Class to do custom toolbar.
// Author: John Ahlquist, April 2001

#pragma once

#ifndef MYTOOLBAR_H
#define MYTOOLBAR_H



/*************************************************************************
**                             CellSizeToolBar
***************************************************************************/
class CellSizeToolBar : public CDialogBar
{
protected:
	static CellSizeToolBar* m_staticThis;
	CSliderCtrl m_cellSlider;

protected:
	afx_msg void OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	virtual LRESULT WindowProc( UINT message, WPARAM wParam, LPARAM lParam );
	DECLARE_MESSAGE_MAP()

public:
	~CellSizeToolBar(void);
	void SetupSlider(void);
	static void CellSizeChanged(Int cellSize);

};



#endif //MYTOOLBAR_H
