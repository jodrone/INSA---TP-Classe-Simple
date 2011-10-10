#########################################
# Makefile pour le TP N°1 de C++		#
# Par	Tristan Pourcelot				#
#########################################


## Conf générale
NUM_BINOME=B3213
DOSSIER_SOURCE=src
NOM_EXEC=IntervalSet

## Conf de compilation
CC=gcc
CFLAGS=-W -Wall

## Documentation
DOSSIER_DOC=doc
NOM_SPEC_FINAL=$(NUM_BINOME)_spec
NOM_SPEC_INITIAL=$(NUM_BINOME)_specif
NOM_MAN_FINAL=$(NUM_BINOME)_man
NOM_MAN_INITIAL=$(NUM_BINOME)_manuel

all : doc


#Gestion de la documentation
doc : spec man clean_doc
	cd $(DOSSIER_DOC) && evince $(NOM_SPEC_FINAL).pdf &
	cd $(DOSSIER_DOC) && evince $(NOM_MAN_FINAL).pdf &
	

clean_doc :
	cd $(DOSSIER_DOC) && rm *.aux *.log && rm *.out && cd ..

spec :
	cd $(DOSSIER_DOC) && pdflatex $(NOM_SPEC_INITIAL).tex && mv $(NOM_SPEC_INITIAL).pdf $(NOM_SPEC_FINAL).pdf
	cd ..

man :
	cd $(DOSSIER_DOC) && pdflatex $(NOM_MAN_INITIAL).tex && mv $(NOM_MAN_INITIAL).pdf $(NOM_MAN_FINAL).pdf
	cd ..

.PHONY: clean_doc
