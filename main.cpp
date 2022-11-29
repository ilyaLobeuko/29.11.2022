#include <SFML/Graphics.hpp>

using namespace sf;
const float SC_WIDTH = 800.f;
const float SC_HEIGHT = 600.f;
int main()
{
	// ������, �������, ����������, �������� ������� ����� ����������
	RenderWindow window(VideoMode(SC_WIDTH, SC_HEIGHT), "SFML Works!");
	float radius = 200.f;
    float radius1 = 100.f;
	CircleShape c1(radius);
	CircleShape c2(radius1);
	c1.move((SC_WIDTH - 2 * radius) / 2, (SC_HEIGHT - 2 * radius) / 2);
	c2.move((SC_WIDTH - 2 * radius1) / 2, (SC_HEIGHT - 2 * radius1) / 2);
	c1.setFillColor(Color{ 235,8,202 });
	c2.setFillColor(Color{ 134,6,264 });

	// ������� ���� ����������. �����������, ���� ������� ����
	while (window.isOpen())
	{
		// ������������ ������� ������� � �����
		Event event;
		while (window.pollEvent(event))
		{
			// ������������ ����� �� �������� � ����� ������� ����?
			if (event.type == Event::Closed)
				// ����� ��������� ���
				window.close();
		}
		window.clear();
		window.draw(c1);
		window.draw(c2);
	
		// ��������� ���� 
		window.display();
	}

	return 0;
}