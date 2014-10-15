man_MANS = findup.1

findup.1: findup.1.ronn
	ronn findup.1.ronn

clean:
	rm -f findup.1 findup.1.html

dist: findup.1

.PHONY: clean dist

