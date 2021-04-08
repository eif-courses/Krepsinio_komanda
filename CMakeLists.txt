cmake_minimum_required(VERSION 3.17)
project(Krepsinio_komanda)

set(CMAKE_CXX_STANDARD 14)

add_executable(Krepsinio_komanda main.cpp Agentas.cpp Agentas.h Asistentas.cpp Asistentas.h ASMUO.cpp ASMUO.h LKL.cpp LKL.h RungtyniuTvarkarastis.cpp RungtyniuTvarkarastis.h Vadybininkas.cpp Vadybininkas.h Zaidejas.cpp Zaidejas.h Treneris.cpp Treneris.h Rungtynes.cpp Rungtynes.h EuroChamp.cpp EuroChamp.h)