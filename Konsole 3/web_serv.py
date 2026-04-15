from flask import Flask, render_template

app = Flask(__name__)


@app.route("/")
def main_file():
    render_template("login.html")

@app.route("/main")
def main_file_2():
    render_template("login.html")

@app.route("/popopo")
def main_file_3():
    render_template("login.html")
    