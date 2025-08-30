import datetime

# Apna challenge ka start date set karo (yyyy, mm, dd)
start_date = datetime.date(2025, 8, 22)  

today = datetime.date.today()
days_passed = (today - start_date).days + 1  # Include Day 1
total_days = 100

if days_passed > total_days:
    days_passed = total_days

progress = int((days_passed / total_days) * 100)

# progress bar (10 blocks)
filled_blocks = days_passed * 10 // total_days
progress_bar = "[" + "█" * filled_blocks + "-" * (10 - filled_blocks) + "]"

# new content for README
new_content = f"""## 🔥 100 Days of C
Daily C practice—two problems a day when possible. Clean, simple, strictly typed.

**Current streak:** `#100DaysOfCode` • **Road to Day 100** 🚀

**Progress**

{progress_bar} {progress}% ({days_passed}/{total_days})
"""

with open("README.md", "w", encoding="utf-8") as f:
    f.write(new_content)

print("README updated ✅")
