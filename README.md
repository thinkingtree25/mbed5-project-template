**Test Environment:**

VirtualBox 7.0.18

Ubuntu 22.04.4

Python 3.10.12

Mbed CLI 1.10.4

GNU Arm Embedded Toolchain 9-2020-q2-update (https://developer.arm.com/downloads/-/gnu-rm)

Mbed 5: mbed-os-5.15.9 (https://github.com/ARMmbed/mbed-os/tree/mbed-os-5.15.9)

NUCLEO-F401RE (STM32F401RE)

-------------

**Test Commands:**

cd mbed5-project-template-main

mbed config GCC_ARM_PATH "/home/{USER NAME}/{GNU Arm Embedded Toolchain Directory}/bin"

pip install -r mbed-os/requirements.txt

> **To avoid compilation error, use one of the methods below**

> **Method 1: Modify Python packages**
> 
> File 1: /home/{USER NAME}/.local/lib/python3.10/site-packages/elftools/construct/lib/container.py
> 
> - Line 5: Change [from collections import MutableMapping] to [from collections.abc import MutableMapping]
>
> File 2: /home/{USER NAME}/.local/lib/python3.10/site-packages/intelhex/compat.py
> 
> - Line 60: Change [array_tobytes = getattr(array.array, "tobytes", array.array.tostring)] to [array_tobytes = getattr(array.array, "tobytes", array.array.tobytes)]

> **Method 2: Run hotfix command**
> 
> pip install fuzzywuzzy==0.18.0 intelhex==2.3.0 Jinja2==2.11.3 jsonschema==2.6.0 pyelftools==0.27

mbed compile -m NUCLEO_F401RE -t GCC_ARM

-------------

**Hotfix for Compilation Error:**

pip install fuzzywuzzy==0.18.0 intelhex==2.3.0 Jinja2==2.11.3 jsonschema==2.6.0 pyelftools==0.27
