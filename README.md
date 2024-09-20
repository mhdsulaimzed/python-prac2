# Bash File Structure and Command Guide

## Table of Contents
1. [Introduction to Linux/Unix Filesystem](#introduction-to-linuxunix-filesystem)
2. [Key Directories in the Linux Filesystem](#key-directories-in-the-linux-filesystem)
3. [Navigating the File System](#navigating-the-file-system)
4. [File and Directory Permissions](#file-and-directory-permissions)
5. [File Manipulation Commands](#file-manipulation-commands)
6. [Special Filesystems and Mounting](#special-filesystems-and-mounting)
7. [Understanding System and User-Level Configurations](#understanding-system-and-user-level-configurations)
8. [File Management and Space Monitoring](#file-management-and-space-monitoring)
9. [Common System Directories for Scripts](#common-system-directories-for-scripts)
10. [Best Practices for File Structure in Scripting](#best-practices-for-file-structure-in-scripting)
11. [Text Processing Tools](#text-processing-tools)

## Introduction to Linux/Unix Filesystem

The Linux/Unix filesystem is organized in a hierarchical tree-like structure, starting from the root directory (`/`). Understanding this structure is crucial for effective navigation and file management in Bash environments.

## Key Directories in the Linux Filesystem

- `/`: The root directory, the top of the filesystem hierarchy.
- `/bin`: Essential user command binaries (e.g., `ls`, `cp`, `mv`).
- `/boot`: Boot loader files, Linux kernel.
- `/dev`: Device files representing hardware components.
- `/etc`: System-wide configuration files.
- `/home`: User home directories.
- `/lib`: Essential shared libraries and kernel modules.
- `/media`: Mount points for removable media.
- `/mnt`: Temporary mount points for filesystems.
- `/opt`: Optional software packages.
- `/proc`: Virtual filesystem for process and system information.
- `/root`: Home directory for the root user.
- `/sbin`: System binaries.
- `/tmp`: Temporary files.
- `/usr`: User utilities and applications.
- `/var`: Variable files like logs and spools.

## Navigating the File System

Essential commands for navigating the filesystem:

- `pwd`: Print working directory
- `cd`: Change directory
- `ls`: List directory contents
- `mkdir`: Create new directories
- `rmdir`: Remove empty directories
- `find`: Search for files and directories

Examples:
```bash
pwd
ls /usr/bin
cd /etc
find /home/username -name "*.sh"
```

## File and Directory Permissions

Understanding and managing file permissions:

- Read (r), Write (w), Execute (x) permissions
- Using `chmod` to change file permissions
- `chown` and `chgrp` for changing ownership and group

Example:
```bash
chmod 755 script.sh
chown user:group file.txt
```

## File Manipulation Commands

Common commands for file operations:

- `cp`: Copy files and directories
- `mv`: Move or rename files and directories
- `rm`: Remove files and directories
- `touch`: Create empty files or update timestamps
- `ln`: Create hard or symbolic links

Example:
```bash
cp source.txt destination.txt
mv oldname.txt newname.txt
rm unnecessary_file.txt
touch newfile.txt
ln -s target_file.txt link_name
```

## Special Filesystems and Mounting

- `/dev`: Device files
- `/proc`: Virtual filesystem for process information
- Mounting filesystems:
  ```bash
  mount /dev/sdb1 /mnt
  umount /mnt
  ```

## Understanding System and User-Level Configurations

- System-wide configurations in `/etc/`
- User-specific configurations in home directories (e.g., `.bashrc`, `.profile`)

## File Management and Space Monitoring

Commands for managing disk space:

- `df`: Display free disk space
- `du`: Estimate file space usage

Examples:
```bash
df -h
du -sh /home/user
```

## Common System Directories for Scripts

- `/usr/local/bin`: Custom scripts and binaries
- `/etc/cron.d` or `/etc/crontab`: System-wide cron jobs
- `/var/log`: System and application log files

## Best Practices for File Structure in Scripting

- Organize scripts in appropriate directories
- Store configuration files in designated locations
- Ensure proper file and directory permissions
- Use meaningful names for files and directories

## Text Processing Tools

### grep (Global Regular Expression Print)

Used for searching text patterns in files.

Examples:
```bash
grep 'pattern' filename
grep -i 'case-insensitive' filename
grep -r 'recursive-search' .
```

### awk (Pattern Scanning and Processing Language)

Powerful tool for processing and analyzing text data.

Examples:
```bash
awk '{print $1, $3}' data.txt
awk -F, '{print $1}' data.csv
awk '$2 > 50 {print $0}' data.txt
```

### sed (Stream Editor)

Used for text transformations and substitutions.

Examples:
```bash
sed 's/old/new/' file.txt
sed 's/old/new/g' file.txt
sed '/pattern/d' file.txt
```

### cut (Remove Sections from Lines)

Extracts specific columns or characters from files.

Examples:
```bash
cut -d ',' -f 1 data.csv
cut -c 1-5 data.txt
```

These tools can be combined to create powerful text processing pipelines:

```bash
grep 'error' logfile.txt | awk '{print $1, $3}' | cut -d ' ' -f 1,2
```

This guide provides a comprehensive overview of the Bash file structure and essential commands for effective filesystem navigation and management in Linux/Unix environments.
