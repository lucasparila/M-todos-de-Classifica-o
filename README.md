# Exercício - Métodos de Classificação 

> ℹ️ **NOTE:** Este repositório foi criado para armazenar e compartilhar os resultados obtidos em um exercício avaliativo da disciplina Estruturas de Dados do curso superior Tecnologias em Sistemas para a Internet, da instituição IFSP - Campus Araraquara.

><a href="https://github.com/lucasparila/Metodos-de-Ordenacao/blob/main/Documenta%C3%A7%C3%A3o/Relat%C3%B3rio%20-%20M%C3%A9todo%20de%20Ordena%C3%A7%C3%A3o.pdf" title="View PDF now"> 📕Clique aqui para ler o relatório</a>
 

## 🛠️ Instruções Para a Execução do Exercício
### Comparação de Algoritmos de Classificação

Implemente um programa em C que utilize os seguintes métodos de classificação:
- **Bubble Sort**
- **Selection Sort**
- **Insertion Sort**
- **Merge Sort**
- **Quick Sort**

O programa deve resolver 9 casos de teste e gerar uma tabela comparativa entre os métodos, considerando as métricas especificadas abaixo. Para cada caso, o vetor utilizado deve ser o mesmo para todos os algoritmos (ou seja, não deve haver variação de dados entre os algoritmos). 

#### Casos de Teste

1. **Melhor Caso 1**: Vetor classificado com 1.000 elementos.
2. **Melhor Caso 2**: Vetor classificado com 100.000 elementos.
3. **Melhor Caso 3**: Vetor classificado com 1.000.000 elementos.
4. **Caso Médio 1**: Vetor aleatório com 1.000 elementos.
5. **Caso Médio 2**: Vetor aleatório com 100.000 elementos.
6. **Caso Médio 3**: Vetor aleatório com 1.000.000 elementos.
7. **Pior Caso 1**: Vetor invertido com 1.000 elementos.
8. **Pior Caso 2**: Vetor invertido com 100.000 elementos.
9. **Pior Caso 3**: Vetor invertido com 1.000.000 elementos.

#### Métricas

Para cada método, o programa deve contabilizar as seguintes métricas:
- **Número de Comparações**: Quantidade de comparações realizadas pelo algoritmo.
- **Número de Trocas**: Quantidade de trocas realizadas pelo algoritmo.
- **Tempo Consumido**: Tempo total de execução do algoritmo.

#### Estrutura da Tabela Comparativa

A saída do programa deve ser uma tabela que compare os métodos de classificação em relação a cada caso de teste e métrica. A tabela deve ter o seguinte formato:

| Método       | Caso de Teste          | Comparações | Trocas | Tempo (s) |
|--------------|-------------------------|-------------|--------|-----------|
| Bubble Sort  | Melhor Caso 1           | ...         | ...    | ...       |
| Bubble Sort  | Melhor Caso 2           | ...         | ...    | ...       |
| Bubble Sort  | Melhor Caso 3           | ...         | ...    | ...       |
| ...          | ...                     | ...         | ...    | ...       |
| Quick Sort   | Pior Caso 3             | ...         | ...    | ...       |

Para cada combinação de método e caso de teste, preencha a tabela com o número de comparações, trocas e o tempo consumido em segundos.

#### Observações
- O mesmo vetor deve ser classificado por cada método de classificação.
- Ao medir o tempo de execução, utilize funções de medição de tempo precisas, como `clock()` da biblioteca `<time.h>`.

## ✨ Como Foi Feito?

- Foi utilizado o editor de código-fonte Visual Studio Code (VS Code).
- O código foi desenvolvido na linguagem C.  
- As tabelas e os gráficos de desempenho dos algoritmos foram criados no Excel.
- O relatório com a consolidação dos resultados foi desenvolvido no Word.

## 💻 Configurações Básicas da Máquina Utilizada para os Testes
- Processador: Intel(R) Core(TM) i5-10400F CPU @ 2.90GHz   2.90 GHz.
- RAM instalada: 8,00 GB (utilizável: 7,87 GB). 
- Tipo de sistema: Sistema operacional de 64 bits, processador baseado em x64. 
- Sistema operacional: Windows 11 Pro. 

## 📚 Materiais de Referências

- SOUZA, Jackson EG; RICARTE, João Victor G.; DE ALMEIDA LIMA, Náthalee Cavalcanti. Algoritmos
de Ordenação: Um estudo comparativo. Anais do Encontro de Computação do Oeste Potiguar
ECOP/UFERSA (ISSN 2526-7574), n. 1, 2017.
- ASCENCIO, Ana Fernanda Gomes; ARAÚJO, Graziela Santos de. Estruturas de dados: algoritmos, análise da complexidade e implementações em JAVA e C/C++. São Paulo: Pearson Prentice Hall, 2010.



## 👨‍💻 Feito Por

<p>
    <img 
      align=left 
      margin=10 
      width=80 
      s
    />
    <p>Lucas Eduardo Parila<br>
    <a href="https://github.com/lucasparila">GitHub</a> &nbsp;|&nbsp; 
    <a href="https://www.linkedin.com/in/lucas-eduardo-parila-18638b252/​">LinkedIn</a>
</p>
<p>
    <img 
      align=left 
      margin=10 
      width=80 
      s
    />
    <p>
    Matheus Correia<br>
    <a href="https://github.com/MatheusC8">GitHub</a> &nbsp;|&nbsp; 
    <a href="https://www.linkedin.com/in/lucas-eduardo-parila-18638b252/">LinkedIn</a>
</p>
<br/><br/>

---
