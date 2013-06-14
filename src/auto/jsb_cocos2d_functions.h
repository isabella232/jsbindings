/*
* AUTOGENERATED FILE. DO NOT EDIT IT
* Generated by "generate_jsb.py -c cocos2d_jsb.ini" on 2013-06-14
* Script version: v0.6
*/
#import "jsb_config.h"
#if JSB_INCLUDE_COCOS2D

#import "jsb_NS_manual.h"
#import "jsb_cocos2d_manual.h"

#ifdef __cplusplus
extern "C" {
#endif
JSBool JSB_ccCardinalSplineAt(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccDrawArc(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccDrawCardinalSpline(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccDrawCatmullRom(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccDrawCircle(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccDrawColor4B(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccDrawColor4F(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccDrawCubicBezier(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccDrawFree(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccDrawInit(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccDrawLine(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccDrawPoint(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccDrawQuadBezier(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccDrawRect(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccDrawSolidArc(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccDrawSolidCircle(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccDrawSolidRect(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccGLBindTexture(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccGLBindTexture2D(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccGLBindTexture2DN(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccGLBindVAO(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccGLBlendFunc(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccGLBlendResetToCache(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccGLDeleteProgram(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccGLDeleteTexture(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccGLDeleteTextureN(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccGLEnable(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccGLEnableVertexAttribs(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccGLInvalidateStateCache(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccGLUseProgram(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccNextPOT(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccPointSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccSetProjectionMatrixDirty(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_cc_fps_images_hd_len(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_cc_fps_images_ipadhd_len(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_cc_fps_images_len(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccc4BFromccc4F(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccc4FEqual(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccc4FFromccc3B(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccc4FFromccc4B(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccp(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccpAdd(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccpAngle(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccpAngleSigned(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccpClamp(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccpCompMult(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccpCross(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccpDistance(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccpDistanceSQ(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccpDot(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccpForAngle(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccpFromSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccpFuzzyEqual(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccpIntersectPoint(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccpLength(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccpLengthSQ(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccpLerp(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccpMidpoint(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccpMult(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccpNeg(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccpNormalize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccpPerp(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccpProject(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccpRPerp(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccpRotate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccpRotateByAngle(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccpSegmentIntersect(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccpSub(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccpToAngle(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSB_ccpUnrotate(JSContext *cx, uint32_t argc, jsval *vp);

#ifdef __cplusplus
}
#endif


#endif // JSB_INCLUDE_COCOS2D
