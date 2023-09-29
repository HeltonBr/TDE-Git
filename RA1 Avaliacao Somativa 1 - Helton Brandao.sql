create database Helton;
use Helton;

create table TBmarca(
 cod int primary key,
 descricao varchar(100)
);

insert into TBmarca values (1,"Honda");
insert into TBmarca values (2,"Mercedes");
insert into TBmarca values (3,"Jeep");
insert into TBmarca values (4,"Volvo");
insert into TBmarca values (5,"BMW");

create table TBmodelo(
 cod int primary key,
 descricao varchar(100),
 marca int,
 foreign key (marca) references TBmarca(cod)
);

insert into TBmodelo values (1,"Fit/Coupé",1);
insert into TBmodelo values (2,"Classic",2);
insert into TBmodelo values (3,"Compass",3);
insert into TBmodelo values (4,"XC40",4);
insert into TBmodelo values (5,"Z3",5);

create table TBcor(
 cod int primary key,
 descricao varchar(100)
);

insert into TBcor values (1,"Branco solido");
insert into TBcor values (2,"Preto solido");
insert into TBcor values (3,"Vermelho solido");
insert into TBcor values (4,"Branco Perolizado");
insert into TBcor values (5,"Preto Perolizado");

create table TBcombustivel(
 cod int primary key,
 descricao varchar(50),
 marca int,
 modelo int,
 foreign key (marca) references TBmarca(cod),
 foreign key (modelo) references TBmodelo(cod)
);

insert into TBcombustivel values (1,"Flex - Gasolina e Alcool",1,2);
insert into TBcombustivel values (2,"Hibrido - Eletrico, Gasolina e Alcool",2,1);
insert into TBcombustivel values (3,"Diesel",3,1);
insert into TBcombustivel values (4,"MultiFlex - GLP,Gasolina e Alcool",4,1);
insert into TBcombustivel values (5,"Gasolina",5,1);

create table TBcarro(
 placa char (7) primary key,
 proprietario varchar (100),
 marca int,
 modelo int,
 ano int,
 cor int,
 combustivel int,
 foreign key (marca) references TBmarca,
 foreign key (modelo) references TBmodelo(cod),
 foreign key (cor) references TBcor(cod),
 foreign key (combustivel) references TBcombustivel(cod)
);

insert into TBcarro values (aaa0000,"Joao das Couves",1,1,2021,2,3);
insert into TBcarro values (bbb0000,"Jose das Couves",2,2,2020,1,3);
insert into TBcarro values (ccc0000,"Maria das Couves",3,3,2022,1,3);
insert into TBcarro values (ddd0000,"Paulo das Couves",4,4,2021,2,3);
insert into TBcarro values (eee0000,"Andreson das Couves",5,5,2023,3,3);

select proprietario, count(*)
from TBcarro
where ano
group by ano
order by ano > 2015
limit 1

