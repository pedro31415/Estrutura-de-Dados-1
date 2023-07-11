# Estrutura-de-Dados-1
Estudo sobre Estrutura de dados no **IFMA - Campus Imperatriz**

Essa matéria foi realizada no **3ºperíodo** do curso e creio que esse 
repositório poderá ser de extrema importância caso o leitor esteja tendo 
dificuldades sobre está matéria.

## O que é Estrutura de Dados?
Estrutura de Dados é uma forma de organizar os dados, e sobre isso
deve-se saber que dependendo do seu problema, você vai utilizar uma 
estrutura x ou y. No decorrer do período aprendemos sobre algumas 
estrutura de dados, como por exemplo:

* Pilha **(stack)**
  1. Implementação de uma pilha
* Fila **(queue)**
  1. fia circular
  2. Implementação de uma fila
* Lista **(list)**
  1. Lista encadeada
  2. lista duplamente encadeada
 
  ## Diferença entre Estrutura de Dados estático X Estrutura de Dados dinâmica
  Antes de adentrarmos no que diz respeito as estruturas que eu citei acima, devemos
  ter noção sobre o que é um tipo estático e a um tipo dinâmico. O tipo estático
  o próprio nome já é explicativo, ou seja, é um estrutura que você não pode manipular o tamanho
  de sua estrutura, por exemplo um **array**, onde você dá um certo tamannho para ele. Já uma estrutura dinâmica
  você pode [alocar memória](https://www.inf.ufpr.br/roberto/ci067/10_aloc.html) fazendo com que você determine o
  tamanho da sua estrutura. Isso foi muito importante pois imagina se não houvesse essa ferramenta, como iriamos manipular
  dados enormes? Eu fiz um breve resumo sobre a diferença delas porém se você quiser ir afundo [clique aqui!](https://acervolima.com/estrutura-de-dados-estaticos-vs-estrutura-de-dados-dinamica/)

  ### Estruturas estudadas
  Uma pilha é uma estrutura de dados que se utiliza de um sistema de armazenamento **(LIFO)** que significa " _Last In, Firs out_"
  que significa que o último que entrou na pilha será o primeiro a sair dela. Para que ocorra esse processo, utilizamos a função
  **push()**, que faz justamente a insercção do elemento no final da pilha, já a retirada do elemento utiliza-se da função **pop()**.

  Uma fila
  é uma estrutura de dados que tem como regra o **(FIFO)** que significa "_First in, First out_", ou seja, o primeiro que entra na fila
  é o primeiro que sai dela, de modo geral é literalmente uma fila de verdade, onde se você chega primeiro você vai sair dela primeiro, a não ser que
  seja uma fila de prioridade, ai já estariamos falando de outra implementação da fila. A fila que também chamamos de **queue** tem a função **enqueue** que
  vai inserir os elementos nela e a função **dequeue** que irar fazer a remoção do elemento.

  Uma lista é um pouco mais complexo, porque ela não utiliza--se de uma parâmetro como LIFO ou FIFO, nesse caso você pode adicionar o elemento em qualquer lugar
  dela. Sua função de **add()** vai inserir os elementos dentro dela, se trantando de uma lista estática você irar passar a posição do elemento e se for uma encadeada, vai utiliza-se
  utilizar de ponteiros para a criação de nós que vai conectar os elementos, sem contar na alocação dinâmica que deverá ser utilizada, já o **remover()** vai liberar o espaço
  de memória da qual o elemento que você queria retirar da lista.

### Resumo 

A Estrutura de Dados assim como outros estudos de programação é muito importante uma vez que você vai quebrar muita a cabeça com os códigos e irar aprimorar
sua lógica e seus próprios algoritmos, até mesmo se perguntando se tal algoritmo era o ideal naquele código. Esse foi meus estudos ao decorrer do 3º Período
e espero que possa ter ajudado você, além disso deixarei alguns vídeos e sites que me ajudaram e que poderão ser eficazes quando vocês estiverem estudando sobre 
este grande assunto, que é Estrutura de Dados. Segue os links:

* [Estruturas de dados: uma introdução](https://www.alura.com.br/artigos/estruturas-de-dados-introducao)
* [As principais estruturas de dados que você deve conhecer para sua próxima entrevista de programação](https://www.freecodecamp.org/portuguese/news/as-principais-estruturas-de-dados-que-voce-deve-conhecer-para-sua-proxima-entrevista-de-programacao/)
* [Introduction to Stacks](https://www.youtube.com/watch?v=I37kGX-nZEI)
* [Introduction to Stack – Data Structure and Algorithm Tutorials](https://www.geeksforgeeks.org/introduction-to-stack-data-structure-and-algorithm-tutorials/)
* [Pointers and dynamic memory - stack vs heap](https://www.youtube.com/watch?v=_8-ht2AKyH4)
* [https://www.geeksforgeeks.org/what-is-linked-list/](https://www.geeksforgeeks.org/what-is-linked-list/)
* [Linked list Data Structure](https://www.programiz.com/dsa/linked-list)
* [Introduction to Circular Queues](https://www.youtube.com/watch?v=ihEmEcO2Hx8)
* [Estrutura de Dados em c](https://www.youtube.com/watch?v=0U0EvPQl26k&list=PLqJK4Oyr5WSjQ584hwqaHJYDpDcYqS-HK)


  

