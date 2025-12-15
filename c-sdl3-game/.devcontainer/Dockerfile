# Base image compatible with Codespaces and VS Code
FROM mcr.microsoft.com/vscode/devcontainers/base:ubuntu

# Install core build tools and SDL3
RUN apt-get update && \
    apt-get install -y --no-install-recommends \
        build-essential \
        cmake \
        gcc \
        g++ \
        gdb \
        libsdl3-dev \
    && apt-get clean \
    && rm -rf /var/lib/apt/lists/*
