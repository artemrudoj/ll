#!/bin/bash 



#needs to get from func prototype its argumetns type.
grep -o "(.*"  prot | sed 's/ \*[^,]*, /\* /g' | \
sed 's/ \*\*[^,]*, /\*\* /g'  | \
sed 's/ \*\*[^)]*)/\*\*/g'  | \
sed 's/ [^,^ ]*, / /g' | \
sed 's/(//g'| \
sed 's/ \*[^ ]*)$/\*/g' | \
sed 's/ [^ ]*)$//g' | sed 's/^ //g'| sed 's/struct //g' > argstypes
sed 's/ const//g' argstypes | sed 's/const //g'  > argstypes2
