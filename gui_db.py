from tkinter import *
import sqlite3 as lite

class my_pro:
    
    def __init__(self,master):
        self.master=master
        self.show_entry()

    def insert_data(self):
        con = lite.connect('stu.db')
        cur = con.cursor()
        cur.execute('create table if not exists student (name text, sec text, marks int)')
        cur.execute("insert into student values(?,?,?)",(self.e1.get(),self.e2.get(),self.e3.get()))
        con.commit()
        self.reset_form()
    def show_table(self):
        con = lite.connect('stu.db')
        cur = con.cursor()
        cur.execute('SELECT * from student')
        rows=cur.fetchall()
        for data in rows:
            print("Name: {}\tSec: {}\tMarks:{}".format(data[0],data[1],data[2]))

    def reset_form(self):
        self.e1.delete(0,END)
        self.e2.delete(0,END)
        self.e3.delete(0,END)

    def show_entry(self):

        self.f1=Frame(self.master).grid()

        Label(self.f1,text="name:").grid(row=0,column=0)
        self.e1=Entry(self.f1)
        self.e1.grid(row=0,column=1,columnspan=2)

        Label(self.f1,text="sec:").grid(row=1,column=0)
        self.e2=Entry(self.f1)
        self.e2.grid(row=1,column=1,columnspan=2)

        Label(self.f1,text="marks:").grid(row=2,column=0)
        self.e3=Entry(self.f1)
        self.e3.grid(row=2,column=1,columnspan=2)

        Button(self.master,text="Submit",command=self.insert_data).grid(row=3,column=0)
        Button(self.master,text="Reset",command=self.reset_form).grid(row=3,column=1)
        Button(self.master,text="Show",command=self.show_table).grid(row=3,column=2)
        



root=Tk()
root.title("GUI_DB")
app=my_pro(root)
root.mainloop()






