# ft\_printf

## Because ft\_putnbr() and ft\_putstr() aren’t enough

_Summary: The goal of this project is pretty straightforward. You will recode printf()._ _You will mainly learn about using a variable number of arguments. How cool is that? It_ _is actually pretty cool :)_

_Version: 12.1_

* * *

Contents
\[Image: x5\]

I Introduction2
II Common Instructions3
III AI Instructions5
IV Mandatory part7
V Readme Requirements9
VI Bonus part10
VII Submission and peer-evaluation11
\[Image: x5\]

* * *

Chapter I
\[Image: x5\]

Introduction
\[Image: x5\]

You will discover a popular and versatileCfunction:printf(). This exercise is a great
opportunity to improve your programming skills. It is of moderate difficulty.
\[Image: x5\]

You will discovervariadic functionsinC.
\[Image: x5\]

The key to a successfulft\_printfis well-structured and extensible code.
\[Image: x5\]

Once this assignment is passed, you will be allowed to add your
ft\_printf() to your libft so you can use it in your C projects at 42.
\[Image: x5\]

* * *

Chapter II
\[Image: x5\]

Common Instructions
\[Image: x5\]

•Your project must be written in C.
\[Image: x5\]

•Your project must be written in accordance with the Norm. If you have bonus
files/functions, they are included in the norm check, and you will receive a0if
there is a norm error.
\[Image: x5\]

•Your functions should not quit unexpectedly (segmentation fault, bus error, double free, etc.) except for undefined behavior. If this occurs, your project will be
considered non-functional and will receive a0during the evaluation.
\[Image: x5\]

•All heap-allocated memory must be properly freed when necessary. Memory leaks
will not be tolerated.
\[Image: x5\]

•If the subject requires it, you must submit aMakefilethat compiles your source
files to the required output with the flags-Wall,-Wextra, and-Werror, usingcc.
Additionally, yourMakefilemust not perform unnecessary relinking.
\[Image: x5\]

•YourMakefilemust contain at least the rules$(NAME),all,clean,fcleanand
re.
\[Image: x5\]

•To submit bonuses for your project, you must include abonusrule in yourMakefile,
which will add all the various headers, libraries, or functions that are not allowed in
the main part of the project. Bonuses must be placed in\_bonus.{c/h}files, unless
the subject specifies otherwise. The evaluation of mandatory and bonus parts is
conducted separately.
\[Image: x5\]

•We encourage you to create test programs for your project, even though this work
does not need to be submitted and will not be graded. It will give you an
opportunity to easily test your work and your peers’ work. You will find these tests
especially useful during your defence. Indeed, during defence, you are free to use
your tests and/or the tests of the peer you are evaluating.
\[Image: x5\]

•Submit your work to the assigned Git repository. Only the work in the Git repository will be graded. If Deepthought is assigned to grade your work, it will occur
\[Image: x5\]

•If your project allows you to use yourlibft, you must copy its sources and its
associatedMakefileinto alibftfolder. Your project’sMakefilemust compile
the library by using itsMakefile, then compile the project.
\[Image: x5\]

* * *

ft\_printf Because ft\_putnbr() and ft\_putstr() aren’t enough

after your peer-evaluations. If an error happens in any section of your work during Deepthought’s grading, the evaluation will stop.

* * *

# Chapter III

# AI Instructions

## ●Context

This project is designed to help you discover the fundamental building blocks of your ICT training. To properly anchor key knowledge and skills, it’s essential to adopt a thoughtful approach to using AI tools and support. True foundational learning requires genuine intellectual effort — through challenge, rep- etition, and peer-learning exchanges. For a more complete overview of our stance on AI — as a learning tool, as part of the ICT curriculum, and as an expectation in the job market — please refer to the dedicated FAQ on the intranet.

## ●Main message

☛Build strong foundations without shortcuts. ☛Really develop tech & power skills. ☛Experience real peer-learning, start learning how to learn and solve new problems. ☛The learning journey is more important than the result. ☛Learn about the risks associated with AI, and develop effective control practices and countermeasures to avoid common pitfalls.

## ●Learner rules:

•You should apply reasoning to your assigned tasks, especially before turning to AI.

* * *

ft\_printf Because ft\_putnbr() and ft\_putstr() aren’t enough

•You should not ask for direct answers to the AI. •You should learn about 42 global approach on AI.

# ●Phase outcomes:

Within this foundational phase, you will get the following outcomes: •Get proper tech and coding foundations. •Know why and how AI can be dangerous during this phase.

# ●Comments and example:

•Yes, we know AI exists — and yes, it can solve your projects. But you’re here to learn, not to prove that AI has learned. Don’t waste your time (or ours) just to demonstrate that AI can solve the given problem. •Learning at 42 isn’t about knowing the answer — it’s about developing the ability to find one. AI gives you the answer directly, but that prevents you from building your own reasoning. And reasoning takes time, effort, and involves failure. The path to success is not supposed to be easy. •Keep in mind that during exams, AI is not available — no internet, no smartphones, etc. You’ll quickly realise if you’ve relied too heavily on AI in your learning process. •Peer learning exposes you to different ideas and approaches, improving your inter- personal skills and your ability to think divergently. That’s far more valuable than just chatting with a bot. So don’t be shy — talk, ask questions, and learn together! •Yes, AI will be part of the curriculum — both as a learning tool and as a topic in itself. You’ll even have the chance to build your own AI software. In order to learn more about our crescendo approach you’ll go through in the documentation available on the intranet. ✓Good practice: I’m stuck on a new concept. I ask someone nearby how they approached it. We talk for 10 minutes — and suddenly it clicks. I get it.

✗Bad practice: I secretly use AI, copy some code that looks right. During peer evaluation, I can’t explain anything. I fail. During the exam — no AI — I’m stuck again. I fail.

* * *

Chapter IV
\[Image: x5\]

Mandatory part
\[Image: x5\]

| Program name | libftprintf.a |
| --- | --- |
| Turn in files | Makefile， _.h，_/ _.h，_.c， _/_.c |
| Makefile | NAME，all，clean，fclean，re |
| External functs. | malloc，free，write， |
| va\_start，va\_arg，va\_copy，va\_end |  |
| Libft authorized | Yes |
| Description | Write a library that contains ft\_printf()，a |
| function that will mimic the original printf() |  |

You have to recode theprintf()function fromlibc.
\[Image: x5\]

The prototype offt\_printf()is:
\[Image: x5\]

int ft\_printf(const char \*,...);
\[Image: x5\]

•Do not implement the buffer management of the originalprintf().
\[Image: x5\]

•Your function has to handle the following conversions:cspdiuxX%
\[Image: x5\]

•Your function will be compared against the originalprintf().
\[Image: x5\]

•Yourlibftprintf.ahas to be created at the root of your repository.
\[Image: x5\]

•You must use the commandarto create your library.
Using thelibtoolcommand is forbidden.
\[Image: x5\]

•Your header file must be namedft\_printf.hand must contain the prototype of
yourft\_printf()function.
\[Image: x5\]

* * *

ft\_printf Because ft\_putnbr() and ft\_putstr() aren’t enough

You have to implement the following conversions: •%cPrints a single character. •%sPrints a string (as defined by the commonCconvention). •%pThevoid \*pointer argument has to be printed in hexadecimal format. •%dPrints a decimal (base 10) number. •%iPrints an integer in base 10. •%uPrints an unsigned decimal (base 10) number. •%xPrints a number in hexadecimal (base 16) lowercase format. •%XPrints a number in hexadecimal (base 16) uppercase format. •%%Prints a percent sign.

* * *

Chapter V
\[Image: x5\]

Readme Requirements
\[Image: x5\]

A README.md file must be provided at the root of your Git repository. Its purpose
is to allow anyone unfamiliar with the project (peers, staff, recruiters, etc.) to quickly
understand what the project is about, how to run it, and where to find more information
on the topic.
The README.md must include at least:
\[Image: x5\]

The README.md must include at least:
\[Image: x5\]

•The very first line must be italicized and read:This project has been created as part
of the 42 curriculum by \[, \[, \[...\]\]\].
\[Image: x5\]

•A “Description” section that clearly presents the project, including its goal and a
brief overview.
\[Image: x5\]

•An “Instructions” section containing any relevant information about compilation,
installation, and/or execution.
\[Image: x5\]

•A “Resources” section listing classic references related to the topic (documentation, articles, tutorials, etc.), as well as a description of how AI was used —
specifying for which tasks and which parts of the project.
\[Image: x5\]

➠Additional sections may be required depending on the project(e.g., usage
examples, feature list, technical choices, etc.).
\[Image: x5\]

Any required additions will be explicitly listed below.
\[Image: x5\]

English is recommended; alternatively, you may use the main language
of your campus.
\[Image: x5\]

•A detailed explanation and justification of the chosen algorithm and data structure
must also be included.
\[Image: x5\]

* * *

Chapter VI
Bonus part
\[Image: x5\]

You don’t have to do all the bonuses.
\[Image: x5\]

Bonus list:
\[Image: x5\]

•Manage any combination of the following flags: ’-0.’ and the field minimum width
under all conversions.
\[Image: x5\]

•Manage all the following flags: ’# +’ (Yes, one of them is a space)
\[Image: x5\]

If you plan to complete the bonus part, consider the implementation
of your additional features from the beginning. This will help you
avoid the pitfalls of a naive approach.
\[Image: x5\]

The bonus part will only be assessed if the mandatory part is
PERFECT. To be considered perfect, the mandatory part must be fully
implemented and function correctly without any errors. If you have
not passed ALL the mandatory requirements, your bonus part will not
be evaluated at all.
\[Image: x5\]

* * *

# Chapter VII

# Submission and peer-evaluation

Turn in your assignment in yourGitrepository as usual. Only the work inside your repos- itory will be evaluated during the defense. Don’t hesitate to double check the names of your files to ensure they are correct.

Once this assignment is passed, you will be allowed to add yourft\_printf()to your libftso you can use it in yourCprojects at 42.

During the evaluation, a briefmodification of the projectmay occasionally be re- quested. This could involve a minor behavior change, a few lines of code to write or rewrite, or an easy-to-add feature.

While this step maynot be applicable to every project, you must be prepared for it if it is mentioned in the evaluation guidelines.

This step is meant to verify your actual understanding of a specific part of the project. The modification can be performed in any development environment you choose (e.g., your usual setup), and it should be feasible within a few minutes — unless a specific timeframe is defined as part of the evaluation. You can, for example, be asked to make a small update to a function or script, modify a display, or adjust a data structure to store new information, etc.

The details (scope, target, etc.) will be specified in theevaluation guidelinesand may vary from one evaluation to another for the same project.