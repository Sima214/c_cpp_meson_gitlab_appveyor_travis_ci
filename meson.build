project('example', ['c', 'cpp'], version: '0.1',
        default_options: [
            # Standard version to compile against.
            'c_std=c99', 'cpp_std=c++11',
            # Default is release build.
            'buildtype=release', 'optimization=2',
            # Extra optimizations: Link Time Optimization and no exceptions. 
            'b_lto=true', 'cpp_eh=none',
            # Install options.
            'strip=true'
        ])

# Build library.
subdir('src')