#pragma once

#include <cstdint>

typedef unsigned int GLenum;
typedef unsigned int GLuint;
typedef int GLsizei;
typedef char GLchar;
typedef ptrdiff_t GLintptr;
typedef ptrdiff_t GLsizeiptr;
typedef double GLclampd;
typedef unsigned short GLushort;
typedef unsigned char GLubyte;
typedef unsigned char GLboolean;
typedef uint64_t GLuint64;
typedef double GLdouble;
typedef unsigned short GLhalf;
typedef float GLclampf;
typedef unsigned int GLbitfield;
typedef signed char GLbyte;
typedef short GLshort;
typedef void GLvoid;
typedef int64_t GLint64;
typedef float GLfloat;
typedef struct __GLsync* GLsync;
typedef int GLint;

const GLenum GL_ARRAY_BUFFER = 0x8892;
const GLenum GL_FRAGMENT_SHADER = 0x8B30;
const GLenum GL_VERTEX_SHADER = 0x8B31;

/*
STREAM: The data store contents will be modified once and used at most a few times.
STATIC: The data store contents will be modified once and used many times.
DYNAMIC: The data store contents will be modified repeatedly and used many times. The nature of access may be one of these:
DRAW: The data store contents are modified by the application, and used as the source for GL drawing and image specification commands.
READ: The data store contents are modified by reading data from the GL, and used to return that data when queried by the application.
COPY: The data store contents are modified by reading data from the GL, and used as the source for GL drawing and image specification commands.
*/
const GLenum GL_STREAM_DRAW = 0x88E0;
const GLenum GL_STREAM_READ = 0x88E1;
const GLenum GL_STREAM_COPY = 0x88E2;
const GLenum GL_STATIC_DRAW = 0x88E4;
const GLenum GL_STATIC_READ = 0x88E5;
const GLenum GL_STATIC_COPY = 0x88E6;
const GLenum GL_DYNAMIC_DRAW = 0x88E8;
const GLenum GL_DYNAMIC_READ = 0x88E9;
const GLenum GL_DYNAMIC_COPY = 0x88EA;

const GLbitfield GL_COLOR_BUFFER_BIT = 0x00004000;

const GLboolean GL_FALSE = 0;
const GLboolean GL_TRUE = 1;

const GLenum GL_BYTE = 0x1400;
const GLenum GL_UNSIGNED_BYTE = 0x1401;
const GLenum GL_SHORT = 0x1402;
const GLenum GL_UNSIGNED_SHORT = 0x1403;
const GLenum GL_INT = 0x1404;
const GLenum GL_UNSIGNED_INT = 0x1405;
const GLenum GL_FLOAT = 0x1406;
const GLenum GL_2_BYTES = 0x1407;
const GLenum GL_3_BYTES = 0x1408;
const GLenum GL_4_BYTES = 0x1409;
const GLenum GL_DOUBLE = 0x140A;

const GLenum GL_POINTS = 0x0000;
const GLenum GL_LINES = 0x0001;
const GLenum GL_LINE_LOOP = 0x0002;
const GLenum GL_LINE_STRIP = 0x0003;
const GLenum GL_TRIANGLES = 0x0004;
const GLenum GL_TRIANGLE_STRIP = 0x0005;
const GLenum GL_TRIANGLE_FAN = 0x0006;
const GLenum GL_QUADS = 0x0007;
const GLenum GL_QUAD_STRIP = 0x0008;
const GLenum GL_POLYGON = 0x0009;

// Texture
const GLenum GL_TEXTURE0 = 0x84C0;
const GLenum GL_TEXTURE1 = 0x84C1;
const GLenum GL_TEXTURE2 = 0x84C2;
const GLenum GL_TEXTURE3 = 0x84C3;
const GLenum GL_TEXTURE4 = 0x84C4;
const GLenum GL_TEXTURE5 = 0x84C5;
const GLenum GL_TEXTURE6 = 0x84C6;
const GLenum GL_TEXTURE7 = 0x84C7;
const GLenum GL_TEXTURE8 = 0x84C8;
const GLenum GL_TEXTURE9 = 0x84C9;
const GLenum GL_TEXTURE10 = 0x84CA;
const GLenum GL_TEXTURE11 = 0x84CB;
const GLenum GL_TEXTURE12 = 0x84CC;
const GLenum GL_TEXTURE13 = 0x84CD;
const GLenum GL_TEXTURE14 = 0x84CE;
const GLenum GL_TEXTURE15 = 0x84CF;
const GLenum GL_TEXTURE16 = 0x84D0;
const GLenum GL_TEXTURE17 = 0x84D1;
const GLenum GL_TEXTURE18 = 0x84D2;
const GLenum GL_TEXTURE19 = 0x84D3;
const GLenum GL_TEXTURE20 = 0x84D4;
const GLenum GL_TEXTURE21 = 0x84D5;
const GLenum GL_TEXTURE22 = 0x84D6;
const GLenum GL_TEXTURE23 = 0x84D7;
const GLenum GL_TEXTURE24 = 0x84D8;
const GLenum GL_TEXTURE25 = 0x84D9;
const GLenum GL_TEXTURE26 = 0x84DA;
const GLenum GL_TEXTURE27 = 0x84DB;
const GLenum GL_TEXTURE28 = 0x84DC;
const GLenum GL_TEXTURE29 = 0x84DD;
const GLenum GL_TEXTURE30 = 0x84DE;
const GLenum GL_TEXTURE31 = 0x84DF;

// TextureTarget
const GLenum GL_TEXTURE_1D = 0x0DE0;
const GLenum GL_TEXTURE_2D = 0x0DE1;
const GLenum GL_TEXTURE_3D = 0x806F;
const GLenum GL_TEXTURE_1D_ARRAY = 0x8C18;
const GLenum GL_TEXTURE_2D_ARRAY = 0x8C1A;
const GLenum GL_TEXTURE_RECTANGLE = 0x84F5;
const GLenum GL_TEXTURE_CUBE_MAP = 0x8513;
// GL_TEXTURE_CUBE_MAP_ARRAY (OpenGL 4?)
const GLenum GL_TEXTURE_BUFFER = 0x8C2A;
const GLenum GL_TEXTURE_2D_MULTISAMPLE = 0x9100;
const GLenum GL_TEXTURE_2D_MULTISAMPLE_ARRAY = 0x9102;

// TextureParameterName
const GLenum GL_TEXTURE_MAG_FILTER = 0x2800;
const GLenum GL_TEXTURE_MIN_FILTER = 0x2801;
const GLenum GL_TEXTURE_WRAP_S = 0x2802;
const GLenum GL_TEXTURE_WRAP_T = 0x2803;

// TextureWrapMode
const GLenum GL_CLAMP = 0x2900;
const GLenum GL_REPEAT = 0x2901;
const GLenum GL_CLAMP_TO_EDGE = 0x812F;

// TextureMagFilter
const GLenum GL_NEAREST = 0x2600;
const GLenum GL_LINEAR = 0x2601;

// PixelFormat
const GLenum GL_COLOR_INDEX = 0x1900;
const GLenum GL_STENCIL_INDEX = 0x1901;
const GLenum GL_DEPTH_COMPONENT = 0x1902;
const GLenum GL_RED = 0x1903;
const GLenum GL_GREEN = 0x1904;
const GLenum GL_BLUE = 0x1905;
const GLenum GL_ALPHA = 0x1906;
const GLenum GL_RGB = 0x1907;
const GLenum GL_RGBA = 0x1908;
const GLenum GL_LUMINANCE = 0x1909;
const GLenum GL_LUMINANCE_ALPHA = 0x190A;
const GLenum GL_RGBA8 = 0x8058;

// Capabilities
const GLenum GL_BLEND = 0x0BE2;

// BlendingFactorDest
const GLenum GL_ZERO = 0;
const GLenum GL_ONE = 1;
const GLenum GL_SRC_COLOR = 0x0300;
const GLenum GL_ONE_MINUS_SRC_COLOR = 0x0301;
const GLenum GL_SRC_ALPHA = 0x0302;
const GLenum GL_ONE_MINUS_SRC_ALPHA = 0x0303;
const GLenum GL_DST_ALPHA = 0x0304;
const GLenum GL_ONE_MINUS_DST_ALPHA = 0x0305;

// BlendingFactorSrc
//      GL_ZERO
//      GL_ONE
const GLenum GL_DST_COLOR = 0x0306;
const GLenum GL_ONE_MINUS_DST_COLOR = 0x0307;
const GLenum GL_SRC_ALPHA_SATURATE = 0x0308;
//      GL_SRC_ALPHA
//      GL_ONE_MINUS_SRC_ALPHA
//      GL_DST_ALPHA
//      GL_ONE_MINUS_DST_ALPHA

// ErrorCode
const GLenum GL_NO_ERROR = 0;
const GLenum GL_INVALID_ENUM = 0x0500;
const GLenum GL_INVALID_VALUE = 0x0501;
const GLenum GL_INVALID_OPERATION = 0x0502;
const GLenum GL_STACK_OVERFLOW = 0x0503;
const GLenum GL_STACK_UNDERFLOW = 0x0504;
const GLenum GL_OUT_OF_MEMORY = 0x0505;

// OpenGL 1 functions (linked at load-time)
extern "C"
{
    __declspec(dllimport) void __stdcall glBlendFunc(GLenum sfactor, GLenum dfactor);
    __declspec(dllimport) void __stdcall glBindTexture(GLenum target, GLuint texture);
    __declspec(dllimport) void __stdcall glClear(GLbitfield mask);
    __declspec(dllimport) void __stdcall glClearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
    __declspec(dllimport) void __stdcall glDeleteTextures(GLsizei n, const GLuint* textures);
    __declspec(dllimport) void __stdcall glDrawArrays(GLenum mode, GLint first, GLsizei count);
    __declspec(dllimport) void __stdcall glEnable(GLenum cap);
    __declspec(dllimport) void __stdcall glGenTextures(GLsizei n, GLuint* textures);
    __declspec(dllimport) GLenum __stdcall glGetError();
    __declspec(dllimport) void __stdcall glTexImage2D(GLenum target,
                                                      GLint level,
                                                      GLint internalformat,
                                                      GLsizei width,
                                                      GLsizei height,
                                                      GLint border,
                                                      GLenum format,
                                                      GLenum type,
                                                      const void* data);
    __declspec(dllimport) void __stdcall glTexParameterf(GLenum target, GLenum pname, GLfloat param);
    __declspec(dllimport) void __stdcall glTexParameterfv(GLenum target, GLenum pname, const GLfloat* params);
    __declspec(dllimport) void __stdcall glTexParameteri(GLenum target, GLenum pname, GLint param);
    __declspec(dllimport) void __stdcall glTexParameteriv(GLenum target, GLenum pname, const GLint* params);
    __declspec(dllimport) void __stdcall glViewport(GLint x, GLint y, GLsizei width, GLsizei height);
}

// OpenGL 2
inline void(__stdcall* glActiveTexture)(GLenum texture);
inline void(__stdcall* glAttachShader)(GLuint program, GLuint shader);
inline void(__stdcall* glBindBuffer)(GLenum target, GLuint buffer);
inline void(__stdcall* glBufferData)(GLenum target, GLsizeiptr size, const void* data, GLenum usage);
inline void(__stdcall* glCompileShader)(GLuint shader);
inline GLuint(__stdcall* glCreateProgram)(void);
inline GLuint(__stdcall* glCreateShader)(GLenum shaderType);
inline void(__stdcall* glDeleteProgram)(GLuint program);
inline void(__stdcall* glDeleteShader)(GLuint shader);
inline void(__stdcall* glEnableVertexAttribArray)(GLuint index);
inline void(__stdcall* glGenBuffers)(GLsizei n, GLuint* buffers);
inline void(__stdcall* glGenerateMipmap)(GLenum target);
inline void(__stdcall* glGenerateTextureMipmap)(GLuint texture);
inline GLint(__stdcall* glGetUniformLocation)(GLuint program, const GLchar* name);
inline void(__stdcall* glLinkProgram)(GLuint program);
inline void(__stdcall* glShaderSource)(GLuint shader, GLsizei count, const GLchar** string, const GLint* length);
inline void(__stdcall* glTexImage3D)(GLenum target,
                                     GLint level,
                                     GLint internalformat,
                                     GLsizei width,
                                     GLsizei height,
                                     GLsizei depth,
                                     GLint border,
                                     GLenum format,
                                     GLenum type,
                                     const void* data);
inline void(__stdcall* glTexSubImage3D)(GLenum target,
                                        GLint level,
                                        GLint xoffset,
                                        GLint yoffset,
                                        GLint zoffset,
                                        GLsizei width,
                                        GLsizei height,
                                        GLsizei depth,
                                        GLenum format,
                                        GLenum type,
                                        const void* pixels);
inline void(__stdcall* glUniformMatrix4fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
inline void(__stdcall* glUseProgram)(GLuint program);
inline void(__stdcall* glVertexAttribPointer)(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void* pointer);

// OpenGL 3
inline void(__stdcall* glBindVertexArray)(GLuint array);
inline void(__stdcall* glGenVertexArrays)(GLsizei n, GLuint* arrays);

// Opengl 4
using DEBUGPROC =
    void(__stdcall*)(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar* message, const void* userParam);
inline void(__stdcall* glDebugMessageCallback)(DEBUGPROC callback, const void* userParam);

// wglGetProcAddress forward-declaration
extern "C"
{
#if defined(_WIN64)
    using PROC = int64_t(__stdcall*)();
#else
    using PROC = int32_t(__stdcall*)();
#endif
    __declspec(dllimport) PROC(__stdcall wglGetProcAddress)(const char*);
}

// Load macro
#define LOAD(name) name = (decltype(name))wglGetProcAddress(#name)

// Try to load all function, will result in nullptr if extension is not supported
inline bool gl_init()
{
    LOAD(glActiveTexture);
    LOAD(glGenBuffers);
    LOAD(glGenVertexArrays);
    LOAD(glGenBuffers);
    LOAD(glGenVertexArrays);
    LOAD(glBindVertexArray);
    LOAD(glBindBuffer);
    LOAD(glCreateShader);
    LOAD(glShaderSource);
    LOAD(glCompileShader);
    LOAD(glAttachShader);
    LOAD(glLinkProgram);
    LOAD(glGetUniformLocation);
    LOAD(glCreateProgram);
    LOAD(glUseProgram);
    LOAD(glUniformMatrix4fv);
    LOAD(glDeleteProgram);
    LOAD(glDeleteShader);
    LOAD(glBufferData);
    LOAD(glVertexAttribPointer);
    LOAD(glEnableVertexAttribArray);
    LOAD(glDebugMessageCallback);
    LOAD(glGenerateMipmap);
    LOAD(glGenerateTextureMipmap);
    LOAD(glTexImage3D);
    LOAD(glTexSubImage3D);

    return true;
}