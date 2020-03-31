project('example', ['c', 'cpp'], version: '0.1',
        default_options: [
            # Standard version to compile against.
            'c_std=c99', 'cpp_std=c++11',
            # Optimize by default.
            'buildtype=debugoptimized',
            # Extra diagnostic messages.
            'c_args=-Wextra', 'cpp_args=-Wextra',
            # Extra optimizations: Link Time Optimization and no exceptions. 
            'b_lto=true', 'cpp_eh=none',
            # Install options.
            'strip=true'
        ])

# Define Utilities.
ADD_DEFINE_TEMPLATE = '-D@0@'
ADD_DEFINE_VALUE_TEMPLATE = '-D@0@=@1@'

# Build library.
subdir('src')

# Define Tests.
subdir('test')