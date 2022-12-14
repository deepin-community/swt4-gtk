/*******************************************************************************
 * Copyright (c) 2000, 2021 IBM Corporation and others.
 *
 * This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License 2.0
 * which accompanies this distribution, and is available at
 * https://www.eclipse.org/legal/epl-2.0/
 *
 * SPDX-License-Identifier: EPL-2.0
 *
 * Contributors:
 *    IBM Corporation - initial API and implementation
 *******************************************************************************/

/* Note: This file was auto-generated by org.eclipse.swt.tools.internal.JNIGenerator */
/* DO NOT EDIT - your changes will be lost. */

#include "swt.h"
#include "gdip_stats.h"

#ifdef NATIVE_STATS

char * Gdip_nativeFunctionNames[] = {
	"BitmapData_1delete",
	"BitmapData_1new",
	"Bitmap_1GetHBITMAP",
	"Bitmap_1GetHICON",
	"Bitmap_1LockBits",
	"Bitmap_1UnlockBits",
	"Bitmap_1delete",
	"Bitmap_1new__IIIIJ",
	"Bitmap_1new__J",
	"Bitmap_1new__JJ",
	"Bitmap_1new___3CZ",
	"Brush_1Clone",
	"Brush_1GetType",
	"ColorPalette_1sizeof",
	"FontFamily_1GetFamilyName",
	"FontFamily_1IsAvailable",
	"FontFamily_1delete",
	"FontFamily_1new__",
	"FontFamily_1new___3CJ",
	"Font_1GetFamily",
	"Font_1GetLogFontW",
	"Font_1GetSize",
	"Font_1GetStyle",
	"Font_1IsAvailable",
	"Font_1delete",
	"Font_1new__JFII",
	"Font_1new__JJ",
	"Font_1new___3CFIIJ",
	"GdiplusShutdown",
	"GdiplusStartup",
	"GdiplusStartupInput_1sizeof",
	"GraphicsPath_1AddArc",
	"GraphicsPath_1AddBezier",
	"GraphicsPath_1AddLine",
	"GraphicsPath_1AddPath",
	"GraphicsPath_1AddRectangle",
	"GraphicsPath_1AddString",
	"GraphicsPath_1Clone",
	"GraphicsPath_1CloseFigure",
	"GraphicsPath_1Flatten",
	"GraphicsPath_1GetBounds",
	"GraphicsPath_1GetLastPoint",
	"GraphicsPath_1GetPathPoints",
	"GraphicsPath_1GetPathTypes",
	"GraphicsPath_1GetPointCount",
	"GraphicsPath_1IsOutlineVisible",
	"GraphicsPath_1IsVisible",
	"GraphicsPath_1SetFillMode",
	"GraphicsPath_1StartFigure",
	"GraphicsPath_1Transform",
	"GraphicsPath_1delete",
	"GraphicsPath_1new__I",
	"GraphicsPath_1new___3I_3BII",
	"Graphics_1DrawArc",
	"Graphics_1DrawDriverString__JJIJJLorg_eclipse_swt_internal_gdip_PointF_2IJ",
	"Graphics_1DrawDriverString__JJIJJ_3FIJ",
	"Graphics_1DrawEllipse",
	"Graphics_1DrawImage__JJII",
	"Graphics_1DrawImage__JJLorg_eclipse_swt_internal_gdip_Rect_2IIIIIJJJ",
	"Graphics_1DrawLine",
	"Graphics_1DrawLines",
	"Graphics_1DrawPath",
	"Graphics_1DrawPolygon",
	"Graphics_1DrawRectangle",
	"Graphics_1DrawString__J_3CIJLorg_eclipse_swt_internal_gdip_PointF_2J",
	"Graphics_1DrawString__J_3CIJLorg_eclipse_swt_internal_gdip_PointF_2JJ",
	"Graphics_1FillEllipse",
	"Graphics_1FillPath",
	"Graphics_1FillPie",
	"Graphics_1FillPolygon",
	"Graphics_1FillRectangle",
	"Graphics_1Flush",
	"Graphics_1GetClip",
	"Graphics_1GetClipBounds__JLorg_eclipse_swt_internal_gdip_RectF_2",
	"Graphics_1GetClipBounds__JLorg_eclipse_swt_internal_gdip_Rect_2",
	"Graphics_1GetHDC",
	"Graphics_1GetInterpolationMode",
	"Graphics_1GetSmoothingMode",
	"Graphics_1GetTextRenderingHint",
	"Graphics_1GetTransform",
	"Graphics_1GetVisibleClipBounds",
	"Graphics_1MeasureDriverString",
	"Graphics_1MeasureString__J_3CIJLorg_eclipse_swt_internal_gdip_PointF_2JLorg_eclipse_swt_internal_gdip_RectF_2",
	"Graphics_1MeasureString__J_3CIJLorg_eclipse_swt_internal_gdip_PointF_2Lorg_eclipse_swt_internal_gdip_RectF_2",
	"Graphics_1ReleaseHDC",
	"Graphics_1ResetClip",
	"Graphics_1Restore",
	"Graphics_1Save",
	"Graphics_1ScaleTransform",
	"Graphics_1SetClip__JJI",
	"Graphics_1SetClip__JLorg_eclipse_swt_internal_gdip_Rect_2I",
	"Graphics_1SetClipPath__JJ",
	"Graphics_1SetClipPath__JJI",
	"Graphics_1SetCompositingQuality",
	"Graphics_1SetInterpolationMode",
	"Graphics_1SetPageUnit",
	"Graphics_1SetPixelOffsetMode",
	"Graphics_1SetSmoothingMode",
	"Graphics_1SetTextRenderingHint",
	"Graphics_1SetTransform",
	"Graphics_1TranslateTransform",
	"Graphics_1delete",
	"Graphics_1new",
	"HatchBrush_1delete",
	"HatchBrush_1new",
	"ImageAttributes_1SetColorMatrix",
	"ImageAttributes_1SetWrapMode",
	"ImageAttributes_1delete",
	"ImageAttributes_1new",
	"Image_1GetHeight",
	"Image_1GetLastStatus",
	"Image_1GetPalette",
	"Image_1GetPaletteSize",
	"Image_1GetPixelFormat",
	"Image_1GetWidth",
	"LinearGradientBrush_1ResetTransform",
	"LinearGradientBrush_1ScaleTransform",
	"LinearGradientBrush_1SetInterpolationColors",
	"LinearGradientBrush_1SetWrapMode",
	"LinearGradientBrush_1TranslateTransform",
	"LinearGradientBrush_1delete",
	"LinearGradientBrush_1new",
	"Matrix_1GetElements",
	"Matrix_1Invert",
	"Matrix_1IsIdentity",
	"Matrix_1Multiply",
	"Matrix_1SetElements",
	"Matrix_1TransformVectors",
	"Matrix_1delete",
	"Matrix_1new__",
	"Matrix_1new__FFFFFF",
	"MoveMemory__Lorg_eclipse_swt_internal_gdip_BitmapData_2J",
	"MoveMemory__Lorg_eclipse_swt_internal_gdip_ColorPalette_2JI",
	"PathGradientBrush_1SetCenterColor",
	"PathGradientBrush_1SetCenterPoint",
	"PathGradientBrush_1SetGraphicsPath",
	"PathGradientBrush_1SetInterpolationColors",
	"PathGradientBrush_1SetSurroundColors",
	"PathGradientBrush_1SetWrapMode",
	"PathGradientBrush_1delete",
	"PathGradientBrush_1new",
	"Pen_1GetBrush",
	"Pen_1SetBrush",
	"Pen_1SetDashOffset",
	"Pen_1SetDashPattern",
	"Pen_1SetDashStyle",
	"Pen_1SetLineCap",
	"Pen_1SetLineJoin",
	"Pen_1SetMiterLimit",
	"Pen_1SetWidth",
	"Pen_1delete",
	"Pen_1new",
	"Point_1delete",
	"Point_1new",
	"PrivateFontCollection_1AddFontFile",
	"PrivateFontCollection_1delete",
	"PrivateFontCollection_1new",
	"Region_1GetHRGN",
	"Region_1IsInfinite",
	"Region_1delete",
	"Region_1new__",
	"Region_1new__J",
	"Region_1newGraphicsPath",
	"SolidBrush_1delete",
	"SolidBrush_1new",
	"StringFormat_1Clone",
	"StringFormat_1GenericDefault",
	"StringFormat_1GenericTypographic",
	"StringFormat_1GetFormatFlags",
	"StringFormat_1SetFormatFlags",
	"StringFormat_1SetHotkeyPrefix",
	"StringFormat_1SetTabStops",
	"StringFormat_1delete",
	"TextureBrush_1ResetTransform",
	"TextureBrush_1ScaleTransform",
	"TextureBrush_1SetTransform",
	"TextureBrush_1TranslateTransform",
	"TextureBrush_1delete",
	"TextureBrush_1new",
};
#define NATIVE_FUNCTION_COUNT sizeof(Gdip_nativeFunctionNames) / sizeof(char*)
int Gdip_nativeFunctionCount = NATIVE_FUNCTION_COUNT;
int Gdip_nativeFunctionCallCount[NATIVE_FUNCTION_COUNT];

#define STATS_NATIVE(func) Java_org_eclipse_swt_tools_internal_NativeStats_##func

JNIEXPORT jint JNICALL STATS_NATIVE(Gdip_1GetFunctionCount)
	(JNIEnv *env, jclass that)
{
	return Gdip_nativeFunctionCount;
}

JNIEXPORT jstring JNICALL STATS_NATIVE(Gdip_1GetFunctionName)
	(JNIEnv *env, jclass that, jint index)
{
	return env->NewStringUTF(Gdip_nativeFunctionNames[index]);
}

JNIEXPORT jint JNICALL STATS_NATIVE(Gdip_1GetFunctionCallCount)
	(JNIEnv *env, jclass that, jint index)
{
	return Gdip_nativeFunctionCallCount[index];
}

#endif
