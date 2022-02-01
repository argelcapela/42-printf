<!--<div id="portfolio-slideshow-items" class="hide-on-portfolio" visibility="0">
    
</div>
-->

<div class="hide-on-portfolio">

<div align="center">
	<p><i>"Eu descobri com o tempo e experiência que todo aquele que alcança grande sucesso na vida, antes passa pelo ABISMO do fracasso."</i><br><b>Carlos Wizard Martins</b></p>
<br><br>
	<img src="https://github.com/argelcapela/argelcapela.rf.gd/blob/main/assets/img/galeria/portfolio_img_42-printf.jpg?raw=true" width="250px">
</div>
<br><br>
	
# :sparkles: O que é o 42-printf ?
<b>Trata-se de uma recodificação da função clássica printf. Excelente para aprender sobre argumentos variados, funções variádicas, um pouco do que tem debaixo do pano de I/O do OS e formatar um projeto grande, com vários arquivos.. Importante para aprender a lidar com um projeto mais complicado, grande que requer mais organização, boas práticas e familiaridade com a linguagem.</b><br>
</div>

<div class="col-12">

# :wrench: Tecnologias utilizadas:<br>
<div style="display: inline_block">
    <img align="center" alt="gel-Js" height="30" width="40" src="https://raw.githubusercontent.com/devicons/devicon/master/icons/c/c-original.svg">

</div>

<div class="col-12">

# :rocket: Rodando o projeto:<br>

	
</div>
<br>
<div class="col-12">
    
# :pushpin: O que eu aprendi e como foi desenvolvido esse projeto?<br>
<b>1) Conhecimento adquiridos para fazer o 42-printf</b><br>
<li><a href="#algoritmo">Qual a lógica do printf com bônus? 😈😈</a></li>
<li><a href="#bases">Dominando Conversão de Bases! 😎👌</a></li>

<br>
	
<b>2) Brinde</b>
<li><a href="#step-by-step"> 42-printf Passo a Passo</a></li>
<li><a href="#outras">Outras Coisas Legais</a></li>
<li><a href="#fontes">Fontes</a></li>
</div>
<br>	
	
<div class="col-12">
	
# :handshake: Colaboradores:<br>
<table>
  <tr>
    <td align="center">
      <a href="http://github.com/argelcapela">
        <img src="https://avatars.githubusercontent.com/u/79276276?s=400&u=055b803f4708d59eaf50208ba601f85844125757&v=4" width="100px;" alt="Foto de Argel Capela!"/><br>
        <sub>
          <b>Argel Capela</b>
        </sub>
      </a>
    </td>
  </tr>
</table>
<br><br>
<i>Obrigado 🎁 a Welton por me dar uma luz para eu saber por onde começar o projeto, valeu mestre Jedi. 👽✌😁👍 </i>
</div>
	
<div class="col-12">
	
# :dart: Status do projeto:<br>
<img src="https://github.com/argelcapela/argelcapela.rf.gd/blob/main/assets/icons/desenvolvimento.png?raw=true" width="250px" height="200px">
</div>
	
<br>

<div class="col-12">
	
# :clipboard: Nota:<br>
<img src="#" width="150px" height="150px" alt="nota gnl">
</div>
	
<br>

<div class="col-12">
	
# :bug:	 Erros:<br>
<p>Identificou um erro? Por favor me informe! ou fique a vontade para criar um *issue* aqui no Github e contribuir.</p>
<p>Também fique a vontade para opinar, criticar, xingar, elogiar etc. Para mim é tudo a mesma coisa, fonte de crescimento pessoal. Eu não sei tudo, mas estou buscando ser um profissional 1% melhor a cada dia.</p>
</div>
	
<div class="col-12">
<p>Não esqueça de dar um ⭐️ se você gostou, ou se esse repositório te ajudou de alguma maneira, isso irá me ajudar muito! Obrigado, você é top! 😁👍</p>
</div>
	

	
	

<br><br><br>
<br><br><br>
<br><br>
	
<div align="center">

# :crown: 
	
</div>    
<br><br>
<br><br>

<a href="https://youtu.be/D9G1VOjN_84"><img src="https://img.youtube.com/vi/D9G1VOjN_84/maxresdefault.jpg" width="100%"></a>
<h2 id="algoritmo">Qual a lógica do Printf (😈 Com Bônus 😈)?</h2>
<br>	
	


<table align="center" width="100%">
<thead>
        <tr>
            <th colspan=3><h4><a href="https://www.freebsd.org/cgi/man.cgi?printf" target="_BLANK">ft_printf</a></h4></th>
        </tr>
        <tr>
            <th>Que negócio é esse mermão? 🙄</th>
            <th>Protótipo</th>
	    <th>Sintaxe</th>
        </tr>
</thead>

<tbody>
        <tr>
            <td>
		<p>"Como diria Jack Estripador, vamos por partes":</p>
<ul>
	<li>printf, 'print formatted', 'impressão formatada'</li>
	<li>Ele basicamente 'escreve' uma mensagem na tela.</li>
	<li>O primeiro argumento do printf é uma string, chamada de 'format specifier', ou "especificador de formato", essa string linda vai indicar 'COMO' a nossa mensagem na tela será exibida. Por exemplo podemos %d, isso signfica que o próximo argumento deve ser um número inteiro, etc.</li>
	<li>Dentro do 'format specifier' , nós temos substrings chamadas de argumentos, que começam em % e terminam em uma letra 'specifier'. Cada argumento tem a seguinte sintaxe brother, %[flags][width][.precision]specifier, cada um representa um tipo de dado diferente que será 'printado na tela'. Que?? 😯 Na prática fica mais fácil, só aceita que dói menos por enquanto valeu? 😎</li>
	<li>Dentro do 'format specifier', nós podemos ter 3 coisas:</li>
	<ol>
		<li>'Format specifier Argument': %[flags][width][.precision]specifier</li>
		<li>'Character Scape': tipo, \n que adiciona uma quebra de linha.</li>
		<li>'Plain characters': Texto comum.</li>
	</ol>
</ul>
	    </td>
            <td>ft_printf(const char* format, ...)</td>
	    <td><code>%[flags][width][.precision]specifier</code></td>
        </tr>
</tbody>
</table>
<br><br>
	
<table align="center">
<thead>
        <tr>
            <th colspan=4><h4>Flags</h4></th>
        </tr>
	 <tr>
            <th colspan="10"><h4>Indicam o que será exibido antes do resultado final printado. Em outras palavras, adicionam um prefixo ao resultado final printado.</h4></th>
        </tr>
        <tr>
            <th>Flag</th>
	    <th>Funciona em quais 'specifiers'?</th>
            <th>Descrição</th>
	    <th colspan="8">Exemplos</th>
        </tr>
</thead>
<tbody>
<tr>
            <td align="center">-</td>
	    <td>Todos que estão usando a flag (space), ou tem algum tipo de espaço a esquerda.</td>
            <td>Na net, é descrito como 'Left Adjustment', ai eu não tinha entendido NAAADAAA 🙄😡. Mas basicamente, se um argumento printado tem espaços a esquerda, e nós usamos - como flag, o valor a ser printado vai colar no canto esquerdo e o espaço vai parar no lado direito, é como uma inversão saca? Isso cria um efeito de alinhamento esquerdo. Agora sim faz sentido né? 🤩</td>
	    <td>
<ol>
<li>ft_printf("%-8i", -10);<br>
-10(space)(space)(space)(space)
</li>	
</ol>
	   </td>
</tr>
	
<tr>
            <td align="center">+</td>
	    <td>d, i (tipos números com sinal)</td>
            <td>Força o resultado do printf a ter um sinal de +, se esse número for positivo claro por padrão números positivos não exibem o +. 
		Para números negativos essa flag não funciona.</td>
	    <td align="left"> 
<ol>
<li>ft_printf("%d", 10);<br>
</li>
<br>
<li>ft_printf("%d", -10);<br>
-10
</li>
</ol>  
	    </td>
</tr>
		
<tr>
            <td align="center">#</td>
	    <td>x, X</td>
            <td>Adiciona 0x, ou 0X antes do resultado printado, se o mesmo é diferente de 0.</td>
	    <td>
<ol>
<li>ft_printf("%x\n", 10);<br>
a<br>
</li>
<br>
<li>ft_printf("%#x\n", 10);<br>
0xa
</li>
</ol>  
	    </td>
</tr>
	
<tr>
            <td align="center">(space)</td>
	    <td>all</td>
            <td>Adiciona um espaço antes do resultado printado. Quando um width é especificado, a quantidade de espaços é igual a diferença(-) entre o valor do with e a quantidade de caracteres ou algarismos(se tiver sinal sendo exibido, também conta) que está sendo printado.</td>
	    <td>
		*(space) é um backspace msm kk ' '
<ol>
<li>ft_printf("% 5d", 10);<br>
(space)10
</li>
<br>
<li>ft_printf("% 8i", -10);<br>
(space)(space)(space)(space)-10
</li>
<br>
<li>ft_printf("%8i", -10);<br>
(space)(space)(space)(space)-10
</li>
</ol>  
		    
	    </td>
</tr>
	
<tr>
            <td align="center">0</td>
            <td>d, i</td>
	    <td>É parecido com o (space) mas trocando espaços por zeros. Basicamente ele adiciona zeros a esquerda do número printado. A quantidade de zeros é igual a diferença entre o width especificado e a quantidade de algarismos(contando com o sinal, se ele é visível). Diferente de (space), colocando um só 0 antes do 'specifier' não adiciona 1 zero.</td>
	    <td>
<ol>
<li>ft_printf("%05d", 10);<br>
00010
</li>
<br>
<li>ft_printf("%08i", -10);<br>
-0000010
</li>
</ol>  
	    </td>
</tr>
</tbody>
<table>
<br><br>
   
<table align="center">
	<thead>
        <tr>
            <th colspan=3><h4>Width</h4></th>
        </tr>
        <tr>
            <th>Valor</th>
            <th>Descrição</th>
        </tr>
    </thead>
    <tbody>
	</thead>
        <tr>
            <td align="center">(número)</td>
            <td>
<ul>	
	<li>Indica a quantidade de vezes que as flags (space, 0) se repetem. Essa quantidade se zeros ou espaços é igual a diferença entre o width e a quantidade caracteres ou algarismos do valor a ser printado (contanto com sinal também, se ele está visível).</li>
	<li>Quando o 'width' é colocado sem flags, ele subentende que tem uma flag (space), ou seja adiciona espaços a esquerda.</li>
</ul>	
	</td>
        </tr>
        <tr>
            <td align="center">*</td>
            <td>O 'width' não é especificado no 'format specifier', mas sim, no argumento anterior, ao argumento que tem o valor passado para ser printado.</td>
        </tr>
    </tbody>
</table>
<br><br>

 <table align="center">   
<thead>
        <tr>
            <th colspan=3><h4>Precision</h4></th>
        </tr>
        <tr>
            <th>Valor</th>
            <th>Descrição</th>
        </tr>
</thead>
<tbody>
<tr>
    <td align="center">.(número)</td>
    <td>
<ul>
	<li>Para 's', indica a quantidade de caracteres que serão printados.</li>
	<li>Para 'd, i, u' indica a quantidade de zeros a esquerda. (Parecido com width, ou seja, a quantidade de zeros é igual a diferença entre precision e a quantidade de algarismos a ser printado, contando com o sinal se ele é visível.).</li> 
	<li>*Apenas para conhecimento pessoal, no printf oficial, o precision usado com a flag 'f', indica a quantidade de casas decimais depois da vírgula, ou seja, pode ser usado para simplificar números decimais.</li>
</ul>
    </td>
</tr>
<tr>
    <td align="center">.(*)</td>
    <td>O 'precision' não é especificado no 'format specifier', mas sim, no argumento anterior, ao argumento que tem o valor passado para ser printado.</td>
</tr>
</tbody>
</table>

<br><br>

<table align="center">
    <thead>
        <tr>
            <th colspan=3><h4>Specifiers</h4></th>
        </tr>
        <tr>
            <th>Letra (representa um tipo de dado a ser printado)</th>
            <th>Descrição</th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td align="center">%</td>
            <td>Escreve % na tela.</td>
        </tr>
        <tr>
            <td align="center">c</td>
            <td>Escreve um caracter na tela.</td>
        </tr>
        <tr>
            <td align="center">s</td>
            <td>Escreve uma string na tela.</td>
        </tr>
        <tr>
            <td align="center">p</td>
            <td>Escreve o endereço de memória de um ponteiro, em hexadecimal na tela. (0x é adicionado antes do valor.)</td>
        </tr>
        <tr>
            <td align="center">d</td>
            <td>Escreve um número decimal na tela.</td>
        </tr>
	<tr>
            <td align="center">i</td>
            <td>Quase igual ao anterior, escreve um número inteiro na tela.</td>
        </tr>
        <tr>
            <td align="center">u</td>
            <td>Escreve um 'unsigned int' na tela.</td>
        </tr>
        <tr>
            <td align="center">x or X</td>
            <td>Escreve um 'unsigned int', em base hexadecimal na tela, em letra minúscula ou maiúscula.</td>
        </tr>
    </tbody>
</table>
	

<br><br><br><br>
<b>Essa foi a minha lógica para o meu printf, tendo como base os pontos acima:</b>
<p>Não é a melhor de todas, mas foi como desenvolvi. #SempreAprendendo! 😁✌</p>
<img src="#" alt="Fluxograma printf"><br> 
<a href="https://miro.com/app/board/uXjVOUSeK6A=/?invite_link_id=432239742834">Clique aqui para uma melhor visualização</a>
<br><br>
	
<h2 id="bases">Partiu dominar a conversão entre bases? 😎👌</h2>


	
	
<br><br><br>
	
<h2 id="step-by-step">42-Printf Passo a Passo</h2><br>
<img src="https://github.com/argelcapela/argelcapela.rf.gd/blob/main/assets/icons/desenvolvimento.png?raw=true" width="250px" height="200px">
<a href="https://youtu.be/D9G1VOjN_84"><img src="https://img.youtube.com/vi/D9G1VOjN_84/maxresdefault.jpg" width="100%"></a>

<br><br>

<h2 id="outras">Outras coisas legais!</h2>

```
export PS1="\u > "
```

<p>Esconder o diretório do diretório atual do shell. Negócio chato ... 🤨</p>

<br><br>

		     
<br><br>

<h2 id="fontes">Fontes</h2>
<li><a href="#"> Link 1</a></li>



</div>


