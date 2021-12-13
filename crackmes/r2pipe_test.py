
import r2pipe
import sys
r = r2pipe.open(sys.argv[1])
print(r.cmd('iS;aaa;s main;pd 5;pds'))
