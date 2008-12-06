LD = gcc

libJniBridge.jnilib: libJniBridge.so
	$(LD) -bundle -o libJniBridge.jnilib JniBridge.o -framework JavaVM -L/System/Library/Frameworks/JavaVM.framework/Libraries

libJniBridge.so: JniBridge.o
	gcc -dynamic -O -Wl,-flat_namespace -undefined suppress -o libJniBridge.so JniBridge.o
	
clean:
	rm *.o *.class *.so
	
JniBridge.o: JniBridge.c JniBridge.h
	gcc -c -I/System/Library/Frameworks/JavaVM.framework/Headers JniBridge.c
	
JniBridge.h: JniBridge.class
	javah -jni JniBridge
	
JniBridge.class: JniBridge.java
	javac JniBridge.java