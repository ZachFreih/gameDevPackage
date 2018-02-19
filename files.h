void dotDotDot(string text, int loopNum) {
	for (int loopCount = 0; loopCount <= (loopNum-1); loopCount++) {
		system("cls");
		cout << text;
		Sleep(500);
		cout << ".";
		Sleep(500);
		cout << ".";
		Sleep(500);
		cout << ".";
	}
}

void loadingBar(string message, float assets) {
	system("cls");
	cout << message << endl << endl;
	float progress = 0.0;
	while (progress < 1.0) {
		int barWidth = 20;

		cout << "[";
		int pos = barWidth * progress;
		for (int i = 0; i < barWidth; ++i) {
			if (i < pos) {
				cout << "=";
			}
			else if (i == pos) {
				cout << ">";
			}
			else {
				cout << " ";
			}
		}
		cout << "] " << int(progress * 100.0) << " %\r";
		cout.flush();

		progress += assets;
		Sleep(1000);
	}
	cout << "[===================] 100";
	cout << endl;
}
