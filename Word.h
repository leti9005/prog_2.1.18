#ifndef MAIN_WORD_H
#define MAIN_WORD_H


class Word {
	public:
		Word() {}


		Word(std::string text) {
			int i = 0;

			while ((int)text[i] != 0) {
				if (!std::ispunct(text[i]) && !std::isdigit(text[i])) {
					this->value += text[i];
					this->size++;
				}

				i++;
			}
		}


		std::string getValue() {
			return this->value;
		}


		int getSize() {
			return this->size;
		}


		bool isLastLetterVowel() {
			return this->isVowel(this->value[this->size - 1]);
		}


		float lettersRatio() {
			float vowels = 1, consonants = 1;

			for (int i = 0; i < this->size; i++) {
				if (this->isVowel(this->value[i])) {
					vowels++;
				} else {
					consonants++;
				}
			}

			return consonants / vowels;
		}


		Word& operator = (Word& newWord) {
			//проверка на самоприсваивание
			if (this == &newWord) {
				return *this;
			}

			this->value = newWord.getValue();
			this->size = newWord.getSize();

			return *this;
		}


		bool operator > (Word& right) {
			float firstRatio = this->lettersRatio(), secondRatio = right.lettersRatio();

			if (firstRatio == secondRatio) {
				int i = 0;

				while (this->value[i] != 0 && right.value[i] != 0) {
					if ((int)tolower(this->value[i]) != (int)tolower(right.value[i])) {
						return (int)tolower(this->value[i]) > (int)tolower(right.value[i]);
					}

					i++;
				}

				return false;
			}

			return firstRatio > secondRatio;
		}

	private:
		// раскомментить, если надо с русскими буквами
//		const char russianVowels[41] = "АУОЫИЭЯЮЁЕауоыиэяюёе";

		const char vowels[6] = "aeiou";
		int size = 0;
		std::string value;


		bool isVowel(char letter) {
			letter = tolower(letter);
			for (int i = 0; i < strlen(this->vowels); i++) {
				if (letter == this->vowels[i]) {
					return true;
				}
			}

			// раскомментить, если надо с русскими буквами
	//			for (char p: this->russianVowels) {
	//				if (this->value[this->size - 2] == p) return true;
	//			}

			return false;
		}
};


#endif //MAIN_WORD_H
