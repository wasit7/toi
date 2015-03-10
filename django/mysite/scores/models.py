from django.db import models

# Create your models here.

class Question(models.Model):
    question_text = models.CharField(max_lenght=200)
    pub_date= models.DateTimeField('date published',auto_now=True,auto_now_add=False)
    
class User(models.Model):
    username=models.CharField(max_lenght=10)
    