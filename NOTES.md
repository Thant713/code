# Session notes

## 2026-08-30 — Resume work (Zconfigs/docsPDFs/resume.tex)

Resume is just short of complete. Target visual: `handshake.pdf` (Times-family look on 10pt body, name 16pt bold, section headings `\large\scshape`).

### State of resume.tex

- `\documentclass[letterpaper,11pt]{article}`; **mathptmx** (Times-equivalent) — fontspec/Times New Roman/Cambria fail because the web LaTeX editor is pdflatex-only (no XeLaTeX); user accepted mathptmx as closest-to-Times that compiles.
- Full master-macro formatting (matches `resume-master/`): name `\fontsize{16}{20}\bfseries`, skills label-bold-only, single `labelitemii`.
- Content order (user-mandated 2026-08-31 update): Skills → Projects → Education → Work History; Professional Summary removed.
- Everything under the name is 11pt (no `\small`/`\large`); section headings bold `\bfseries\scshape` at 11pt.
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

## 2026-09-01 — cppExercises/csc211/inClass/1 (InventoryItem)

`main.cpp` is complete and correct. Missing only the `InventoryItem` class — user confirmed assumption: **only need to create files for the `InventoryItem` object** (nothing else in main.cpp to change). Files to create: `InventoryItem.h` (+ likely `InventoryItem.cpp`). Class must supply, per main.cpp usage: private `string/double/int` members (description, cost, units), a 3-arg constructor, and getters `getDescription()`/`getCost()`/`getUnits()`. Source: Gaddis Starting Out With C++ (9th Global Ed), the repo PDF. Per AGENTS.md: teach mode — walk through, don't hand over finished code.

### Completed: InventoryItem (.h + .cpp)

- `InventoryItem.h`: include guard `INVENTORYITEM_H`, `#include <string>`, `class InventoryItem { private: std::string item; double cost; int units; public: InventoryItem(std::string i, double c, int u); getters (const) };`
- `InventoryItem.cpp`: 3-arg constructor assigns `item=i; cost=c; units=u;`; getters `InventoryItem::getDescription()/getCost()/getUnits()` each `const`, return the member. Only include `"InventoryItem.h"` (no cstdlib/iostream needed).
- UML file `uml.uxf` in same dir is the solved diagram (User: "the ans i got for uml").

### UML generation (CLASS → .uxf diagram) — do this when asked

When user gives a class (`.h`/`.cpp`) and asks "make a UML like this one", emit the `.uxf` target format exactly like the solved `uml.uxf`:

```
<<Class>>
ClassName
--
-member: Type          (private)
-member: Type
--
+ClassNme(params: types)
+Method(param: Type): ReturnType
```

Rules (mirror `inClass/1/uml.uxf`):
- `<<Class>>` line, then class name.
- `--` divider, then **private** members `-name: Type` (lowercase types: `double`, `int`, `String` per the example — note example capitalizes String).
- `--` divider, then **public** methods `+Name(params): ReturnType`; constructor `+ClassName(`params`)` — no return type.
- Params written `(i: String, c: double, u: int)` (name: type, comma-separated).
- Getters listed as `+getDescription(): String`, etc.
- Ignores `const` (example doesn't show it) — do NOT include const in the UML.
- Save format: write/overwrite `uml.uxf` in the same dir as the class files.
