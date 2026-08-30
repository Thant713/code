# Session notes

## 2026-08-30 — Resume work (Zconfigs/docsPDFs/resume.tex)

Resume is just short of complete. Target visual: `handshake.pdf` (Times-family look on 10pt body, name 16pt bold, section headings `\large\scshape`).

### State of resume.tex

- `\documentclass[letterpaper,11pt]{article}`; **mathptmx** (Times-equivalent) — fontspec/Times New Roman/Cambria fail because the web LaTeX editor is pdflatex-only (no XeLaTeX); user accepted mathptmx as closest-to-Times that compiles.
- Full master-macro formatting (matches `resume-master/`): `\small` in all macros, name `\fontsize{16}{20}\bfseries`, skills label-bold-only, single `labelitemii`.
- Content order (user-mandated): Professional Summary → Projects → Skills → Education → Work History.
- Section named "Work History"; dates "Month YYYY", no periods, plain `-` dash (ATS-safe, not `--`).
- Location shows "Jersey City, NJ / New York, NY" (small city / big city for ATS local filter).
- No math-mode left: `$|$` → `\textbar{}`.

### For specific job postings (future)

When tailoring a resume for a targeted job posting, apply (from ATS video):

- Mirror the JD's exact keyword spellings in Skills/Projects (e.g. `react.js` not `react`.
- List every tech in the JD even if obvious; the ATS can't assume.
- Soft-skill/passion words if the JD uses them heavily.
- If out-of-state and willing to relocate, add a "relocating to / looking forward to working in <city>, <state>" line to the summary.
- No metrics needed at entry level; do not invent numbers.

### Follow-ups deferred to user (2026-08-30)

- **Years of experience claim** — ATS filters on it; summary currently lacks it. Need user's real figure then add, e.g. "Backend-focused CS student with N+ years building Go APIs...".
- **LinkedIn sync** — video: bullets must also live on LinkedIn or "they don't exist"; any mismatch between resume and LinkedIn reads as misrepresentation. User updates profile manually to match resume.tex bullets/tech verbatim.

### Applied from video advice

- Bullets trimmed to one line; each names a technology/app; order plays to strengths.
- User DECLINED adding numeric metrics to bullets (asked twice).

### Open / next session

- Project section has 4 bullets (~3 recommended); trim proposal unanswered.
- No LaTeX toolchain locally; user compiles via web pdflatex — avoid XeLaTeX-only constructs.
