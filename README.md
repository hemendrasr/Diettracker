# 🥗 Diet Tracker – C++ Console Application

## 📋 Description

This is a **basic C++ console application** that helps track your daily food intake by recording the calories and macronutrients (proteins, fats, and carbs) of each item you eat. The code is simple and runs in a single file — no GUI or advanced frameworks — just straightforward logic for calculating your daily macros.

## 🔧 Features

- Manually input food names with their:
  - Calories
  - Protein
  - Carbohydrates
  - Fat
- Calculates total macros for the day
- Helps you monitor your diet in a lightweight, offline environment

## 💻 How It Works

1. Run the program.
2. Enter each food item and its nutritional values.
3. The program keeps a running total of:
   - Total calories
   - Total protein
   - Total carbs
   - Total fat

At the end, it displays the total nutritional intake for the day.

## 🚀 Getting Started

### Requirements

- C++ Compiler (like `g++`)

### Compile and Run

```bash
g++ diet_tracker.cpp -o diet_tracker
./diet_tracker
