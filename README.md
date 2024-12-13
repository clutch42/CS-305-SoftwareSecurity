# CS 305: Software Security
## Course Description
Through the analysis of advanced security concepts, students will learn how to develop secure 
code that complies with security testing protocols. In addition to exploring and implementing 
security concepts through code, students will also learn why and how to apply encryption 
technologies and techniques to communicate securely.
## Course Competencies
This course covers the following competencies, which represent the knowledge and skills 
relevant to your field:
- CS-30412: Analyze how advanced security concepts are applied to develop secure code
- CS-30413: Design and implement code that complies with software security testing 
protocols
- CS-40414: Write secure communications through the application of current encryption 
technologies and techniques
## Projects
### Briefly summarize your client, Artemis Financial, and their software requirements. Who was the client? What issue did they want you to address? 
Artemis Financial is a consulting company that develops custoized financial plans for their customers, including savings, retirement, insurance, and investments. They are trying to modernize their operations, and use the most current and effective software security to protect their clients data and financial information. 

### What did you do very well when you found your client’s software security vulnerabilities? Why is it important to code securely? What value does software security add to a company’s overall wellbeing? 
I think the thing I did best was figuring out how to implement the checksum cipher. It took some research but I feel like I got it coded right, and got the expected outcome. It is important to code securely because if there are errors or unhandled exceptions they can be used as entry points for bad actors. Incorperating security into the code adds to the value of the application because the more layers of security, the less chance of a bad actor being able to hijack your application.

### What part of the vulnerability assessment was challenging or helpful to you? 
The vulnerability assessment report was helpful because it showed all of the vulnerable in the libraries of the program. One thing I noticed was that most of the vulnerabilities were because of outdated libraries. It would have been way easier to either update all the libraries, or to be able to put all the vulnerabilities of a library into the suppression file at once instead of having to do it individually.

### How did you increase layers of security? In the future, what would you use to assess vulnerabilities and decide which mitigation techniques to use? 
There are several layers of security in this application. There is checksum to encrypt important information, certificates for client / server security, and htmlEscape for input validation to defend against injection attacks. Using the vulnerability assessment process flow diagram is a great way to find the areas that need protection.

### How did you make certain the code and software application were functional and secure? After refactoring the code, how did you check to see whether you introduced new vulnerabilities? 
Checking for functionality was fairly simple by just opening up a browser and making sure it was secure and displaying the correct data. After refactoring, running the vulnerability report again will detect if you introduced new vulnerabilities, and inspecting the code again will help catch any other vunerabilities.

### What resources, tools, or coding practices did you use that might be helpful in future assignments or tasks? 
I really like knowing how to create certificates, encrypt, and check strings for malicous code and will be using all of them in the future.

### Employers sometimes ask for examples of work that you have successfully completed to show your skills, knowledge, and experience. What might you show future employers from this assignment? 
I would show the three things I listed in the last question: certificate usage, encryption, and htmlEscape. I would probably throw in the vulnerability report as well. I feel like those things really sum up the majority of this project and class.
