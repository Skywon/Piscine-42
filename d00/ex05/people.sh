ldapsearch -xLLL "(uid=z*)" cn | grep "^c" | sort -r --ignore-case | cut -c5-999
