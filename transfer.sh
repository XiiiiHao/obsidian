#!/bin/bash

# Source and target directories
src_dir="/home/xiiiihao/Desktop/knowledgelib"
target_dir="/home/xiiiihao/VSCprojects/xiiiihao.github.io/_posts"

if [ -z "$1" ]
then
  echo "No source filename provided. Exiting."
  exit 1
fi

# Source file name
src_file="$1.md"

# Get current date and time
current_date=$(date +"%Y-%m-%d")
current_time=$(date +"%H:%M:%S")

# Target file name (Jekyll format: YEAR-MONTH-DAY-title.md)
target_file="$current_date-$2.md"

# Jekyll front matter
front_matter="---
title : 
date : $current_date $current_time
categories : []
tags : []
---"

# Copy the file
cp "$src_dir/$src_file" "$target_dir/$target_file"

# Add the front matter
echo "$front_matter" | cat - "$target_dir/$target_file" > temp && mv temp "$target_dir/$target_file"
