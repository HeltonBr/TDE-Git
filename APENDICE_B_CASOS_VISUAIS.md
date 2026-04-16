# Apêndice B — Casos Visuais Comentados da Planilha

**Versão:** v2.4  
**Data:** 2026-04-14  
**Responsável:** Equipe de Métodos e Validação

## Regra editorial
Cada caso segue formato fixo:
1. Comentário original.
2. Linha contextual da planilha (Política Conecta, Política Demanda, Bairro, Regional).
3. Resumo da Demanda Automático.
4. Comentário técnico curto (módulo, inovação, ganho factual, ponte bibliográfica).
5. Trilha auditável correlata (nome implementado ou rótulo conceitual).

## Casos modulares de evidência (CV-01 a CV-06)

### CV-01 — Higienização e preparação semântica (DT-01)
- Demonstra robustez a ruído ortográfico preservando sentido institucional.
- **Trilha correlata:** metadados de preparação semântica.

### CV-02 — ONDE com referência composta (DT-02)
- Demonstra local principal + referência encadeada para uso gerencial.
- **Trilha correlata:** `ONDE_AUDIT_FLAGS`.

### CV-03 — Contenção ONDE→OQUE (DT-03)
- Demonstra separação semântica para evitar vazamento locativo no tema.
- **Trilha correlata:** rótulo conceitual de contenção (`ONDE_OQUE_AUDIT_*`).

### CV-04 — OQUE com retenção de especificidade (DT-04)
- Demonstra decisão multicamada com ganho de detalhe semântico.
- **Trilha correlata:** `OQUE_AUDIT` + `OQUE_FALLBACK_AUDIT`.
- **Nota de fronteira:** fallback final é consolidado em M5/Patch S.

### CV-05 — Fechamento final com fallback seguro (DT-05)
- Demonstra prudência semântica (não inventar detalhe inexistente).
- **Trilha correlata:** `DECISAO_FINAL` + indicadores de fallback.

### CV-06 — Composição final do resumo automático (DT-06)
- Demonstra síntese institucional legível com tema + referência espacial.
- **Trilha correlata:** rótulo conceitual de composição auditável.

## Regra de concisão
- Seis casos apenas.
- Um caso por módulo/camada evolutiva.
- Uma unidade visual por caso.
- Sem repetição de ganho técnico entre casos.
