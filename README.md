GLpp
============
Header-only Windows OpenGL loader with enum types.  

```cpp
#include "glpp.hpp"

int main(int argc, const char* argv[])
{
    // Create and activate OpenGL context here
    ...
    glInit(); // Bind OpenGL functions
    ...
    GLerror err = glGetError(); // The debugger can now interpret it as "GL_INVALID_ENUM" instead of the value 1280.
```

You currently need to append glpp.hpp manually if your function is not present. You can also remove binds that your are not using.
