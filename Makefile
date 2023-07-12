#
# Makefile for csmk dll library and test
#

DIRS = src tst

all:
		for i in $(DIRS) ; do \
		  $(MAKE) -C $$i install ; \
		done

clean:
		for i in $(DIRS) ; do \
		  $(MAKE) -C $$i clean ; \
		done
		rm -rf ./build
		rm -f *~

dist:	clean
		(cd .. ; \
		 tar -cvf csmk_dll.tar csmk_dll ; \
		 gzip -f csmk_dll.tar)
