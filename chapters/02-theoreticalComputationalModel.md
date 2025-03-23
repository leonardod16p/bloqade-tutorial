# Adiabatic Quantum Computing

Adiabatic Quantum Computation is a form of quantum computing that relies on the adiabatic theorem to perform calculations and is closely related to quantum annealing. Let's describe how it works:

1. A Hamiltonian $H_{final}$ is found whose ground state encodes the solution to the problem of interest.
2. A system with a simple Hamiltonian $H_{init}$ is prepared and initialized in its ground state.
3. The simple Hamiltonian is adiabatically evolved into the desired, more complicated Hamiltonian.

By the adiabatic theorem, the system remains in the ground state throughout the evolution, so at the end, the system’s state represents the solution to the problem.

Adiabatic quantum computing has been shown to be polynomially equivalent to conventional quantum computing in the circuit model.