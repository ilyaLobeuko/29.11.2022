#include <SFML/Graphics.hpp>

using namespace sf;
const float SC_WIDTH = 800.f;
const float SC_HEIGHT = 600.f;
int main()
{
	// Объект, который, собственно, является главным окном приложения
	RenderWindow window(VideoMode(SC_WIDTH, SC_HEIGHT), "SFML Works!");
	float radius = 200.f;
    float radius1 = 100.f;
	CircleShape c1(radius);
	CircleShape c2(radius1);
	c1.move((SC_WIDTH - 2 * radius) / 2, (SC_HEIGHT - 2 * radius) / 2);
	c2.move((SC_WIDTH - 2 * radius1) / 2, (SC_HEIGHT - 2 * radius1) / 2);
	c1.setFillColor(Color{ 235,8,202 });
	c2.setFillColor(Color{ 134,6,264 });

	// Главный цикл приложения. Выполняется, пока открыто окно
	while (window.isOpen())
	{
		// Обрабатываем очередь событий в цикле
		Event event;
		while (window.pollEvent(event))
		{
			// Пользователь нажал на «крестик» и хочет закрыть окно?
			if (event.type == Event::Closed)
				// тогда закрываем его
				window.close();
		}
		window.clear();
		window.draw(c1);
		window.draw(c2);
	
		// Отрисовка окна 
		window.display();
	}

	return 0;
}