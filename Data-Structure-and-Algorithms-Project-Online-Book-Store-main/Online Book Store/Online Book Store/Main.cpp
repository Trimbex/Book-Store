#include "LandingPage.h"
#include "User.h"
#include "BookSystem.h"
#include "Catalog.h"

using namespace System;
using namespace System::Windows::Forms;
void main()
{

	User admin("root", "root", "root", "root", "root", "root");
	admin.setAdmin(true);
	User user1("user1", "user1", "user1", "user1", "user1", "user1");
	User user2("user2", "user2", "user2", "user2", "user2", "user2");
	BookSystem bookSystem;
	bookSystem.addUser(admin);
	bookSystem.addUser(user1);
	bookSystem.addUser(user2);

	Catalog catalog;

	Book book1("The Great Gatsby", "F. Scott Fitzgerald", "Scribner", "9780743273565", "Fiction", 12.99, true, 20, "Physical Copy");
	catalog.addBook(book1);

	Book book2("To Kill a Mockingbird", "Harper Lee", "J.B. Lippincott & Co.", "9780061120084", "Classics", 14.99, true, 15, "eBook");
	catalog.addBook(book2);

	Book book3("1984", "George Orwell", "Secker & Warburg", "9780451524935", "Science Fiction", 10.99, true, 25, "Physical Copy");
	catalog.addBook(book3);

	Book book4("Pride and Prejudice", "Jane Austen", "Thomas Egerton", "9781612930338", "Romance", 11.99, true, 18, "eBook");
	catalog.addBook(book4);

	Book book5("The Hobbit", "J.R.R. Tolkien", "Allen & Unwin", "9780345534835", "Fantasy", 16.99, true, 22, "Physical Copy");
	catalog.addBook(book5);

	Book book6("The Catcher in the Rye", "J.D. Salinger", "Little, Brown and Company", "9780316769480", "Classics", 13.99, true, 17, "Physical Copy");
	catalog.addBook(book6);

	Book book7("Moby-Dick", "Herman Melville", "Richard Bentley", "9780486411580", "Adventure", 15.99, true, 21, "eBook");
	catalog.addBook(book7);

	Book book8("The Lord of the Rings", "J.R.R. Tolkien", "Allen & Unwin", "9780345339706", "Fantasy", 19.99, true, 15, "Physical Copy");
	catalog.addBook(book8);

	Book book9("One Hundred Years of Solitude", "Gabriel García Márquez", "Harper & Row", "9780061120084", "Magical Realism", 15.99, true, 22, "eBook");
	catalog.addBook(book9);

	Book book10("Brave New World", "Aldous Huxley", "Chatto & Windus", "9780060850524", "Dystopian", 12.99, true, 20, "Physical Copy");
	catalog.addBook(book10);

	Book book11("The Odyssey", "Homer", "Penguin Classics", "9780140449112", "Epic Poetry", 14.99, true, 15, "eBook");
	catalog.addBook(book11);

	Book book12("The Great Expectations", "Charles Dickens", "Chapman & Hall", "9780141439563", "Classic Fiction", 10.99, true, 25, "Physical Copy");
	catalog.addBook(book12);

	Book book13("The Brothers Karamazov", "Fyodor Dostoevsky", "The Russian Messenger", "9780140449242", "Philosophical Fiction", 11.99, true, 18, "eBook");
	catalog.addBook(book13);

	Book book14("The Road", "Cormac McCarthy", "Knopf", "9780307387899", "Post-Apocalyptic", 16.99, true, 22, "Physical Copy");
	catalog.addBook(book14);

	Book book15("Wuthering Heights", "Emily Brontë", "Thomas Cautley Newby", "9780141439556", "Gothic Fiction", 13.99, true, 17, "Physical Copy");
	catalog.addBook(book15);

	Book book16("Frankenstein", "Mary Shelley", "Lackington, Hughes, Harding, Mavor, & Jones", "9780486282114", "Gothic Horror", 15.99, true, 21, "eBook");
	catalog.addBook(book16);

	Book book17("The Picture of Dorian Gray", "Oscar Wilde", "Ward, Lock and Company", "9780141442464", "Gothic Fiction", 19.99, true, 15, "Physical Copy");
	catalog.addBook(book17);

	Book book18("The Chronicles of Narnia", "C.S. Lewis", "Geoffrey Bles", "9780066238500", "Fantasy", 13.99, true, 18, "Physical Copy");
	catalog.addBook(book18);

	Book book19("Crime and Punishment", "Fyodor Dostoevsky", "The Russian Messenger", "9780140449136", "Psychological Fiction", 15.99, true, 22, "eBook");
	catalog.addBook(book19);

	Book book20("The Count of Monte Cristo", "Alexandre Dumas", "Penguin Classics", "9780140449266", "Adventure", 14.99, true, 20, "Physical Copy");
	catalog.addBook(book20);

	Book book21("Fahrenheit 451", "Ray Bradbury", "Simon & Schuster", "9781451673319", "Dystopian", 16.99, true, 15, "eBook");
	catalog.addBook(book21);

	Book book22("The Kite Runner", "Khaled Hosseini", "Riverhead Books", "9781594631931", "Contemporary Fiction", 10.99, true, 25, "Physical Copy");
	catalog.addBook(book22);

	Book book23("One Flew Over the Cuckoo's Nest", "Ken Kesey", "Viking Press", "9780451163967", "Psychological Fiction", 11.99, true, 18, "eBook");
	catalog.addBook(book23);

	Book book24("The Silmarillion", "J.R.R. Tolkien", "George Allen & Unwin", "9780261102736", "Fantasy", 16.99, true, 22, "Physical Copy");
	catalog.addBook(book24);
	Book book25("A Tale of Two Cities", "Charles Dickens", "Chapman & Hall", "9780141439600", "Historical Fiction", 13.99, true, 17, "Physical Copy");
	catalog.addBook(book25);

	Book book26("The Girl with the Dragon Tattoo", "Stieg Larsson", "Norstedts Förlag", "9780307454546", "Mystery", 15.99, true, 21, "eBook");
	catalog.addBook(book26);

	Book book27("The Joy Luck Club", "Amy Tan", "G.P. Putnam's Sons", "9780143038092", "Contemporary Fiction", 19.99, true, 15, "Physical Copy");
	catalog.addBook(book27);

	Book book28("The Hound of the Baskervilles", "Arthur Conan Doyle", "George Newnes", "9780140437867", "Mystery", 13.99, true, 18, "Physical Copy");
	catalog.addBook(book28);

	Book book29("The Martian", "Andy Weir", "Crown Publishing Group", "9780553418026", "Science Fiction", 15.99, true, 22, "eBook");
	catalog.addBook(book29);

	Book book30("The Art of War", "Sun Tzu", "Oxford University Press", "9780195014761", "Military Strategy", 10.99, true, 25, "Physical Copy");
	catalog.addBook(book30);

	Book book31("The Fountainhead", "Ayn Rand", "Bobbs-Merrill", "9780451191151", "Philosophical Fiction", 11.99, true, 18, "eBook");
	catalog.addBook(book31);

	Book book32("Sapiens: A Brief History of Humankind", "Yuval Noah Harari", "Harper", "9780062316110", "History", 16.99, true, 22, "Physical Copy");
	catalog.addBook(book32);

	Book book33("The Alchemist", "Paulo Coelho", "HarperOne", "9780061122415", "Philosophical Fiction", 13.99, true, 17, "Physical Copy");
	catalog.addBook(book33);

	Book book34("The Hitchhiker's Guide to the Galaxy", "Douglas Adams", "Pan Books", "9780345391803", "Science Fiction", 15.99, true, 21, "eBook");
	catalog.addBook(book34);

	Book book35("The Shining", "Stephen King", "Doubleday", "9780385121675", "Horror", 19.99, true, 15, "Physical Copy");
	catalog.addBook(book35);

	Book book36("The Grapes of Wrath", "John Steinbeck", "The Viking Press", "9780143039433", "Historical Fiction", 13.99, true, 18, "Physical Copy");
	catalog.addBook(book36);

	Book book37("Atlas Shrugged", "Ayn Rand", "Random House", "9780451191144", "Philosophical Fiction", 15.99, true, 22, "eBook");
	catalog.addBook(book37);
	Book book38("The Catcher in the Rye", "J.D. Salinger", "Little, Brown and Company", "9780316769480", "Modern Classics", 13.99, true, 18, "Physical Copy");
	catalog.addBook(book38);

	Book book39("One Hundred Years of Solitude", "Gabriel García Márquez", "Harper & Row", "9780061120084", "Magical Realism", 15.99, true, 22, "eBook");
	catalog.addBook(book39);

	Book book40("The Great War and Modern Memory", "Paul Fussell", "Oxford University Press", "9780195133325", "History", 14.99, true, 20, "Physical Copy");
	catalog.addBook(book40);

	Book book41("The Road to Serfdom", "Friedrich Hayek", "Routledge", "9780226320557", "Political Philosophy", 16.99, true, 15, "eBook");
	catalog.addBook(book41);

	Book book42("The Art of War", "Sun Tzu", "Oxford University Press", "9780195014761", "Military Strategy", 10.99, true, 25, "Physical Copy");
	catalog.addBook(book42);

	Book book43("The Fountainhead", "Ayn Rand", "Bobbs-Merrill", "9780451191151", "Philosophical Fiction", 11.99, true, 18, "eBook");
	catalog.addBook(book43);

	Book book44("Sapiens: A Brief History of Humankind", "Yuval Noah Harari", "Harper", "9780062316110", "History", 16.99, true, 22, "Physical Copy");
	catalog.addBook(book44);

	Book book45("The Alchemist", "Paulo Coelho", "HarperOne", "9780061122415", "Philosophical Fiction", 13.99, true, 17, "Physical Copy");
	catalog.addBook(book45);
	Book book46("The Hitchhiker's Guide to the Galaxy", "Douglas Adams", "Pan Books", "9780345391803", "Science Fiction", 15.99, true, 21, "eBook");
	catalog.addBook(book46);

	Book book47("The Shining", "Stephen King", "Doubleday", "9780385121675", "Horror", 19.99, true, 15, "Physical Copy");
	catalog.addBook(book47);

	Book book48("The Grapes of Wrath", "John Steinbeck", "The Viking Press", "9780143039433", "Historical Fiction", 13.99, true, 18, "Physical Copy");
	catalog.addBook(book48);

	Book book49("Atlas Shrugged", "Ayn Rand", "Random House", "9780451191144", "Philosophical Fiction", 15.99, true, 22, "eBook");
	catalog.addBook(book49);

	Book book50("The Count of Monte Cristo", "Alexandre Dumas", "Penguin Classics", "9780140449266", "Adventure", 14.99, true, 20, "Physical Copy");
	catalog.addBook(book50);

	Book book51("Fahrenheit 451", "Ray Bradbury", "Simon & Schuster", "9781451673319", "Dystopian", 16.99, true, 15, "eBook");
	catalog.addBook(book51);

	Book book52("The Kite Runner", "Khaled Hosseini", "Riverhead Books", "9781594631931", "Contemporary Fiction", 10.99, true, 25, "Physical Copy");
	catalog.addBook(book52);

	Book book53("One Flew Over the Cuckoo's Nest", "Ken Kesey", "Viking Press", "9780451163967", "Psychological Fiction", 11.99, true, 18, "eBook");
	catalog.addBook(book53);

	Book book54("The Silmarillion", "J.R.R. Tolkien", "George Allen & Unwin", "9780261102736", "Fantasy", 16.99, true, 22, "Physical Copy");
	catalog.addBook(book54);

	Book book55("A Tale of Two Cities", "Charles Dickens", "Chapman & Hall", "9780141439600", "Historical Fiction", 13.99, true, 17, "Physical Copy");
	catalog.addBook(book55);











	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	OnlineBookStore::LandingPage form;
	Application::Run(% form);
}
