# Network Basics #1

This directory contains scripts for network configuration tasks.

## Tasks

### 0. Change your home IP

**File:** `0-change_your_home_IP`

A Bash script that configures an Ubuntu server with custom DNS resolutions:
- `localhost` resolves to `127.0.0.2` (instead of default `127.0.0.1`)
- `facebook.com` resolves to `8.8.8.8`

**Usage:**
```bash
sudo ./0-change_your_home_IP
```

**Note:** This script modifies `/etc/hosts`. A backup is created at `/etc/hosts.backup`. To revert changes, restore the backup or manually edit `/etc/hosts` to change localhost back to `127.0.0.1`.

## Requirements

- Ubuntu server
- Sudo/root privileges for script execution
- Bash shell
