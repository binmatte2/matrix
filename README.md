# **MATRIX: 2D Drawing Engine**

## **DESCRIPTION:**

MATRIX is a lightweight 2D drawing engine, designed to simplify the process of drawing graphics in a 2D space. It provides simple structures and functions for creating and manipulating 2D canvases, as well as drawing basic shapes such as rectangles, triangles, arcs, and lines.

## **Features**

- **Simple Interface**: MATRIX offers a straightforward interface with easy-to-use structures and functions for creating and manipulating 2D canvases.
- **Multiple Color Formats**: Supports both RGB and RGBA color formats in 8-bit and 16-bit variants, providing flexibility in color representation.
- **Basic Shape Drawing**: Includes functions for drawing basic shapes such as rectangles, triangles, arcs, and lines on the canvas.
- **Memory Management**: Provides functions for creating and freeing canvas memory to ensure efficient memory usage.

## **Usage**

```C
#include "matrix.h"

int main(void) {

	MxCanvasRGB8 * canvas = mxCanvasCreateRGB8(800, 600);
    MxRGB8 red = {255, 0, 0};
	MxRGB8 blue = {255, 0, 0};
    mxCanvasFillRGB8(canvas, red);
    MxRect rect = {100, 100, 200, 200};
    mxCanvasDrawRect(canvas, rect, blue);
    mxCanvasFreeRGB8(canvas);
	return 0;
}
```

## **CONTRIBUTION:**

Contributions to MATRIX are welcome! If you have ideas for new rebellious macros or improvements to existing ones, feel free to submit a pull request on GitHub.

## **LICENSE:**

This project is licensed under the MIT License. See the [**`LINCENSE`**](LINCENSE) file for more details.

## **DISCLAIMER:**

REBEC is an experimental project intended for educational and entertainment purposes only. It may not be suitable for production code, and the use of unconventional syntax may lead to confusion or readability issues in larger codebases. Use at your own discretion.