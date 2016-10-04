#ifdef USE_ES2
#ifndef STUB2_H
#define STUB2_H

#include <GL/gl.h>
#include "extypes.h"

void stub_glActiveTexture(GLenum texture);
void stub_glAlphaFunc(GLenum func, GLclampf ref);
void stub_glAlphaFuncx(GLenum func, GLclampx ref);
void stub_glBindBuffer(GLenum target, GLuint buffer);
void stub_glBindTexture(GLenum target, GLuint texture);
void stub_glBlendColorOES(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
void stub_glBlendEquationOES(GLenum mode);
void stub_glBlendEquationSeparateOES(GLenum modeRGB, GLenum modeAlpha);
void stub_glBlendFunc(GLenum sfactor, GLenum dfactor);
void stub_glBlendFuncSeparateOES(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
void stub_glBufferData(GLenum target, GLsizeiptr size, const GLvoid * data, GLenum usage);
void stub_glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid * data);
void stub_glClear(GLbitfield mask);
void stub_glClearColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
void stub_glClearColorx(GLclampx red, GLclampx green, GLclampx blue, GLclampx alpha);
void stub_glClearDepthf(GLclampf depth);
void stub_glClearDepthx(GLclampx depth);
void stub_glClearStencil(GLint s);
void stub_glClientActiveTexture(GLenum texture);
void stub_glClipPlanef(GLenum plane, const GLfloat * equation);
void stub_glClipPlanex(GLenum plane, const GLfixed * equation);
void stub_glColor4f(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
void stub_glColor4ub(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha);
void stub_glColor4x(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha);
void stub_glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
void stub_glColorPointer(GLint size, GLenum type, GLsizei stride, const GLvoid * pointer);
void stub_glCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid * data);
void stub_glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid * data);
void stub_glCopyTexImage2D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
void stub_glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
void stub_glCullFace(GLenum mode);
void stub_glDeleteBuffers(GLsizei n, const GLuint * buffers);
void stub_glDeleteTextures(GLsizei n, const GLuint * textures);
void stub_glDepthFunc(GLenum func);
void stub_glDepthMask(GLboolean flag);
void stub_glDepthRangef(GLclampf near, GLclampf far);
void stub_glDepthRangex(GLclampx near, GLclampx far);
void stub_glDisable(GLenum cap);
void stub_glDisableClientState(GLenum array);
void stub_glDrawArrays(GLenum mode, GLint first, GLsizei count);
void stub_glDrawElements(GLenum mode, GLsizei count, GLenum type, const GLvoid * indices);
void stub_glEnable(GLenum cap);
void stub_glEnableClientState(GLenum array);
void stub_glFinish();
void stub_glFlush();
void stub_glFogf(GLenum pname, GLfloat param);
void stub_glFogfv(GLenum pname, const GLfloat * params);
void stub_glFogx(GLenum pname, GLfixed param);
void stub_glFogxv(GLenum pname, const GLfixed * params);
void stub_glFrontFace(GLenum mode);
void stub_glFrustumf(GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat near, GLfloat far);
void stub_glFrustumx(GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed near, GLfixed far);
void stub_glGenBuffers(GLsizei n, GLuint * buffers);
void stub_glGenTextures(GLsizei n, GLuint * textures);
void stub_glGetBooleanv(GLenum pname, GLboolean * params);
void stub_glGetBufferParameteriv(GLenum target, GLenum pname, GLint * params);
void stub_glGetClipPlanef(GLenum plane, GLfloat * equation);
void stub_glGetClipPlanex(GLenum plane, GLfixed * equation);
GLenum stub_glGetError();
void stub_glGetFixedv(GLenum pname, GLfixed * params);
void stub_glGetFloatv(GLenum pname, GLfloat * params);
void stub_glGetIntegerv(GLenum pname, GLint * params);
void stub_glGetLightfv(GLenum light, GLenum pname, GLfloat * params);
void stub_glGetLightxv(GLenum light, GLenum pname, GLfixed * params);
void stub_glGetMaterialfv(GLenum face, GLenum pname, GLfloat * params);
void stub_glGetMaterialxv(GLenum face, GLenum pname, GLfixed * params);
void stub_glGetPointerv(GLenum pname, GLvoid ** params);
const GLubyte * stub_glGetString(GLenum name);
void stub_glGetTexEnvfv(GLenum target, GLenum pname, GLfloat * params);
void stub_glGetTexEnviv(GLenum target, GLenum pname, GLint * params);
void stub_glGetTexEnvxv(GLenum target, GLenum pname, GLfixed * params);
void stub_glGetTexParameterfv(GLenum target, GLenum pname, GLfloat * params);
void stub_glGetTexParameteriv(GLenum target, GLenum pname, GLint * params);
void stub_glGetTexParameterxv(GLenum target, GLenum pname, GLfixed * params);
void stub_glHint(GLenum target, GLenum mode);
GLboolean stub_glIsBuffer(GLuint buffer);
GLboolean stub_glIsEnabled(GLenum cap);
GLboolean stub_glIsTexture(GLuint texture);
void stub_glLightModelf(GLenum pname, GLfloat param);
void stub_glLightModelfv(GLenum pname, const GLfloat * params);
void stub_glLightModelx(GLenum pname, GLfixed param);
void stub_glLightModelxv(GLenum pname, const GLfixed * params);
void stub_glLightf(GLenum light, GLenum pname, GLfloat param);
void stub_glLightfv(GLenum light, GLenum pname, const GLfloat * params);
void stub_glLightx(GLenum light, GLenum pname, GLfixed param);
void stub_glLightxv(GLenum light, GLenum pname, const GLfixed * params);
void stub_glLineWidth(GLfloat width);
void stub_glLineWidthx(GLfixed width);
void stub_glLoadIdentity();
void stub_glLoadMatrixf(const GLfloat * m);
void stub_glLoadMatrixx(const GLfixed * m);
void stub_glLogicOp(GLenum opcode);
void stub_glMaterialf(GLenum face, GLenum pname, GLfloat param);
void stub_glMaterialfv(GLenum face, GLenum pname, const GLfloat * params);
void stub_glMaterialx(GLenum face, GLenum pname, GLfixed param);
void stub_glMaterialxv(GLenum face, GLenum pname, const GLfixed * params);
void stub_glMatrixMode(GLenum mode);
void stub_glMultMatrixf(const GLfloat * m);
void stub_glMultMatrixx(const GLfixed * m);
void stub_glMultiTexCoord4f(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
void stub_glMultiTexCoord4x(GLenum target, GLfixed s, GLfixed t, GLfixed r, GLfixed q);
void stub_glNormal3f(GLfloat nx, GLfloat ny, GLfloat nz);
void stub_glNormal3x(GLfixed nx, GLfixed ny, GLfixed nz);
void stub_glNormalPointer(GLenum type, GLsizei stride, const GLvoid * pointer);
void stub_glOrthof(GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat near, GLfloat far);
void stub_glOrthox(GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed near, GLfixed far);
void stub_glPixelStorei(GLenum pname, GLint param);
void stub_glPointParameterf(GLenum pname, GLfloat param);
void stub_glPointParameterfv(GLenum pname, const GLfloat * params);
void stub_glPointParameterx(GLenum pname, GLfixed param);
void stub_glPointParameterxv(GLenum pname, const GLfixed * params);
void stub_glPointSize(GLfloat size);
void stub_glPointSizePointerOES(GLenum type, GLsizei stride, const GLvoid * pointer);
void stub_glPointSizex(GLfixed size);
void stub_glPolygonOffset(GLfloat factor, GLfloat units);
void stub_glPolygonOffsetx(GLfixed factor, GLfixed units);
void stub_glPopMatrix();
void stub_glPushMatrix();
void stub_glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid * pixels);
void stub_glRotatef(GLfloat angle, GLfloat x, GLfloat y, GLfloat z);
void stub_glRotatex(GLfixed angle, GLfixed x, GLfixed y, GLfixed z);
void stub_glSampleCoverage(GLclampf value, GLboolean invert);
void stub_glSampleCoveragex(GLclampx value, GLboolean invert);
void stub_glScalef(GLfloat x, GLfloat y, GLfloat z);
void stub_glScalex(GLfixed x, GLfixed y, GLfixed z);
void stub_glScissor(GLint x, GLint y, GLsizei width, GLsizei height);
void stub_glShadeModel(GLenum mode);
void stub_glStencilFunc(GLenum func, GLint ref, GLuint mask);
void stub_glStencilMask(GLuint mask);
void stub_glStencilOp(GLenum fail, GLenum zfail, GLenum zpass);
void stub_glTexCoordPointer(GLint size, GLenum type, GLsizei stride, const GLvoid * pointer);
void stub_glTexEnvf(GLenum target, GLenum pname, GLfloat param);
void stub_glTexEnvfv(GLenum target, GLenum pname, const GLfloat * params);
void stub_glTexEnvi(GLenum target, GLenum pname, GLint param);
void stub_glTexEnviv(GLenum target, GLenum pname, const GLint * params);
void stub_glTexEnvx(GLenum target, GLenum pname, GLfixed param);
void stub_glTexEnvxv(GLenum target, GLenum pname, const GLfixed * params);
void stub_glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid * pixels);
void stub_glTexParameterf(GLenum target, GLenum pname, GLfloat param);
void stub_glTexParameterfv(GLenum target, GLenum pname, const GLfloat * params);
void stub_glTexParameteri(GLenum target, GLenum pname, GLint param);
void stub_glTexParameteriv(GLenum target, GLenum pname, const GLint * params);
void stub_glTexParameterx(GLenum target, GLenum pname, GLfixed param);
void stub_glTexParameterxv(GLenum target, GLenum pname, const GLfixed * params);
void stub_glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * pixels);
void stub_glTranslatef(GLfloat x, GLfloat y, GLfloat z);
void stub_glTranslatex(GLfixed x, GLfixed y, GLfixed z);
void stub_glVertexPointer(GLint size, GLenum type, GLsizei stride, const GLvoid * pointer);
void stub_glViewport(GLint x, GLint y, GLsizei width, GLsizei height);

#endif
#endif