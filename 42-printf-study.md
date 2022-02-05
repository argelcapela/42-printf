<h2 id="algoritmo">😈 Vamos entender o Printf com Bônus? 😈</h2>
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
	

<br><br><br>
<!--<b>Essa foi a minha lógica para o meu printf, tendo como base os pontos acima:</b>
<p>Não é a melhor de todas, mas foi como desenvolvi. #SempreAprendendo! 😁✌</p>
<img src="#" alt="Fluxograma printf"><br> 
<a href="https://miro.com/app/board/uXjVOUSeK6A=/?invite_link_id=432239742834">Clique aqui para uma melhor visualização</a>
<br><br>-->
	
<br><br>
	
<!--<h2 id="step-by-step">42-Printf Passo a Passo</h2><br>
<img src="https://github.com/argelcapela/argelcapela.rf.gd/blob/main/assets/icons/desenvolvimento.png?raw=true" width="250px" height="200px">
<a href="https://youtu.be/D9G1VOjN_84"><img src="https://img.youtube.com/vi/D9G1VOjN_84/maxresdefault.jpg" width="100%"></a>-->

<br><br>

<h2 id="outras">Outras coisas legais!</h2>

```
export PS1="\u > "
```

<p>Esconder o diretório do shell. Negócio chato ... 🤨</p>

<br><br>
	

<h2 id="fontes">Fontes</h2>
<li><a href="https://dicasdeprogramacao.com.br/as-10-conversoes-numericas-mais-utilizadas-na-computacao/#:~:text=A%20convers%C3%A3o%20num%C3%A9rica%20de%20n%C3%BAmeros,%22de%20baixo%20para%20cima%22.">10 conversões de base mais utilizadas</a></li>



</div>


