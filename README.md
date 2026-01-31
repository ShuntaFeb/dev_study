# dev_study 💻

プログラミング言語（C, C++, Rust, Python）の学習と、将来的なAI研究（音声合成など）のための統合開発環境です。
VS Code Dev Containers (Docker) を使用し、Windows上に汚染のないクリーンなLinux開発環境を構築しています。

## 🚀 環境の特徴

* **完全なLinux環境**: Windows上で、DebianベースのLinux環境をDockerコンテナとして稼働。
* **マルチ言語対応**:
    * **C / C++**: GCCコンパイラ環境完備。
    * **Rust**: Cargoを含む最新のRustツールチェーン完備。
* **GPUアクセラレーション対応**:
    * NVIDIA GeForce RTX 4050 をコンテナ内にパススルー設定済み。
    * `nvidia-smi` での認識を確認済み。
    * Python (PyTorch) などのAI学習をGPUで実行可能。

## 📂 ディレクトリ構成

```text
dev_study/
├── .devcontainer/    # Docker設定ファイル (GPU設定、拡張機能など)
├── 01_c/             # C言語学習用
├── 02_cpp/           # C++言語学習用
├── 03_rust/          # Rust学習用
├── 04_python/        # Python/AI実験用
└── README.md         # 本ファイル
