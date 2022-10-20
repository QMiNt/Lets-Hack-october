from cx_Freeze import setup ,Executable
setup(name = 'calculator',
      version ='2.0',
      author='dev',
      description='you can do simple calculations',
      executables=[Executable(r'E:\python\New folder\cal.py',
                              icon=r'E:\python\New folder\icon.ico',
                              shortcutName='calculator lite',
                              shortcutDir='DesktopFolder')])
