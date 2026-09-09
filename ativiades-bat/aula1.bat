@echo off
set PASTA=C:\xampp\htdocs\smartcart-software-display
set PASTA_ATUAL=%cd%

echo Criando o projeto > log.txt

if exist "%PASTA%" (
    echo A pasta ja existe.
) else (
    echo A pasta nao existe. Criando agora...
    :: mkdir "%PASTA%"
    cd C:\xampp\htdocs\
    git clone https://github.com/caio-triches/smartcart-software-display.git
    
    echo Pasta criada com sucesso >> %PASTA_ATUAL%\log.txt
    date /t >>  %PASTA_ATUAL%\log.txt
    time /t >>  %PASTA_ATUAL%\log.txt

)

pause