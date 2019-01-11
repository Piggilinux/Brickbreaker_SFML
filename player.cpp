#include "player.hpp"

Player::Player()
{
  this->capacity = 10;
  this->nr_of_blocks = 1;
  this->block = new Block*[this->capacity];
  this->block[0] = new Block(50, 450, 30);
}

Player::~Player()
{
  this->freeMemory();
}

void Player::freeMemory()
{
  for (int i = 0; i < this->nr_of_blocks; i++)
  {
    delete this->block[i];
  }
}

void Player::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
  target.draw(*block[0], states); // ta bort? testa
  for (int i = 0; i < this->nr_of_blocks; i++)
  {
    target.draw(*block[i], states);
  }
}

void Player::makeCopy(const Player & origObject)
{
  this->nr_of_blocks= origObject.nr_of_blocks;
  this->capacity = origObject.capacity;
  this->block = new Block*[origObject.capacity];

  for (int i = 0; i < this->nr_of_blocks; i++)
  {
    this->block[i] = new Block(*origObject.block[i]);
  }
}

void Player::expand()
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

void Player::initiate(int from)
{
  for (int i = 0; i < this->capacity; i++)
  {
    this->block[i] = nullptr;
  }
}
