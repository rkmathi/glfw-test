# glfw-test

## How to build
### 1. Prepare glfw.

```
$ git clone https://github.com/glfw/glfw

$ cd /path/to/glfw

$ cmake -DCMAKE_INSTALL_PREFIX=/path/to/glfw/out . && make
#=> GLFW will be installed in `/path/to/glfw/out`.
```

### 2. Open Xcode and change `Build Settings` and `Build Phases`.
- BuildSettings
    - Search Paths
        - Header Search Paths
            - => `/path/to/glfw/out/include`
        - Library Search Paths
            - => `/path/to/glfw/src`
- Build Phases
    - Link Binary With Libraries
        - + `OpenGL.framework`
        - + `Cocoa.framework`
        - + `IOKit.framework`
        - + `CoreVideo.framework`
        - + (Add other...) `/path/to/glfw/lib/libglfw3.a`

### 3. Run.
