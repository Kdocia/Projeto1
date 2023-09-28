ALL=main
all: $(ALL)

main: Projeto1.c Somar.c maximoValor.c media.c
	gcc -o $@ $^ -lm

%.o: %.c
	gcc -c $<

clean:
	rm -f*.s*.o output erro

destclean: clean
	rm -f $(ALL)

