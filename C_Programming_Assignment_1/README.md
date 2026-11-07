# C Programming — Platform Based Assignment 1

A structured practice repository for the question bank supplied with the assignment.

## Contents
- `solutions/online_judge/` — solutions for the 30 platform-listed exercises.
- `solutions/patterns/` — complete C programs for all 16 custom pattern questions (Module 7).
- `website/` — searchable browser-based solution viewer, with official problem links, suitable for GitHub Pages.

## Run a standalone program
```bash
gcc solutions/patterns/01-solid-square.c -o pattern
./pattern
```
For a LeetCode exercise, submit the function body in the platform's C editor (some files intentionally contain no `main`). For HackerRank/HackerEarth exercises, compile and run the complete program and match the platform's exact input format.

## Important platform note
The assignment PDF lists problem titles and platforms for Modules 1–6, but it does not include the full statements/constraints for every online-judge problem. The files here use the standard problem formats and signatures for those named exercises. Always compare the input/output contract with the linked official problem before submitting. In particular, `Read from STDIN, Write to STDOUT` is a generic starter and must be adapted to the actual exercise statement.

## Website
Open `website/index.html` locally, or enable GitHub Pages with the `website` folder as the publishing source (or move its contents to the repository root if required by your Pages setup).

## Publish the website with GitHub Pages
1. Create a **public** repository on GitHub and push the contents of this folder to its `main` branch.
2. In the repository, open **Settings → Pages**.
3. Under **Build and deployment → Source**, select **GitHub Actions**.
4. The included `.github/workflows/pages.yml` deploys the `website/` directory automatically after each push to `main`.
5. After the workflow succeeds, the Pages URL appears in the workflow deployment and in Settings → Pages. Submit that URL if the assignment expects a working website; otherwise submit the repository URL as instructed by your faculty.
