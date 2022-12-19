# Spacecraft Communications Workshop 

---

Welcome to this totally awesome repository, that is definetely going to make you telecommunication specialists in just a few hours!

After the presentation and some live demonstrations, the participants will split into two teams: one implementing the Spacecraft side and the other the Ground Station. For representativeness, the first team will make use of **C++** to code an **FSK modulator** and the latter will utilize **GNURadio** to implement an **FSK demodulator**. At first, the teams will act independently, testing their implementation with test data provided by us. Then, the teams will try to make their implementations to communicate, simulating an actual Satellite to Earth communication!

In the context of this workshop, you will need to install an IDE that supports C++ and CMake (preferably CLion, instructions below) and GNURadio. It is recommended to use a Linux operating system but not required. The steps you need to follow prior to attending the workshop (**Thessaloniki 19/12/22 17:00**, **Athens 20/12/22 17:00**) are the following:

### Downloading this project

- You can either use **Git** to clone this repository
- Or hit the *Download Button* next to *Clone* to download the repository as a `.zip` file. Then unzip the project.

### CLion 

If you want to install **CLion**(recommended):
1. Go to [this page](https://www.jetbrains.com/clion/)
2. Make a JetBrains account:
3. If you have a university email:
	- Click the "For Students and Teachers" category
	- Click the "Apply now" button and fill the application form
4. If you don't have access to a university email, you can make a JetBrains account and download the 30-day free trial

You can also use **Visual Studio Code** instead:
- Once installed, open the `spacecraft` folder as a project
- Then, VS Code will detect the `CMakeLists.txt` file in this folder and a small window will pop up in the bottom right corner, telling you to configure the project using CMake. Choose "yes"
- Then you will need to choose the compiler you are going to use, most probably `gcc/g++`
- If you don't have a compiler installed, you need to do so (preferably `gcc/g++`)

### GNURadio

- If you are using Linux(recommended for GNURadio) you can visit [this page](https://wiki.gnuradio.org/index.php/InstallingGR) and install it according to your system.
	- If you are using Ubuntu, a simple way to get GNURadio would be typing in the terminal:
	  `sudo apt-get install gnuradio`
	- Then opening *GNURadio Companion* you can choose the GNURadio flowgraph. Note that GNURadio flowgraph files have the `.grc` extension
- If you are using Windows, it's still possible to download GNURadio.
	- Visit [this page](http://www.gcndevelopment.com/gnuradio/index.htm) and click on `Download Latest GR 3.8 Installer`
	- Open the installer and follow the steps from there
	- Open *GNURadio Companion*
	
