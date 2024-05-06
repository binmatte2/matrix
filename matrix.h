#ifndef MATRIX_H
#define MATRIX_H

typedef struct MxRGB8 {
	unsigned char r;
	unsigned char g;
	unsigned char b;
} MxRGB8;

typedef struct MxRGB16 {
	unsigned short r;
	unsigned short g;
	unsigned short b;
} MxRGB16;


typedef struct MxRGBA8 {
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char a;
} MxRGBA8;

typedef struct MxRGBA16 {
	unsigned short r;
	unsigned short g;
	unsigned short b;
	unsigned short a;
} MxRGBA16;

typedef struct MxCanvasRGB8 {
	MxRGB8 * ps;
	unsigned int w;
	unsigned int h;
} MxCanvasRGB8;

typedef struct MxCanvasRGB16 {
	MxRGB16 * ps;
	unsigned int w;
	unsigned int h;
} MxCanvasRGB16;

typedef struct MxCanvasRGBA8 {
	MxRGBA8 * ps;
	unsigned int w;
	unsigned int h;
} MxCanvasRGBA8;

typedef struct MxCanvasRGBA16 {
	MxRGBA16 * ps;
	unsigned int w;
	unsigned int h;
} MxCanvasRGBA16;

typedef struct MxRect {
	unsigned int x1;
	unsigned int y1;
	unsigned int x2;
	unsigned int y2;
} MxRect;

typedef struct MxTrig {
	unsigned int x1;
	unsigned int y1;
	unsigned int x2;
	unsigned int y2;
	unsigned int x3;
	unsigned int y3;
} MxReTrig;

typedef struct MxArc {
	unsigned int cx;
	unsigned int cy;
	unsigned int r; 
	float start;
	float end;
} MxArc;

typedef struct MxLine {
	unsigned int x1;
	unsigned int y1;
	unsigned int x2;
	unsigned int y2;
} MxLine;

MxCanvasRGB8 * mxCanvasCreateRGB8(unsigned int w, unsigned int h);
MxCanvasRGB16 * mxCanvasCreateRGB16(unsigned int w, unsigned int h);
MxCanvasRGBA8 * mxCanvasCreateRGBA8(unsigned int w, unsigned int h);
MxCanvasRGBA16 * mxCanvasCreateRGBA16(unsigned int w, unsigned int h);

void mxCanvasFillRGB8(MxCanvasRGB8 * canvas, MxRGB8 color);
void mxCanvasFillRGB16(MxCanvasRGB16 * canvas, MxRGB16 color);
void mxCanvasFillRGBA8(MxCanvasRGBA8 * canvas, MxRGBA8 color);
void mxCanvasFillRGBA16(MxCanvasRGBA16 * canvas, MxRGBA16 color);

void mxCanvasFreeRGB8(MxCanvasRGB8 * canvas);
void mxCanvasFreeRGB16(MxCanvasRGB16 * canvas);
void mxCanvasFreeRGBA8(MxCanvasRGBA8 * canvas);
void mxCanvasFreeRGBA16(MxCanvasRGBA16 * canvas);

#endif
