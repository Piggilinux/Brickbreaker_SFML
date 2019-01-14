#include "bricks.hpp"


Bricks::Bricks()
{
  this->capacity = 100;
  this->nr_of_blocks = 10;
  this->block = new Block*[this->capacity];
//  this->block[0] = new Block(20, 20, 100, 30);
  int xPos = 0;
  for (int i = 0; i < this->nr_of_blocks; i++)
  {
    this->block[i] = new Block(xPos, 20, 80, 30);
    xPos += 80;
    // sf::RectangleShape derp = this->block[i]->get_rect();
    // this->block[i]->set_rect(derp.setFillColor(sf::Color::Blue));
  }
}

Bricks::~Bricks()
{
  this->freeMemory();
}

int Bricks::getNrOfBricks()
{
  return this->nr_of_blocks;
}

void Bricks::freeMemory()
{
  for (int i = 0; i < this->nr_of_blocks; i++)
  {
    delete this->block[i];
  }
}

void Bricks::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
  target.draw(*block[0], states); // ta bort? testa
  for (int i = 0; i < this->nr_of_blocks; i++)
  {
    target.draw(*block[i], states);
  }
}

void Bricks::makeCopy(const Bricks & origObject)
{
  this->nr_of_blocks= origObject.nr_of_blocks;
  this->capacity = origObject.capacity;
  this->block = new Block*[origObject.capacity];

  for (int i = 0; i < this->nr_of_blocks; i++)
  {
    this->block[i] = new Block(*origObject.block[i]);
  }
}

void Bricks::expand()
{
  this->capacity += 4;
  Block* *temp = new Block*[this->capacity];

  for (int i = 0; i < nr_of_blocks; i++)
  {
    temp[i] = this->block[i];
  }

  delete[] this->block;
  this->block = temp;
  this->initiate(this->nr_of_blocks);
}

void Bricks::initiate(int from)
{
  for (int i = 0; i < this->capacity; i++)
  {
    this->block[i] = nullptr;
  }
}

sf::RectangleShape Bricks::getBlockPos(int blockPos)
{
  return this->block[blockPos]->get_rect();
}


void Bricks::removeBlock(int nr_to_remove)
{
  delete this->block[nr_to_remove];
  if (this->nr_of_blocks != 0)
  {
      this->block[nr_to_remove] = this->block[--this->nr_of_blocks];
  }

  cout << this->nr_of_blocks << endl;
}
