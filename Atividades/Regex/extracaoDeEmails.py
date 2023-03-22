import re
with open("e-mails.txt", "r") as arquivo:
  txt = arquivo.read()
  
regex = re.compile('[\w.]+@[a-z.]+\.[a-z]{2,}')
emails = re.findall(regex,txt)
print(emails)
