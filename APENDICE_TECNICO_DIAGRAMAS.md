# Apêndice A — Diagramas Técnicos Sequenciais da Ferramenta

**Versão:** v2.1  
**Data:** 2026-04-14  
**Responsável:** Arquitetura Técnica

Este apêndice concentra somente engenharia detalhada, preservando o corpo principal leve.

## Organização sequencial (DT-01 a DT-06)
- **DT-01:** sequência da higienização e preparação semântica.
- **DT-02:** sequência/atividade do ONDE.
- **DT-03:** fluxo detalhado da contenção ONDE→OQUE.
- **DT-04:** decisão multicamada do OQUE.
- **DT-05:** fechamento final/Patch S/fallback.
- **DT-06:** composição do resumo automático.

## Mapeamento para arquivos Mermaid
- DT-01 → `apendice_tecnico/diagramas/M1_sequencia_higienizacao.mmd`
- DT-02 → `apendice_tecnico/diagramas/M2M3_sequencia_onde.mmd`
- DT-03 → `apendice_tecnico/diagramas/DT03_contencao_onde_oque.mmd`
- DT-04 → `apendice_tecnico/diagramas/M4_sequencia_oque.mmd`
- DT-05 → `apendice_tecnico/diagramas/M5_sequencia_fechamento.mmd`
- DT-06 → `apendice_tecnico/diagramas/DT06_composicao_resumo.mmd`

## Modelo lógico de entidades informacionais (em substituição ao DER clássico)
- MLEI-ONDE → `apendice_tecnico/diagramas/M2M3_der_onde.mmd`
- MLEI-OQUE → `apendice_tecnico/diagramas/M4_der_oque.mmd`
- MLEI-FECHAMENTO → `apendice_tecnico/diagramas/M5_der_fechamento.mmd`
- MLEI-HIGIENIZAÇÃO → `apendice_tecnico/diagramas/M1_der_higienizacao.mmd`

## Regra editorial do apêndice
Cada diagrama deve referenciar explicitamente o módulo, a entrada, a transformação e a saída auditável.


## Critério de qualidade para evolução de diagramas
- Todo diagrama deve indicar ponto de decisão, fallback e saída auditável quando aplicável.
- Diagramas de fechamento (DT-05/DT-06) devem explicitar trilha de auditoria e condição de saída segura.
