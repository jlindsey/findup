AUTOMAKE_OPTIONS = foreign
SUBDIRS = src man

EXTRA_DIST = README.md LICENSE man/findup.1.ronn
dist-hook:
	ronn $(top_distdir)/man/findup.1.ronn
	rm $(top_distdir)/man/findup.1.*

