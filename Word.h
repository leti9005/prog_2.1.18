#ifndef MAIN_WORD_H
#define MAIN_WORD_H


class Word {
	public:
		std::string getValue() {
			return this->value;
		}

		int getSize() {
			return this->size;
		}

		Word() {}

		Word(std::string text) {
			while ((int)text[this->size] != 0) {
				if (!std::ispunct(text[this->size])) {
					this->value += text[this->size];
				}

				this->size++;
			}
		}

		bool isVowel() {
			for (char p: this->vowels) {
				if (this->value[this->size - 1] == p) return true;
			}

			// раскомментить, если надо с русскими буквами
//			for (char p: this->russianVowels) {
//				if (this->value[this->size - 2] == p) return true;
//			}

			return false;
		}

		Word& operator=(Word& newWord) {
			//проверка на самоприсваивание
			if (this == &newWord) {
				return *this;
			}

			this->value = newWord.getValue();
			this->size = newWord.getSize();
			return *this;
		}

	private:
		// раскомментить, если надо с русскими буквами
//		const char russianVowels[41] = "АУОЫИЭЯЮЁЕауоыиэяюёе";

		const char vowels[21] = "AEIOUaeiou";
		int size = 0;
		std::string value;
};


#endif //MAIN_WORD_H
