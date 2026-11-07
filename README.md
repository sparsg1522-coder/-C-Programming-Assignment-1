# C Programming Assignment 1

A searchable viewer for 46 C programs: 30 online judge exercises and 16 custom pattern programs across seven modules.

## View the solutions

Open the [GitHub Pages site](https://sparsg1522-coder.github.io/-C-Programming-Assignment-1/) after deployment. Choose a problem from the list to display its C source, then use **Copy code** as needed. All viewer assets and source files are published from `website/`.

To run the site locally, serve the `website/` directory with a static web server. Opening the HTML file directly may block source-file requests in some browsers.

## Repository layout

- `solutions/online_judge/` — 30 programs for HackerRank, HackerEarth, and LeetCode exercises.
- `solutions/patterns/` — 16 standalone pattern programs.
- `website/` — static viewer and the published copies of the 46 C files.
- `.github/workflows/static.yml` — deploys `website/` to GitHub Pages on pushes to `main`.

The copies in `website/solutions/` let the viewer load every source from the Pages artifact. Keep them in sync with `solutions/` when updating a program.

## Run a standalone program

```sh
gcc solutions/patterns/01-solid-square.c -o pattern
./pattern
```

Some LeetCode files contain only a function for submission in the platform editor; the other online judge files are complete programs. Check each linked problem for its exact input/output contract before submitting. The STDIN/STDOUT entry is a generic starter and must be adapted to the selected exercise.
