#include <iostream>
#include <string>

using namespace std;

class Book {
  public:
    string title;
    string author;

  private:
    int pages;
    
  public:
    Book(string aTitle, string aAuthor, int aPages) {
      title = aTitle;
      author = aAuthor;
      setPages(aPages);
    }

    int getPages() {
      return pages;
    }

    void setPages(int aPages) {
      int invalidPages[] = {-1, 0};
      bool isPagesParamInvalid = false;

      for (int invalidPagesItem : invalidPages) {
        if (aPages == invalidPagesItem) {
          cout << "Pages value is too low" << endl;

          isPagesParamInvalid = true;

          break;
        }
      }

      if (isPagesParamInvalid) return;

      pages = aPages;
    }
};

int main() {
  Book book1("My book 1", "Chaкдуы", 300);
  book1.setPages(0);

  cout << book1.getPages() << endl;

  return 0;
}
