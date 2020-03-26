all: make_per_fill_json

make_per_fill_json : make_per_fill_json.cc
	g++ --std=c++11 `root-config --libs` -lMinuit `root-config --cflags` -Wall -Werror\
		make_per_fill_json.cc -o make_per_fill_json
