#ifndef _XLIB
#define _XLIB
#ifndef _XLIB_H_
extern XFontStruct *XLoadQueryFont  _ANSI_ARGS_((Display *, const char *));
extern XModifierKeymap *XGetModifierMapping  _ANSI_ARGS_((Display *));
extern XImage *XCreateImage  _ANSI_ARGS_((Display *, Visual *, unsigned int, int, int, char *, unsigned int, unsigned int, int, int));
extern XImage *XGetImage  _ANSI_ARGS_((Display *, Drawable, int, int, unsigned int, unsigned int, long unsigned int, int));
extern Display *XOpenDisplay  _ANSI_ARGS_((const char *));
extern char *XGetAtomName  _ANSI_ARGS_((Display *, Atom));
extern char *XKeysymToString  _ANSI_ARGS_((KeySym));
extern Atom XInternAtom  _ANSI_ARGS_((Display *, const char *, int));
extern Colormap XCreateColormap  _ANSI_ARGS_((Display *, Window, Visual *, int));
extern Cursor XCreatePixmapCursor  _ANSI_ARGS_((Display *, Pixmap, Pixmap, XColor *, XColor *, unsigned int, unsigned int));
extern Cursor XCreateGlyphCursor  _ANSI_ARGS_((Display *, Font, Font, unsigned int, unsigned int, XColor *, XColor *));
extern Font XLoadFont  _ANSI_ARGS_((Display *, const char *));
extern GC XCreateGC  _ANSI_ARGS_((Display *, Drawable, long unsigned int, XGCValues *));
extern GContext XGContextFromGC  _ANSI_ARGS_((GC));
extern Pixmap XCreatePixmap  _ANSI_ARGS_((Display *, Drawable, unsigned int, unsigned int, unsigned int));
extern Pixmap XCreateBitmapFromData  _ANSI_ARGS_((Display *, Drawable, const char *, unsigned int, unsigned int));
extern Window XCreateWindow  _ANSI_ARGS_((Display *, Window, int, int, unsigned int, unsigned int, unsigned int, int, unsigned int, Visual *, long unsigned int, XSetWindowAttributes *));
extern Atom *XListProperties  _ANSI_ARGS_((Display *, Window, int *));
extern XHostAddress *XListHosts  _ANSI_ARGS_((Display *, int *, int *));
extern KeySym XKeycodeToKeysym  _ANSI_ARGS_((Display *, unsigned int, int));
extern KeySym XStringToKeysym  _ANSI_ARGS_((const char *));
extern VisualID XVisualIDFromVisual  _ANSI_ARGS_((Visual *));
extern Window XRootWindow  _ANSI_ARGS_((Display *, int));
extern Visual *XDefaultVisual  _ANSI_ARGS_((Display *, int));
extern Colormap XDefaultColormap  _ANSI_ARGS_((Display *, int));
extern XErrorHandler XSetErrorHandler  _ANSI_ARGS_((XErrorHandler));
extern int XIconifyWindow  _ANSI_ARGS_((Display *, Window, int));
extern int XWithdrawWindow  _ANSI_ARGS_((Display *, Window, int));
extern int XGetWMColormapWindows  _ANSI_ARGS_((Display *, Window, Window **, int *));
extern int XSetWMColormapWindows  _ANSI_ARGS_((Display *, Window, Window *, int));
extern int XSetTransientForHint  _ANSI_ARGS_((Display *, Window, Window));
extern int XAllocColor  _ANSI_ARGS_((Display *, Colormap, XColor *));
extern int XAllocNamedColor  _ANSI_ARGS_((Display *, Colormap, const char *, XColor *, XColor *));
extern int XBell  _ANSI_ARGS_((Display *, int));
extern int XChangeProperty  _ANSI_ARGS_((Display *, Window, Atom, Atom, int, int, const unsigned char *, int));
extern int XChangeWindowAttributes  _ANSI_ARGS_((Display *, Window, long unsigned int, XSetWindowAttributes *));
extern int XCheckIfEvent  _ANSI_ARGS_((Display *, XEvent *, int (*) (Display *, XEvent *, char *), char *));
extern int XCheckWindowEvent  _ANSI_ARGS_((Display *, Window, long int, XEvent *));
extern int XClearWindow  _ANSI_ARGS_((Display *, Window));
extern int XConfigureWindow  _ANSI_ARGS_((Display *, Window, unsigned int, XWindowChanges *));
extern int XConvertSelection  _ANSI_ARGS_((Display *, Atom, Atom, Atom, Window, Time));
extern int XCopyArea  _ANSI_ARGS_((Display *, Drawable, Drawable, GC, int, int, unsigned int, unsigned int, int, int));
extern int XCopyPlane  _ANSI_ARGS_((Display *, Drawable, Drawable, GC, int, int, unsigned int, unsigned int, int, int, long unsigned int));
extern int XDefaultDepth  _ANSI_ARGS_((Display *, int));
extern int XDefaultScreen  _ANSI_ARGS_((Display *));
extern int XDefineCursor  _ANSI_ARGS_((Display *, Window, Cursor));
extern int XDeleteProperty  _ANSI_ARGS_((Display *, Window, Atom));
extern int XDestroyWindow  _ANSI_ARGS_((Display *, Window));
extern int XDrawArc  _ANSI_ARGS_((Display *, Drawable, GC, int, int, unsigned int, unsigned int, int, int));
extern int XDrawLine  _ANSI_ARGS_((Display *, Drawable, GC, int, int, int, int));
extern int XDrawLines  _ANSI_ARGS_((Display *, Drawable, GC, XPoint *, int, int));
extern int XDrawRectangle  _ANSI_ARGS_((Display *, Drawable, GC, int, int, unsigned int, unsigned int));
extern int XDrawString  _ANSI_ARGS_((Display *, Drawable, GC, int, int, const char *, int));
extern int XEventsQueued  _ANSI_ARGS_((Display *, int));
extern int XFillArc  _ANSI_ARGS_((Display *, Drawable, GC, int, int, unsigned int, unsigned int, int, int));
extern int XFillPolygon  _ANSI_ARGS_((Display *, Drawable, GC, XPoint *, int, int, int));
extern int XFillRectangle  _ANSI_ARGS_((Display *, Drawable, GC, int, int, unsigned int, unsigned int));
extern int XFillRectangles  _ANSI_ARGS_((Display *, Drawable, GC, XRectangle *, int));
extern int XFlush  _ANSI_ARGS_((Display *));
extern int XFree  _ANSI_ARGS_((XFree_arg_t *));
extern int XFreeColormap  _ANSI_ARGS_((Display *, Colormap));
extern int XFreeColors  _ANSI_ARGS_((Display *, Colormap, long unsigned int *, int, long unsigned int));
extern int XFreeCursor  _ANSI_ARGS_((Display *, Cursor));
extern int XFreeFont  _ANSI_ARGS_((Display *, XFontStruct *));
extern int XFreeGC  _ANSI_ARGS_((Display *, GC));
extern int XFreeModifiermap  _ANSI_ARGS_((XModifierKeymap *));
extern int XFreePixmap  _ANSI_ARGS_((Display *, Pixmap));
extern int XGetFontProperty  _ANSI_ARGS_((XFontStruct *, Atom, long unsigned int *));
extern int XGetGeometry  _ANSI_ARGS_((Display *, Drawable, Window *, int *, int *, unsigned int *, unsigned int *, unsigned int *, unsigned int *));
extern int XGetInputFocus  _ANSI_ARGS_((Display *, Window *, int *));
extern int XGetWindowProperty  _ANSI_ARGS_((Display *, Window, Atom, long int, long int, int, Atom, Atom *, int *, long unsigned int *, long unsigned int *, unsigned char **));
extern int XGetWindowAttributes  _ANSI_ARGS_((Display *, Window, XWindowAttributes *));
extern int XGrabKeyboard  _ANSI_ARGS_((Display *, Window, int, int, int, Time));
extern int XGrabPointer  _ANSI_ARGS_((Display *, Window, int, unsigned int, int, int, Window, Cursor, Time));
extern int XGrabServer  _ANSI_ARGS_((Display *));
extern int XLookupColor  _ANSI_ARGS_((Display *, Colormap, const char *, XColor *, XColor *));
extern int XMapWindow  _ANSI_ARGS_((Display *, Window));
extern int XMoveResizeWindow  _ANSI_ARGS_((Display *, Window, int, int, unsigned int, unsigned int));
extern int XMoveWindow  _ANSI_ARGS_((Display *, Window, int, int));
extern int XNextEvent  _ANSI_ARGS_((Display *, XEvent *));
extern int XNoOp  _ANSI_ARGS_((Display *));
extern int XParseColor  _ANSI_ARGS_((Display *, Colormap, const char *, XColor *));
extern int XPutBackEvent  _ANSI_ARGS_((Display *, XEvent *));
extern int XPutImage  _ANSI_ARGS_((Display *, Drawable, GC, XImage *, int, int, int, int, unsigned int, unsigned int));
extern int XQueryColors  _ANSI_ARGS_((Display *, Colormap, XColor *, int));
extern int XQueryPointer  _ANSI_ARGS_((Display *, Window, Window *, Window *, int *, int *, int *, int *, unsigned int *));
extern int XQueryTree  _ANSI_ARGS_((Display *, Window, Window *, Window *, Window **, unsigned int *));
extern int XRaiseWindow  _ANSI_ARGS_((Display *, Window));
extern int XReadBitmapFile  _ANSI_ARGS_((Display *, Drawable, const char *, unsigned int *, unsigned int *, Pixmap *, int *, int *));
extern int XRefreshKeyboardMapping  _ANSI_ARGS_((XMappingEvent *));
extern int XResizeWindow  _ANSI_ARGS_((Display *, Window, unsigned int, unsigned int));
extern int XSelectInput  _ANSI_ARGS_((Display *, Window, long int));
extern int XSendEvent  _ANSI_ARGS_((Display *, Window, int, long int, XEvent *));
extern int XSetClipMask  _ANSI_ARGS_((Display *, GC, Pixmap));
extern int XSetClipOrigin  _ANSI_ARGS_((Display *, GC, int, int));
extern int XSetCommand  _ANSI_ARGS_((Display *, Window, char **, int));
extern int XSetForeground  _ANSI_ARGS_((Display *, GC, long unsigned int));
extern int XSetIconName  _ANSI_ARGS_((Display *, Window, const char *));
extern int XSetInputFocus  _ANSI_ARGS_((Display *, Window, int, Time));
extern int XSetSelectionOwner  _ANSI_ARGS_((Display *, Atom, Window, Time));
extern int XSetTSOrigin  _ANSI_ARGS_((Display *, GC, int, int));
extern int XSetWindowBackground  _ANSI_ARGS_((Display *, Window, long unsigned int));
extern int XSetWindowBackgroundPixmap  _ANSI_ARGS_((Display *, Window, Pixmap));
extern int XSetWindowBorder  _ANSI_ARGS_((Display *, Window, long unsigned int));
extern int XSetWindowBorderPixmap  _ANSI_ARGS_((Display *, Window, Pixmap));
extern int XSetWindowBorderWidth  _ANSI_ARGS_((Display *, Window, unsigned int));
extern int XSetWindowColormap  _ANSI_ARGS_((Display *, Window, Colormap));
extern int XSync  _ANSI_ARGS_((Display *, int));
extern int XTextExtents  _ANSI_ARGS_((XFontStruct *, const char *, int, int *, int *, int *, XCharStruct *));
extern int XTextWidth  _ANSI_ARGS_((XFontStruct *, const char *, int));
extern int XTranslateCoordinates  _ANSI_ARGS_((Display *, Window, Window, int, int, int *, int *, Window *));
extern int XUngrabKeyboard  _ANSI_ARGS_((Display *, Time));
extern int XUngrabPointer  _ANSI_ARGS_((Display *, Time));
extern int XUngrabServer  _ANSI_ARGS_((Display *));
extern int XUnmapWindow  _ANSI_ARGS_((Display *, Window));
extern int XWindowEvent  _ANSI_ARGS_((Display *, Window, long int, XEvent *));
extern Region XCreateRegion  _ANSI_ARGS_((void));
extern XVisualInfo *XGetVisualInfo  _ANSI_ARGS_((Display *, long int, XVisualInfo *, int *));
extern XSizeHints *XAllocSizeHints  _ANSI_ARGS_((void));
extern XClassHint *XAllocClassHint  _ANSI_ARGS_((void));
extern void XSetWMNormalHints  _ANSI_ARGS_((Display *, Window, XSizeHints *));
extern void XSetWMName  _ANSI_ARGS_((Display *, Window, XTextProperty *));
extern void XSetWMClientMachine  _ANSI_ARGS_((Display *, Window, XTextProperty *));
extern int XStringListToTextProperty  _ANSI_ARGS_((char **, int, XTextProperty *));
extern int XClipBox  _ANSI_ARGS_((Region, XRectangle *));
extern int XDestroyRegion  _ANSI_ARGS_((Region));
extern int XIntersectRegion  _ANSI_ARGS_((Region, Region, Region));
extern int XLookupString  _ANSI_ARGS_((XKeyEvent *, char *, int, KeySym *, XComposeStatus *));
extern int XSetClassHint  _ANSI_ARGS_((Display *, Window, XClassHint *));
extern int XSetWMHints  _ANSI_ARGS_((Display *, Window, XWMHints *));
extern int XSetRegion  _ANSI_ARGS_((Display *, GC, Region));
extern int XUnionRectWithRegion  _ANSI_ARGS_((XRectangle *, Region, Region));
extern int XSetBackground _ANSI_ARGS_((Display *, GC, unsigned long));
extern int XDrawImageString _ANSI_ARGS_((Display *, Drawable, GC, int, int, const char *, int));
extern int XWarpPointer _ANSI_ARGS_(( Display *, Window, Window, int, int, unsigned int, unsigned int, int, int ));
#endif /* _XLIB_H_ */
extern int _XInitImageFuncPtrs _ANSI_ARGS_((XImage *image));
#endif /* _XLIB */
