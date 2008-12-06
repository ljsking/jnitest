libJniBridge.so: JniBridge.o
	 g++ -shared -fpic -I/usr/lib/jvm/default-java/incldue -I/usr/lib/jvm/default-java/include/linux JniBridge.o -o libJniBridge.so
	
clean:
	rm *.o *.class *.so
	
JniBridge.o: JniBridge.cpp JniBridge.h
	g++ -c -fpic -I/usr/lib/jvm/default-java/incldue -I/usr/lib/jvm/default-java/include/linux JniBridge.cpp
	
JniBridge.h: JniBridge.class
	javah -jni JniBridge
	
JniBridge.class: JniBridge.java
	javac JniBridge.java


