import subprocess
import glob
import os

resultados = {}

for entrada in glob.glob("*.txt"):
    print(f"== Testing file {entrada} ==")
    f = open(entrada, "r")
    e = f.readlines()
    result = subprocess.run(["./sublista.exe"], input = "\n".join(e),
                            capture_output = True, text = True)
    print(result.stdout)
    print(result.stderr)
    resultados[entrada] = list(map(int, result.stderr.split()))

print(resultados)
