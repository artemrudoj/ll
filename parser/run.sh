#!/bin/bash






grep "GL_APICALL " gl3.h gl3ext.h gl2ext.h | grep "GL_API.*" -o | sed 's/GL_APICALL //g' | sed 's/GL_APIENTRY //g' | sed 's/;//g' | sed 's/  */ /g' | sed 's/ (/(/g' > prot
grep "EGLAPI " egl.h eglext.h | grep "EGLAPI.*" -o | sed 's/EGLAPI //g' | sed 's/EGLAPIENTRY //g' | sed 's/;//g' >> prot
grep -o "(.*"  prot | sed 's/ \*[^,]*, /\* /g' | \
sed 's/ \*\*[^,]*, /\*\* /g'  | \
sed 's/ \*\*[^)]*)/\*\*/g'  | \
sed 's/ [^,^ ]*, / /g' | \
sed 's/(//g'| \
sed 's/ \*[^ ]*)$/\*/g' | \
sed 's/ [^ ]*)$//g' | sed 's/^ //g'| sed 's/struct //g' > argstypes
sed 's/ const//g' argstypes | sed 's/const //g'  > argstypes2
grep -o " gl[^(]*" prot | sed 's/ //g' > name
grep -o " egl[^(]*" prot | sed 's/ //g' >> name
./createlib2.py
./createlib3.py
rm prot argstypes argstypes2 name out
