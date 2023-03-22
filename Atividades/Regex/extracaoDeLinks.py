import re
with open("utfpr-cm.html", "r") as arquivo:
  html = arquivo.read()
  
regex = re.compile('<a\s+(?:[^>]*?\s+)?href="([^"#]+)"')
links = re.findall(regex,html)

print(links)
