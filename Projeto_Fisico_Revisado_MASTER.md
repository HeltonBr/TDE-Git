# Projeto Físico Revisado — Versão Mestre Única

**Documento:** Projeto Físico Revisado (Mestre)  
**Versão global:** v2.1  
**Data:** 2026-04-14  
**Responsável:** Equipe de Arquitetura e Métodos

## Sumário executivo da estrutura final
1. Introdução
2. Referencial teórico
3. Desenvolvimento da ferramenta
4. Requisitos, critérios de aceite e impacto esperado
5. Modelagem e diagramas (macro)
6. Plano de testes e resultados
7. Riscos, limitações e contingências
8. Cronograma atualizado
9. Conclusão
10. Referências
11. Apêndices (A, B, C e D)

---

## 1. Introdução
**Revisão da seção:** v2.1 | 2026-04-14 | Equipe de Arquitetura e Métodos

### 1.1 Contextualização e problema
Transformar comentário cidadão em texto livre em linguagem administrativa auditável e reprodutível.

### 1.2 Justificativa
- Técnica: escalabilidade, padronização e rastreabilidade.
- Institucional: suporte à leitura gerencial de prioridades cidadãs.

### 1.3 Estado da arte e abordagens correlatas
Registrar que a solução implementada nesta entrega é de **IA simbólica em Power Query/Linguagem M**.

### 1.4 Objetivos
Objetivo geral e objetivos específicos vinculados a validação e explicabilidade.

### 1.5 Estrutura do documento
Corpo principal limpo e narrativo; detalhamento técnico e evidências extensas deslocados para apêndices.

## 2. Referencial teórico
**Revisão da seção:** v2.1 | 2026-04-14 | Equipe de Arquitetura e Métodos

### 2.1 E-participação e valor público da informação
### 2.2 Classificação textual, recuperação de informação e IA simbólica
### 2.3 Explicabilidade, rastreabilidade e escolha tecnológica

**Regra editorial:** cada referência deve sustentar escolha concreta de arquitetura, teste ou governança.

## 3. Desenvolvimento da ferramenta
**Revisão da seção:** v2.1 | 2026-04-14 | Equipe de Arquitetura e Métodos

### 3.1 Visão geral da solução
Versão v252 como motor simbólico modular.

### 3.2 Base de dados, entradas e saídas
Campos da planilha e papel do `Resumo da Demanda Automático`, com recorte real de planilha no corpo.

### 3.3 Arquitetura geral da ferramenta
Espinha: higienização → ONDE → contenção ONDE→OQUE → OQUE → fechamento/fallback → composição final.

### 3.4 Módulos principais
- 3.4.1 Higienização e preparação semântica — **CV-01 / DT-01**.
- 3.4.2 ONDE — **CV-02 / DT-02**.
- 3.4.3 Contenção ONDE→OQUE — **CV-03 / DT-03**.
- 3.4.4 OQUE — **CV-04 / DT-04**.
- 3.4.5 Fechamento final, Patch S e fallback — **CV-05 / DT-05**.
- 3.4.6 Composição do resumo automático — **CV-06 / DT-06**.

### 3.5 Alterações introduzidas a partir do protótipo
Preservação da espinha com robustecimento modular e fronteiras semânticas.

### 3.6 Governança de dados, ética e conformidade
Finalidade, minimização, pseudonimização, controle de acesso, risco de viés e revisão humana em ambiguidades.

## 4. Requisitos, critérios de aceite e impacto esperado
**Revisão da seção:** v2.1 | 2026-04-14 | Equipe de QA e Governança

### 4.1 Requisitos funcionais e não funcionais
### 4.2 Critérios de aceite
### 4.3 Impacto esperado

**Regra de rastreabilidade:** requisito relevante deve apontar para teste (cap. 6), diagrama (cap. 5 ou Apêndice A) e caso visual (Apêndice B).

## 5. Modelagem e diagramas
**Revisão da seção:** v2.1 | 2026-04-14 | Equipe de Arquitetura Técnica

### 5.1 Mantido no corpo principal
Somente diagramas macro para leitura acadêmica e defesa.

### 5.2 Movido para o Apêndice A
Sequência detalhada, atividades detalhadas, contenção ONDE→OQUE e modelo lógico de entidades informacionais.

### 5.3 Regra de desenho
Corpo principal sem figuras densas; detalhamento técnico auditável no apêndice.

## 6. Plano de testes e resultados
**Revisão da seção:** v2.1 | 2026-04-14 | Equipe de QA e Governança

### 6.1 Escopo e metodologia
### 6.2 Protocolo de avaliação e reprodutibilidade
### 6.3 Matriz de rastreabilidade
Formato: `requisito → teste → funcionalidade → diagrama correlato → caso visual correlato → evidência → resultado esperado/obtido → status`.

### 6.4 Evidências visuais da planilha
Recortes reais de entrada → contexto → saída.

### 6.5 Resultados parciais
### 6.6 Discussão
### 6.7 Roteiro de demonstração


### 6.8 Critério de validade das propostas de melhoria
Toda proposta de atualização deve declarar: problema alvo, módulo impactado, evidência esperada, risco colateral e forma de auditoria.
A decisão de adoção deve ser registrada em `AVALIACAO_ADERENCIA_ATUALIZACOES.md`.

## 7. Riscos, limitações e contingências
**Revisão da seção:** v2.1 | 2026-04-14 | Equipe de Riscos

7.1 Ambiguidade semântica  
7.2 Resíduos ONDE→OQUE  
7.3 Dependência de curadoria lexical  
7.4 Limites de automatização sem revisão humana  
7.5 Contingências de evolução futura

## 8. Cronograma atualizado
**Revisão da seção:** v2.1 | 2026-04-14 | PMO do Projeto

- 22/04/2026: entrega do Projeto Físico Revisado.
- 28/04/2026 a 30/04/2026: defesa do protótipo.
- 09/06/2026: entrega do Projeto Final.
- 16/06/2026 a 18/06/2026: defesa final.

## 9. Conclusão
**Revisão da seção:** v2.1 | 2026-04-14 | Equipe de Arquitetura e Métodos

Síntese da entrega acadêmica: problema, solução, validação parcial, ganhos, limites e continuidade.

## 10. Referências
Lista única ABNT, sem duplicação.

## 11. Apêndices
- **Apêndice A:** `APENDICE_TECNICO_DIAGRAMAS.md` (diagramas técnicos DT-01..DT-06).
- **Apêndice B:** `APENDICE_B_CASOS_VISUAIS.md` (casos CV-01..CV-06).
- **Apêndice C:** matrizes e quadros extensos.
- **Apêndice D:** artefatos complementares.

## Controle de versão textual por seção
| Seção | Versão | Data | Responsável |
|---|---|---|---|
| 1. Introdução | v2.1 | 2026-04-14 | Equipe de Arquitetura e Métodos |
| 2. Referencial teórico | v2.1 | 2026-04-14 | Equipe de Arquitetura e Métodos |
| 3. Desenvolvimento da ferramenta | v2.1 | 2026-04-14 | Equipe de Arquitetura e Métodos |
| 4. Requisitos e aceite | v2.1 | 2026-04-14 | Equipe de QA e Governança |
| 5. Modelagem e diagramas | v2.1 | 2026-04-14 | Equipe de Arquitetura Técnica |
| 6. Plano de testes e resultados | v2.1 | 2026-04-14 | Equipe de QA e Governança |
| 7. Riscos e contingências | v2.1 | 2026-04-14 | Equipe de Riscos |
| 8. Cronograma atualizado | v2.1 | 2026-04-14 | PMO do Projeto |
| 9. Conclusão | v2.1 | 2026-04-14 | Equipe de Arquitetura e Métodos |
| 10. Referências | v2.1 | 2026-04-14 | Equipe de Arquitetura e Métodos |
| 11. Apêndices | v2.1 | 2026-04-14 | Equipe de Arquitetura e Métodos |
