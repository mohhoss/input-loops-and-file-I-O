CC=g++
generate:       generate.o
        $(CC)   -Wall   -g      generate.o      -o      generate
generate.o:     generate.cc
        $(CC)   -Wall   -c      generate.cc
thresh: thresh.o
        $(CC)   -Wall   -g      thresh.o        -o      thresh
thresh.o:       thresh.cc
        $(CC)   -Wall   -c      thresh.cc
clean:
        rm      *.o
