# Extra globals.
compilers = [meson.get_compiler('c'), meson.get_compiler('cpp')]
os_name = target_machine.system()

# Define Utilities.
ADD_DEFINE_TEMPLATE = '-D@0@'
ADD_DEFINE_VALUE_TEMPLATE = '-D@0@=@1@'

# Required for all auxiliary scripts.
Python = import('python')
python = Python.find_installation()

# Build debug
summary('Operating System', os_name)
summary('Python Path', python.path())
summary('Python Version', python.language_version())