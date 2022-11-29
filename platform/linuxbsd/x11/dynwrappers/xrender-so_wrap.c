// This file is generated. Do not edit!
// see https://github.com/hpvb/dynload-wrapper for details
// generated by ./generate-wrapper.py 0.3 on 2022-12-02 12:55:28
// flags: ./generate-wrapper.py --include /usr/include/X11/extensions/Xrender.h --sys-include <X11/extensions/Xrender.h> --soname libXrender.so.1 --init-name xrender --output-header xrender-so_wrap.h --output-implementation xrender-so_wrap.c
//
// NOTE: Generated from Xrender 0.9.10.
// This has been handpatched to workaround some issues with the generator that
// will be eventually fixed. In this case, non-existant symbols inherited from
// libX11, but absent in libXrender.so.1, were removed.
#include <stdint.h>

#define XRenderQueryExtension XRenderQueryExtension_dylibloader_orig_xrender
#define XRenderQueryVersion XRenderQueryVersion_dylibloader_orig_xrender
#define XRenderQueryFormats XRenderQueryFormats_dylibloader_orig_xrender
#define XRenderQuerySubpixelOrder XRenderQuerySubpixelOrder_dylibloader_orig_xrender
#define XRenderSetSubpixelOrder XRenderSetSubpixelOrder_dylibloader_orig_xrender
#define XRenderFindVisualFormat XRenderFindVisualFormat_dylibloader_orig_xrender
#define XRenderFindFormat XRenderFindFormat_dylibloader_orig_xrender
#define XRenderFindStandardFormat XRenderFindStandardFormat_dylibloader_orig_xrender
#define XRenderQueryPictIndexValues XRenderQueryPictIndexValues_dylibloader_orig_xrender
#define XRenderCreatePicture XRenderCreatePicture_dylibloader_orig_xrender
#define XRenderChangePicture XRenderChangePicture_dylibloader_orig_xrender
#define XRenderSetPictureClipRectangles XRenderSetPictureClipRectangles_dylibloader_orig_xrender
#define XRenderSetPictureClipRegion XRenderSetPictureClipRegion_dylibloader_orig_xrender
#define XRenderSetPictureTransform XRenderSetPictureTransform_dylibloader_orig_xrender
#define XRenderFreePicture XRenderFreePicture_dylibloader_orig_xrender
#define XRenderComposite XRenderComposite_dylibloader_orig_xrender
#define XRenderCreateGlyphSet XRenderCreateGlyphSet_dylibloader_orig_xrender
#define XRenderReferenceGlyphSet XRenderReferenceGlyphSet_dylibloader_orig_xrender
#define XRenderFreeGlyphSet XRenderFreeGlyphSet_dylibloader_orig_xrender
#define XRenderAddGlyphs XRenderAddGlyphs_dylibloader_orig_xrender
#define XRenderFreeGlyphs XRenderFreeGlyphs_dylibloader_orig_xrender
#define XRenderCompositeString8 XRenderCompositeString8_dylibloader_orig_xrender
#define XRenderCompositeString16 XRenderCompositeString16_dylibloader_orig_xrender
#define XRenderCompositeString32 XRenderCompositeString32_dylibloader_orig_xrender
#define XRenderCompositeText8 XRenderCompositeText8_dylibloader_orig_xrender
#define XRenderCompositeText16 XRenderCompositeText16_dylibloader_orig_xrender
#define XRenderCompositeText32 XRenderCompositeText32_dylibloader_orig_xrender
#define XRenderFillRectangle XRenderFillRectangle_dylibloader_orig_xrender
#define XRenderFillRectangles XRenderFillRectangles_dylibloader_orig_xrender
#define XRenderCompositeTrapezoids XRenderCompositeTrapezoids_dylibloader_orig_xrender
#define XRenderCompositeTriangles XRenderCompositeTriangles_dylibloader_orig_xrender
#define XRenderCompositeTriStrip XRenderCompositeTriStrip_dylibloader_orig_xrender
#define XRenderCompositeTriFan XRenderCompositeTriFan_dylibloader_orig_xrender
#define XRenderCompositeDoublePoly XRenderCompositeDoublePoly_dylibloader_orig_xrender
#define XRenderParseColor XRenderParseColor_dylibloader_orig_xrender
#define XRenderCreateCursor XRenderCreateCursor_dylibloader_orig_xrender
#define XRenderQueryFilters XRenderQueryFilters_dylibloader_orig_xrender
#define XRenderSetPictureFilter XRenderSetPictureFilter_dylibloader_orig_xrender
#define XRenderCreateAnimCursor XRenderCreateAnimCursor_dylibloader_orig_xrender
#define XRenderAddTraps XRenderAddTraps_dylibloader_orig_xrender
#define XRenderCreateSolidFill XRenderCreateSolidFill_dylibloader_orig_xrender
#define XRenderCreateLinearGradient XRenderCreateLinearGradient_dylibloader_orig_xrender
#define XRenderCreateRadialGradient XRenderCreateRadialGradient_dylibloader_orig_xrender
#define XRenderCreateConicalGradient XRenderCreateConicalGradient_dylibloader_orig_xrender
#include <X11/extensions/Xrender.h>
#undef XRenderQueryExtension
#undef XRenderQueryVersion
#undef XRenderQueryFormats
#undef XRenderQuerySubpixelOrder
#undef XRenderSetSubpixelOrder
#undef XRenderFindVisualFormat
#undef XRenderFindFormat
#undef XRenderFindStandardFormat
#undef XRenderQueryPictIndexValues
#undef XRenderCreatePicture
#undef XRenderChangePicture
#undef XRenderSetPictureClipRectangles
#undef XRenderSetPictureClipRegion
#undef XRenderSetPictureTransform
#undef XRenderFreePicture
#undef XRenderComposite
#undef XRenderCreateGlyphSet
#undef XRenderReferenceGlyphSet
#undef XRenderFreeGlyphSet
#undef XRenderAddGlyphs
#undef XRenderFreeGlyphs
#undef XRenderCompositeString8
#undef XRenderCompositeString16
#undef XRenderCompositeString32
#undef XRenderCompositeText8
#undef XRenderCompositeText16
#undef XRenderCompositeText32
#undef XRenderFillRectangle
#undef XRenderFillRectangles
#undef XRenderCompositeTrapezoids
#undef XRenderCompositeTriangles
#undef XRenderCompositeTriStrip
#undef XRenderCompositeTriFan
#undef XRenderCompositeDoublePoly
#undef XRenderParseColor
#undef XRenderCreateCursor
#undef XRenderQueryFilters
#undef XRenderSetPictureFilter
#undef XRenderCreateAnimCursor
#undef XRenderAddTraps
#undef XRenderCreateSolidFill
#undef XRenderCreateLinearGradient
#undef XRenderCreateRadialGradient
#undef XRenderCreateConicalGradient
#include <dlfcn.h>
#include <stdio.h>
int (*XRenderQueryExtension_dylibloader_wrapper_xrender)( Display*, int*, int*);
int (*XRenderQueryVersion_dylibloader_wrapper_xrender)( Display*, int*, int*);
int (*XRenderQueryFormats_dylibloader_wrapper_xrender)( Display*);
int (*XRenderQuerySubpixelOrder_dylibloader_wrapper_xrender)( Display*, int);
int (*XRenderSetSubpixelOrder_dylibloader_wrapper_xrender)( Display*, int, int);
XRenderPictFormat* (*XRenderFindVisualFormat_dylibloader_wrapper_xrender)( Display*,const Visual*);
XRenderPictFormat* (*XRenderFindFormat_dylibloader_wrapper_xrender)( Display*, unsigned long,const XRenderPictFormat*, int);
XRenderPictFormat* (*XRenderFindStandardFormat_dylibloader_wrapper_xrender)( Display*, int);
XIndexValue* (*XRenderQueryPictIndexValues_dylibloader_wrapper_xrender)( Display*,const XRenderPictFormat*, int*);
Picture (*XRenderCreatePicture_dylibloader_wrapper_xrender)( Display*, Drawable,const XRenderPictFormat*, unsigned long,const XRenderPictureAttributes*);
void (*XRenderChangePicture_dylibloader_wrapper_xrender)( Display*, Picture, unsigned long,const XRenderPictureAttributes*);
void (*XRenderSetPictureClipRectangles_dylibloader_wrapper_xrender)( Display*, Picture, int, int,const XRectangle*, int);
void (*XRenderSetPictureClipRegion_dylibloader_wrapper_xrender)( Display*, Picture, Region);
void (*XRenderSetPictureTransform_dylibloader_wrapper_xrender)( Display*, Picture, XTransform*);
void (*XRenderFreePicture_dylibloader_wrapper_xrender)( Display*, Picture);
void (*XRenderComposite_dylibloader_wrapper_xrender)( Display*, int, Picture, Picture, Picture, int, int, int, int, int, int, unsigned int, unsigned int);
GlyphSet (*XRenderCreateGlyphSet_dylibloader_wrapper_xrender)( Display*,const XRenderPictFormat*);
GlyphSet (*XRenderReferenceGlyphSet_dylibloader_wrapper_xrender)( Display*, GlyphSet);
void (*XRenderFreeGlyphSet_dylibloader_wrapper_xrender)( Display*, GlyphSet);
void (*XRenderAddGlyphs_dylibloader_wrapper_xrender)( Display*, GlyphSet,const Glyph*,const XGlyphInfo*, int,const char*, int);
void (*XRenderFreeGlyphs_dylibloader_wrapper_xrender)( Display*, GlyphSet,const Glyph*, int);
void (*XRenderCompositeString8_dylibloader_wrapper_xrender)( Display*, int, Picture, Picture,const XRenderPictFormat*, GlyphSet, int, int, int, int,const char*, int);
void (*XRenderCompositeString16_dylibloader_wrapper_xrender)( Display*, int, Picture, Picture,const XRenderPictFormat*, GlyphSet, int, int, int, int,const unsigned short*, int);
void (*XRenderCompositeString32_dylibloader_wrapper_xrender)( Display*, int, Picture, Picture,const XRenderPictFormat*, GlyphSet, int, int, int, int,const unsigned int*, int);
void (*XRenderCompositeText8_dylibloader_wrapper_xrender)( Display*, int, Picture, Picture,const XRenderPictFormat*, int, int, int, int,const XGlyphElt8*, int);
void (*XRenderCompositeText16_dylibloader_wrapper_xrender)( Display*, int, Picture, Picture,const XRenderPictFormat*, int, int, int, int,const XGlyphElt16*, int);
void (*XRenderCompositeText32_dylibloader_wrapper_xrender)( Display*, int, Picture, Picture,const XRenderPictFormat*, int, int, int, int,const XGlyphElt32*, int);
void (*XRenderFillRectangle_dylibloader_wrapper_xrender)( Display*, int, Picture,const XRenderColor*, int, int, unsigned int, unsigned int);
void (*XRenderFillRectangles_dylibloader_wrapper_xrender)( Display*, int, Picture,const XRenderColor*,const XRectangle*, int);
void (*XRenderCompositeTrapezoids_dylibloader_wrapper_xrender)( Display*, int, Picture, Picture,const XRenderPictFormat*, int, int,const XTrapezoid*, int);
void (*XRenderCompositeTriangles_dylibloader_wrapper_xrender)( Display*, int, Picture, Picture,const XRenderPictFormat*, int, int,const XTriangle*, int);
void (*XRenderCompositeTriStrip_dylibloader_wrapper_xrender)( Display*, int, Picture, Picture,const XRenderPictFormat*, int, int,const XPointFixed*, int);
void (*XRenderCompositeTriFan_dylibloader_wrapper_xrender)( Display*, int, Picture, Picture,const XRenderPictFormat*, int, int,const XPointFixed*, int);
void (*XRenderCompositeDoublePoly_dylibloader_wrapper_xrender)( Display*, int, Picture, Picture,const XRenderPictFormat*, int, int, int, int,const XPointDouble*, int, int);
int (*XRenderParseColor_dylibloader_wrapper_xrender)( Display*, char*, XRenderColor*);
Cursor (*XRenderCreateCursor_dylibloader_wrapper_xrender)( Display*, Picture, unsigned int, unsigned int);
XFilters* (*XRenderQueryFilters_dylibloader_wrapper_xrender)( Display*, Drawable);
void (*XRenderSetPictureFilter_dylibloader_wrapper_xrender)( Display*, Picture,const char*, XFixed*, int);
Cursor (*XRenderCreateAnimCursor_dylibloader_wrapper_xrender)( Display*, int, XAnimCursor*);
void (*XRenderAddTraps_dylibloader_wrapper_xrender)( Display*, Picture, int, int,const XTrap*, int);
Picture (*XRenderCreateSolidFill_dylibloader_wrapper_xrender)( Display*,const XRenderColor*);
Picture (*XRenderCreateLinearGradient_dylibloader_wrapper_xrender)( Display*,const XLinearGradient*,const XFixed*,const XRenderColor*, int);
Picture (*XRenderCreateRadialGradient_dylibloader_wrapper_xrender)( Display*,const XRadialGradient*,const XFixed*,const XRenderColor*, int);
Picture (*XRenderCreateConicalGradient_dylibloader_wrapper_xrender)( Display*,const XConicalGradient*,const XFixed*,const XRenderColor*, int);
int initialize_xrender(int verbose) {
  void *handle;
  char *error;
  handle = dlopen("libXrender.so.1", RTLD_LAZY);
  if (!handle) {
    if (verbose) {
      fprintf(stderr, "%s\n", dlerror());
    }
    return(1);
  }
  dlerror();
// XRenderQueryExtension
  *(void **) (&XRenderQueryExtension_dylibloader_wrapper_xrender) = dlsym(handle, "XRenderQueryExtension");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRenderQueryVersion
  *(void **) (&XRenderQueryVersion_dylibloader_wrapper_xrender) = dlsym(handle, "XRenderQueryVersion");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRenderQueryFormats
  *(void **) (&XRenderQueryFormats_dylibloader_wrapper_xrender) = dlsym(handle, "XRenderQueryFormats");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRenderQuerySubpixelOrder
  *(void **) (&XRenderQuerySubpixelOrder_dylibloader_wrapper_xrender) = dlsym(handle, "XRenderQuerySubpixelOrder");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRenderSetSubpixelOrder
  *(void **) (&XRenderSetSubpixelOrder_dylibloader_wrapper_xrender) = dlsym(handle, "XRenderSetSubpixelOrder");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRenderFindVisualFormat
  *(void **) (&XRenderFindVisualFormat_dylibloader_wrapper_xrender) = dlsym(handle, "XRenderFindVisualFormat");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRenderFindFormat
  *(void **) (&XRenderFindFormat_dylibloader_wrapper_xrender) = dlsym(handle, "XRenderFindFormat");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRenderFindStandardFormat
  *(void **) (&XRenderFindStandardFormat_dylibloader_wrapper_xrender) = dlsym(handle, "XRenderFindStandardFormat");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRenderQueryPictIndexValues
  *(void **) (&XRenderQueryPictIndexValues_dylibloader_wrapper_xrender) = dlsym(handle, "XRenderQueryPictIndexValues");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRenderCreatePicture
  *(void **) (&XRenderCreatePicture_dylibloader_wrapper_xrender) = dlsym(handle, "XRenderCreatePicture");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRenderChangePicture
  *(void **) (&XRenderChangePicture_dylibloader_wrapper_xrender) = dlsym(handle, "XRenderChangePicture");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRenderSetPictureClipRectangles
  *(void **) (&XRenderSetPictureClipRectangles_dylibloader_wrapper_xrender) = dlsym(handle, "XRenderSetPictureClipRectangles");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRenderSetPictureClipRegion
  *(void **) (&XRenderSetPictureClipRegion_dylibloader_wrapper_xrender) = dlsym(handle, "XRenderSetPictureClipRegion");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRenderSetPictureTransform
  *(void **) (&XRenderSetPictureTransform_dylibloader_wrapper_xrender) = dlsym(handle, "XRenderSetPictureTransform");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRenderFreePicture
  *(void **) (&XRenderFreePicture_dylibloader_wrapper_xrender) = dlsym(handle, "XRenderFreePicture");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRenderComposite
  *(void **) (&XRenderComposite_dylibloader_wrapper_xrender) = dlsym(handle, "XRenderComposite");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRenderCreateGlyphSet
  *(void **) (&XRenderCreateGlyphSet_dylibloader_wrapper_xrender) = dlsym(handle, "XRenderCreateGlyphSet");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRenderReferenceGlyphSet
  *(void **) (&XRenderReferenceGlyphSet_dylibloader_wrapper_xrender) = dlsym(handle, "XRenderReferenceGlyphSet");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRenderFreeGlyphSet
  *(void **) (&XRenderFreeGlyphSet_dylibloader_wrapper_xrender) = dlsym(handle, "XRenderFreeGlyphSet");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRenderAddGlyphs
  *(void **) (&XRenderAddGlyphs_dylibloader_wrapper_xrender) = dlsym(handle, "XRenderAddGlyphs");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRenderFreeGlyphs
  *(void **) (&XRenderFreeGlyphs_dylibloader_wrapper_xrender) = dlsym(handle, "XRenderFreeGlyphs");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRenderCompositeString8
  *(void **) (&XRenderCompositeString8_dylibloader_wrapper_xrender) = dlsym(handle, "XRenderCompositeString8");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRenderCompositeString16
  *(void **) (&XRenderCompositeString16_dylibloader_wrapper_xrender) = dlsym(handle, "XRenderCompositeString16");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRenderCompositeString32
  *(void **) (&XRenderCompositeString32_dylibloader_wrapper_xrender) = dlsym(handle, "XRenderCompositeString32");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRenderCompositeText8
  *(void **) (&XRenderCompositeText8_dylibloader_wrapper_xrender) = dlsym(handle, "XRenderCompositeText8");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRenderCompositeText16
  *(void **) (&XRenderCompositeText16_dylibloader_wrapper_xrender) = dlsym(handle, "XRenderCompositeText16");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRenderCompositeText32
  *(void **) (&XRenderCompositeText32_dylibloader_wrapper_xrender) = dlsym(handle, "XRenderCompositeText32");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRenderFillRectangle
  *(void **) (&XRenderFillRectangle_dylibloader_wrapper_xrender) = dlsym(handle, "XRenderFillRectangle");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRenderFillRectangles
  *(void **) (&XRenderFillRectangles_dylibloader_wrapper_xrender) = dlsym(handle, "XRenderFillRectangles");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRenderCompositeTrapezoids
  *(void **) (&XRenderCompositeTrapezoids_dylibloader_wrapper_xrender) = dlsym(handle, "XRenderCompositeTrapezoids");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRenderCompositeTriangles
  *(void **) (&XRenderCompositeTriangles_dylibloader_wrapper_xrender) = dlsym(handle, "XRenderCompositeTriangles");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRenderCompositeTriStrip
  *(void **) (&XRenderCompositeTriStrip_dylibloader_wrapper_xrender) = dlsym(handle, "XRenderCompositeTriStrip");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRenderCompositeTriFan
  *(void **) (&XRenderCompositeTriFan_dylibloader_wrapper_xrender) = dlsym(handle, "XRenderCompositeTriFan");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRenderCompositeDoublePoly
  *(void **) (&XRenderCompositeDoublePoly_dylibloader_wrapper_xrender) = dlsym(handle, "XRenderCompositeDoublePoly");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRenderParseColor
  *(void **) (&XRenderParseColor_dylibloader_wrapper_xrender) = dlsym(handle, "XRenderParseColor");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRenderCreateCursor
  *(void **) (&XRenderCreateCursor_dylibloader_wrapper_xrender) = dlsym(handle, "XRenderCreateCursor");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRenderQueryFilters
  *(void **) (&XRenderQueryFilters_dylibloader_wrapper_xrender) = dlsym(handle, "XRenderQueryFilters");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRenderSetPictureFilter
  *(void **) (&XRenderSetPictureFilter_dylibloader_wrapper_xrender) = dlsym(handle, "XRenderSetPictureFilter");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRenderCreateAnimCursor
  *(void **) (&XRenderCreateAnimCursor_dylibloader_wrapper_xrender) = dlsym(handle, "XRenderCreateAnimCursor");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRenderAddTraps
  *(void **) (&XRenderAddTraps_dylibloader_wrapper_xrender) = dlsym(handle, "XRenderAddTraps");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRenderCreateSolidFill
  *(void **) (&XRenderCreateSolidFill_dylibloader_wrapper_xrender) = dlsym(handle, "XRenderCreateSolidFill");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRenderCreateLinearGradient
  *(void **) (&XRenderCreateLinearGradient_dylibloader_wrapper_xrender) = dlsym(handle, "XRenderCreateLinearGradient");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRenderCreateRadialGradient
  *(void **) (&XRenderCreateRadialGradient_dylibloader_wrapper_xrender) = dlsym(handle, "XRenderCreateRadialGradient");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
// XRenderCreateConicalGradient
  *(void **) (&XRenderCreateConicalGradient_dylibloader_wrapper_xrender) = dlsym(handle, "XRenderCreateConicalGradient");
  if (verbose) {
    error = dlerror();
    if (error != NULL) {
      fprintf(stderr, "%s\n", error);
    }
  }
return 0;
}
