#include "public.h"
  
int TexasCombine5(unsigned char* pCard, 
         unsigned char* pCardColor, unsigned char** pCardResult, unsigned char** pColorResult)
{
  int count = 0;
  //这里为了速度，没用求组合的公式
  if (pCard[6] == 0)//6张牌
  {
    count = 6;
    *pCardResult = (unsigned char*)MyAlloc(30);
    *pColorResult = (unsigned char*)MyAlloc(30);
  
    *(*pCardResult + 0) = pCard[0];
    *(*pColorResult + 0) = pCardColor[0];
    *(*pCardResult + 1) = pCard[1];
    *(*pColorResult + 1) = pCardColor[1];
    *(*pCardResult + 2) = pCard[2];
    *(*pColorResult + 2) = pCardColor[2];
    *(*pCardResult + 3) = pCard[3];
    *(*pColorResult + 3) = pCardColor[3];
    *(*pCardResult + 4) = pCard[4];
    *(*pColorResult + 4) = pCardColor[4];
  
    *(*pCardResult + 5) = pCard[0];
    *(*pColorResult + 5) = pCardColor[0];
    *(*pCardResult + 6) = pCard[1];
    *(*pColorResult + 6) = pCardColor[1];
    *(*pCardResult + 7) = pCard[2];
    *(*pColorResult + 7) = pCardColor[2];
    *(*pCardResult + 8) = pCard[3];
    *(*pColorResult + 8) = pCardColor[3];
    *(*pCardResult + 9) = pCard[5];
    *(*pColorResult + 9) = pCardColor[5];
  
    *(*pCardResult + 10) = pCard[0];
    *(*pColorResult + 10) = pCardColor[0];
    *(*pCardResult + 11) = pCard[1];
    *(*pColorResult + 11) = pCardColor[1];
    *(*pCardResult + 12) = pCard[2];
    *(*pColorResult + 12) = pCardColor[2];
    *(*pCardResult + 13) = pCard[4];
    *(*pColorResult + 13) = pCardColor[4];
    *(*pCardResult + 14) = pCard[5];
    *(*pColorResult + 14) = pCardColor[5];
  
    *(*pCardResult + 15) = pCard[0];
    *(*pColorResult + 15) = pCardColor[0];
    *(*pCardResult + 16) = pCard[1];
    *(*pColorResult + 16) = pCardColor[1];
    *(*pCardResult + 17) = pCard[3];
    *(*pColorResult + 17) = pCardColor[3];
    *(*pCardResult + 18) = pCard[4];
    *(*pColorResult + 18) = pCardColor[4];
    *(*pCardResult + 19) = pCard[5];
    *(*pColorResult + 19) = pCardColor[5];
  
    *(*pCardResult + 20) = pCard[0];
    *(*pColorResult + 20) = pCardColor[0];
    *(*pCardResult + 21) = pCard[2];
    *(*pColorResult + 21) = pCardColor[2];
    *(*pCardResult + 22) = pCard[3];
    *(*pColorResult + 22) = pCardColor[3];
    *(*pCardResult + 23) = pCard[4];
    *(*pColorResult + 23) = pCardColor[4];
    *(*pCardResult + 24) = pCard[5];
    *(*pColorResult + 24) = pCardColor[5];
  
    *(*pCardResult + 25) = pCard[1];
    *(*pColorResult + 25) = pCardColor[1];
    *(*pCardResult + 26) = pCard[2];
    *(*pColorResult + 26) = pCardColor[2];
    *(*pCardResult + 27) = pCard[3];
    *(*pColorResult + 27) = pCardColor[3];
    *(*pCardResult + 28) = pCard[4];
    *(*pColorResult + 28) = pCardColor[4];
    *(*pCardResult + 29) = pCard[5];
    *(*pColorResult + 29) = pCardColor[5];
  }
  else
  {
    count = 21;
    *pCardResult = (unsigned char*)MyAlloc(105);
    *pColorResult = (unsigned char*)MyAlloc(105);
    //0
    *(*pCardResult + 0) = pCard[0];
    *(*pColorResult + 0) = pCardColor[0];
    *(*pCardResult + 1) = pCard[1];
    *(*pColorResult + 1) = pCardColor[1];
    *(*pCardResult + 2) = pCard[2];
    *(*pColorResult + 2) = pCardColor[2];
    *(*pCardResult + 3) = pCard[3];
    *(*pColorResult + 3) = pCardColor[3];
    *(*pCardResult + 4) = pCard[4];
    *(*pColorResult + 4) = pCardColor[4];
    //1
    *(*pCardResult + 5) = pCard[0];
    *(*pColorResult + 5) = pCardColor[0];
    *(*pCardResult + 6) = pCard[1];
    *(*pColorResult + 6) = pCardColor[1];
    *(*pCardResult + 7) = pCard[2];
    *(*pColorResult + 7) = pCardColor[2];
    *(*pCardResult + 8) = pCard[3];
    *(*pColorResult + 8) = pCardColor[3];
    *(*pCardResult + 9) = pCard[5];
    *(*pColorResult + 9) = pCardColor[5];
    //2
    *(*pCardResult + 10) = pCard[0];
    *(*pColorResult + 10) = pCardColor[0];
    *(*pCardResult + 11) = pCard[1];
    *(*pColorResult + 11) = pCardColor[1];
    *(*pCardResult + 12) = pCard[2];
    *(*pColorResult + 12) = pCardColor[2];
    *(*pCardResult + 13) = pCard[3];
    *(*pColorResult + 13) = pCardColor[3];
    *(*pCardResult + 14) = pCard[6];
    *(*pColorResult + 14) = pCardColor[6];
    //3
    *(*pCardResult + 15) = pCard[0];
    *(*pColorResult + 15) = pCardColor[0];
    *(*pCardResult + 16) = pCard[1];
    *(*pColorResult + 16) = pCardColor[1];
    *(*pCardResult + 17) = pCard[2];
    *(*pColorResult + 17) = pCardColor[2];
    *(*pCardResult + 18) = pCard[4];
    *(*pColorResult + 18) = pCardColor[4];
    *(*pCardResult + 19) = pCard[5];
    *(*pColorResult + 19) = pCardColor[5];
    //4
    *(*pCardResult + 20) = pCard[0];
    *(*pColorResult + 20) = pCardColor[0];
    *(*pCardResult + 21) = pCard[1];
    *(*pColorResult + 21) = pCardColor[1];
    *(*pCardResult + 22) = pCard[2];
    *(*pColorResult + 22) = pCardColor[2];
    *(*pCardResult + 23) = pCard[4];
    *(*pColorResult + 23) = pCardColor[4];
    *(*pCardResult + 24) = pCard[6];
    *(*pColorResult + 24) = pCardColor[6];
    //5
    *(*pCardResult + 25) = pCard[0];
    *(*pColorResult + 25) = pCardColor[0];
    *(*pCardResult + 26) = pCard[1];
    *(*pColorResult + 26) = pCardColor[1];
    *(*pCardResult + 27) = pCard[2];
    *(*pColorResult + 27) = pCardColor[2];
    *(*pCardResult + 28) = pCard[5];
    *(*pColorResult + 28) = pCardColor[5];
    *(*pCardResult + 29) = pCard[6];
    *(*pColorResult + 29) = pCardColor[6];
    //6
    *(*pCardResult + 30) = pCard[0];
    *(*pColorResult + 30) = pCardColor[0];
    *(*pCardResult + 31) = pCard[1];
    *(*pColorResult + 31) = pCardColor[1];
    *(*pCardResult + 32) = pCard[3];
    *(*pColorResult + 32) = pCardColor[3];
    *(*pCardResult + 33) = pCard[4];
    *(*pColorResult + 33) = pCardColor[4];
    *(*pCardResult + 34) = pCard[5];
    *(*pColorResult + 34) = pCardColor[5];
    //7
    *(*pCardResult + 35) = pCard[0];
    *(*pColorResult + 35) = pCardColor[0];
    *(*pCardResult + 36) = pCard[1];
    *(*pColorResult + 36) = pCardColor[1];
    *(*pCardResult + 37) = pCard[3];
    *(*pColorResult + 37) = pCardColor[3];
    *(*pCardResult + 38) = pCard[4];
    *(*pColorResult + 38) = pCardColor[4];
    *(*pCardResult + 39) = pCard[6];
    *(*pColorResult + 39) = pCardColor[6];
    //8
    *(*pCardResult + 40) = pCard[0];
    *(*pColorResult + 40) = pCardColor[0];
    *(*pCardResult + 41) = pCard[1];
    *(*pColorResult + 41) = pCardColor[1];
    *(*pCardResult + 42) = pCard[3];
    *(*pColorResult + 42) = pCardColor[3];
    *(*pCardResult + 43) = pCard[5];
    *(*pColorResult + 43) = pCardColor[5];
    *(*pCardResult + 44) = pCard[6];
    *(*pColorResult + 44) = pCardColor[6];
    //9
    *(*pCardResult + 45) = pCard[0];
    *(*pColorResult + 45) = pCardColor[0];
    *(*pCardResult + 46) = pCard[1];
    *(*pColorResult + 46) = pCardColor[1];
    *(*pCardResult + 47) = pCard[4];
    *(*pColorResult + 47) = pCardColor[4];
    *(*pCardResult + 48) = pCard[5];
    *(*pColorResult + 48) = pCardColor[5];
    *(*pCardResult + 49) = pCard[6];
    *(*pColorResult + 49) = pCardColor[6];
    //10
    *(*pCardResult + 50) = pCard[0];
    *(*pColorResult + 50) = pCardColor[0];
    *(*pCardResult + 51) = pCard[2];
    *(*pColorResult + 51) = pCardColor[2];
    *(*pCardResult + 52) = pCard[3];
    *(*pColorResult + 52) = pCardColor[3];
    *(*pCardResult + 53) = pCard[4];
    *(*pColorResult + 53) = pCardColor[4];
    *(*pCardResult + 54) = pCard[5];
    *(*pColorResult + 54) = pCardColor[5];
    //11
    *(*pCardResult + 55) = pCard[0];
    *(*pColorResult + 55) = pCardColor[0];
    *(*pCardResult + 56) = pCard[2];
    *(*pColorResult + 56) = pCardColor[2];
    *(*pCardResult + 57) = pCard[3];
    *(*pColorResult + 57) = pCardColor[3];
    *(*pCardResult + 58) = pCard[4];
    *(*pColorResult + 58) = pCardColor[4];
    *(*pCardResult + 59) = pCard[6];
    *(*pColorResult + 59) = pCardColor[6];
    //12
    *(*pCardResult + 60) = pCard[0];
    *(*pColorResult + 60) = pCardColor[0];
    *(*pCardResult + 61) = pCard[2];
    *(*pColorResult + 61) = pCardColor[2];
    *(*pCardResult + 62) = pCard[3];
    *(*pColorResult + 62) = pCardColor[3];
    *(*pCardResult + 63) = pCard[5];
    *(*pColorResult + 63) = pCardColor[5];
    *(*pCardResult + 64) = pCard[6];
    *(*pColorResult + 64) = pCardColor[6];
    //13
    *(*pCardResult + 65) = pCard[0];
    *(*pColorResult + 65) = pCardColor[0];
    *(*pCardResult + 66) = pCard[2];
    *(*pColorResult + 66) = pCardColor[2];
    *(*pCardResult + 67) = pCard[4];
    *(*pColorResult + 67) = pCardColor[4];
    *(*pCardResult + 68) = pCard[5];
    *(*pColorResult + 68) = pCardColor[5];
    *(*pCardResult + 69) = pCard[6];
    *(*pColorResult + 69) = pCardColor[6];
    //14
    *(*pCardResult + 70) = pCard[0];
    *(*pColorResult + 70) = pCardColor[0];
    *(*pCardResult + 71) = pCard[3];
    *(*pColorResult + 71) = pCardColor[3];
    *(*pCardResult + 72) = pCard[4];
    *(*pColorResult + 72) = pCardColor[4];
    *(*pCardResult + 73) = pCard[5];
    *(*pColorResult + 73) = pCardColor[5];
    *(*pCardResult + 74) = pCard[6];
    *(*pColorResult + 74) = pCardColor[6];
    //15
    *(*pCardResult + 75) = pCard[1];
    *(*pColorResult + 75) = pCardColor[1];
    *(*pCardResult + 76) = pCard[2];
    *(*pColorResult + 76) = pCardColor[2];
    *(*pCardResult + 77) = pCard[3];
    *(*pColorResult + 77) = pCardColor[3];
    *(*pCardResult + 78) = pCard[4];
    *(*pColorResult + 78) = pCardColor[4];
    *(*pCardResult + 79) = pCard[5];
    *(*pColorResult + 79) = pCardColor[5];
    //16
    *(*pCardResult + 80) = pCard[1];
    *(*pColorResult + 80) = pCardColor[1];
    *(*pCardResult + 81) = pCard[2];
    *(*pColorResult + 81) = pCardColor[2];
    *(*pCardResult + 82) = pCard[3];
    *(*pColorResult + 82) = pCardColor[3];
    *(*pCardResult + 83) = pCard[4];
    *(*pColorResult + 83) = pCardColor[4];
    *(*pCardResult + 84) = pCard[6];
    *(*pColorResult + 84) = pCardColor[6];
    //17
    *(*pCardResult + 85) = pCard[1];
    *(*pColorResult + 85) = pCardColor[1];
    *(*pCardResult + 86) = pCard[2];
    *(*pColorResult + 86) = pCardColor[2];
    *(*pCardResult + 87) = pCard[3];
    *(*pColorResult + 87) = pCardColor[3];
    *(*pCardResult + 88) = pCard[5];
    *(*pColorResult + 88) = pCardColor[5];
    *(*pCardResult + 89) = pCard[6];
    *(*pColorResult + 89) = pCardColor[6];
    //18
    *(*pCardResult + 90) = pCard[1];
    *(*pColorResult + 90) = pCardColor[1];
    *(*pCardResult + 91) = pCard[2];
    *(*pColorResult + 91) = pCardColor[2];
    *(*pCardResult + 92) = pCard[4];
    *(*pColorResult + 92) = pCardColor[4];
    *(*pCardResult + 93) = pCard[5];
    *(*pColorResult + 93) = pCardColor[5];
    *(*pCardResult + 94) = pCard[6];
    *(*pColorResult + 94) = pCardColor[6];
    //19
    *(*pCardResult + 95) = pCard[1];
    *(*pColorResult + 95) = pCardColor[1];
    *(*pCardResult + 96) = pCard[3];
    *(*pColorResult + 96) = pCardColor[3];
    *(*pCardResult + 97) = pCard[4];
    *(*pColorResult + 97) = pCardColor[4];
    *(*pCardResult + 98) = pCard[5];
    *(*pColorResult + 98) = pCardColor[5];
    *(*pCardResult + 99) = pCard[6];
    *(*pColorResult + 99) = pCardColor[6];
    //20
    *(*pCardResult + 100) = pCard[2];
    *(*pColorResult + 100) = pCardColor[2];
    *(*pCardResult + 101) = pCard[3];
    *(*pColorResult + 101) = pCardColor[3];
    *(*pCardResult + 102) = pCard[4];
    *(*pColorResult + 102) = pCardColor[4];
    *(*pCardResult + 103) = pCard[5];
    *(*pColorResult + 103) = pCardColor[5];
    *(*pCardResult + 104) = pCard[6];
    *(*pColorResult + 104) = pCardColor[6];
  }
  return count;
}
  
void CardSort(unsigned char* p, unsigned char* p2, int pCount)
{
  int i, j;
  unsigned char c;
  for (i = 0; i < pCount - 1; ++i)
  {
    for (j = i + 1; j < pCount; ++j)
    {
      if (p[i] < p[j])
      {
        c = p[i];
        p[i] = p[j];
        p[j] = c;
        c = p2[i];
        p2[i] = p2[j];
        p2[j] = c;
      }
    }
  }
}
  
//结果值:
//detail:
//对于高牌，从左起第4位，分别返回五张牌从大到小的牌点值，如:0x000DA932表示 A,J,10,4,3
//注：对于牌张不足5张的高牌，从左起第4位，分别返回从大到小的牌点值，无牌的位置填0，如:0x000DA000表示 A,J
//对于1对，在左起第4位返回牌点值，如:0x000D9870.表示A一对, 8, 7, 6
//对于2对，在左起第4，5位返回牌点值，如:0x000D9C00.表示A一对，10一对, Q
//对于3条，在左起第4位返回牌点值，如:0x0002D900，表示三条3,A,10
//对于顺子，在左起第4位返回顺子的最大牌点值，如:0x000C0000,表示K,Q,J,10,9,8
//对于同花，从左起第4位，分别返回五张牌从大到小的牌点值，如:0x000DA932表示 A,J,10,4,3
//对于葫芦，从左起第4,5位返回牌点值，如:0x000DA000表示 A,A,A,J,J
//对于金刚，在左起第4位返回牌点值，如:0x000DA000.表示A金刚,J
//对于同花顺，在左起第4位返回牌点值，如:0x00080000，表示98765的同花顺
void TexasCalcLevel(unsigned char *card, unsigned char *cardColor, LPCARD_LEVEL pResult)
{
  if (card[2] == 0)//两张牌
  {
    if (card[0] == card[1])//一对
    {
      pResult->detail = card[0] << 16;
      pResult->level = TEXAS_CARD_LEVEL_PAIR;
    }
    else//高牌
    {
      pResult->detail = (card[0] << 16) + (card[1] << 12);
      pResult->level = TEXAS_CARD_LEVEL_HIGH;
    }
  }
  else if (card[3] == 0)//三张牌
  {
    //可能是高牌,一对，三条
    if (card[0] == card[1] && card[1] == card[2])//三条
    {
      pResult->detail = card[0] << 16;
      pResult->level = TEXAS_CARD_LEVEL_ARTICLE_3;
    }
    else if (card[0] == card[1] || card[0] == card[2])//一对
    {
      pResult->detail = (card[0] << 16) + (card[2] << 12);
      pResult->level = TEXAS_CARD_LEVEL_PAIR;
    }
    else if (card[1] == card[2])//一对
    {
      pResult->detail = (card[1] << 16) + (card[2] << 12);
      pResult->level = TEXAS_CARD_LEVEL_PAIR;
    }
    else//高牌
    {
      pResult->detail = (card[0] << 16) + (card[1] << 12) + (card[2] << 8);
      pResult->level = TEXAS_CARD_LEVEL_HIGH;
    }
  }
  else if (card[4] == 0)//四张牌
  {
    //可能是金刚，高牌, 一对，两对，三条
    if (card[0] == card[1] && card[1] == card[2] && card[2] == card[3])//金刚
    {
      pResult->detail = card[0] << 16;
      pResult->level = TEXAS_CARD_LEVEL_ARTICLE_4;
    }
    else
    {
      if (card[2] == card[3] && card[1] == card[2])//三条
      {
        pResult->detail = (card[1] << 16) + (card[3] << 12);
        pResult->level = TEXAS_CARD_LEVEL_ARTICLE_3;
      }
      else if (card[0] == card[1] && card[1] == card[2])//三条
      {
        pResult->detail = (card[0] << 16) + (card[3] << 12);
        pResult->level = TEXAS_CARD_LEVEL_ARTICLE_3;
      }
      else if (card[0] == card[1] && card[2] == card[3])//两对
      {
        pResult->detail = (card[0] << 16) + (card[2] << 12);
        pResult->level = TEXAS_CARD_LEVEL_TWO_PAIR;
      }
      else if (card[0] == card[1] || card[1] == card[2])//一对
      {
        pResult->detail = (card[1] << 16) + (card[1] << 12) + (card[3] << 8);
        pResult->level = TEXAS_CARD_LEVEL_PAIR;
      }
      else if (card[2] == card[3])//一对
      {
        pResult->detail = (card[2] << 16) + (card[0] << 12) + (card[3] << 8);
        pResult->level = TEXAS_CARD_LEVEL_PAIR;
      }
      else//高牌
      {
        pResult->detail = (card[0] << 16) + (card[1] << 12) + (card[2] << 8) + (card[3] << 4);
        pResult->level = TEXAS_CARD_LEVEL_HIGH;
      }
    }
  }
  else //五张牌
  {
    if (card[0] == card[1] && card[1] == card[2] && card[2] == card[3])//金刚
    {
      pResult->detail = (card[1] << 16) + (card[4] << 12);
      pResult->level = TEXAS_CARD_LEVEL_ARTICLE_4;
    }
    else if (card[4] == card[1] && card[1] == card[2] && card[2] == card[3])//金刚
    {
      pResult->detail = (card[1] << 16) + (card[0] << 12);
      pResult->level = TEXAS_CARD_LEVEL_ARTICLE_4;
    }
    else if (card[0] == card[1] && card[1] == card[2] && card[3] == card[4])//葫芦
    {
      pResult->detail = (card[0] << 16) + (card[3] << 12);
      pResult->level = TEXAS_CARD_LEVEL_FULL_HOUSE;
    }
    else if (card[0] == card[1] && card[2] == card[3] && card[3] == card[4])//葫芦
    {
      pResult->detail = (card[2] << 16) + (card[0] << 12);
      pResult->level = TEXAS_CARD_LEVEL_FULL_HOUSE;
    }
    else if ((card[0] - card[1] == 1 || card[0] - card[4] == 12)
      && card[1] - card[2] == 1
      && card[2] - card[3] == 1
      && card[3] - card[4] == 1
      )//同花顺或者顺子
    {
      if (cardColor[0] == cardColor[1]
      && cardColor[0] == cardColor[2]
      && cardColor[0] == cardColor[3]
      && cardColor[0] == cardColor[4]
      )//同花顺
      {
        if (card[0] == 0x0D)//12345小于23456,所以12345中最大的是5
        {
          pResult->detail = card[1] << 16;
          pResult->level = TEXAS_CARD_LEVEL_STRAIGHT_FLUSH;
        }
        else
        {
          pResult->detail = card[0] << 16;
          pResult->level = TEXAS_CARD_LEVEL_STRAIGHT_FLUSH;
        }
      }
      else//顺子
      {
        pResult->level = TEXAS_CARD_LEVEL_STRAIGHT;
        if (card[0] == 0x0D)//12345小于23456,所以12345中最大的是5
        {
          pResult->detail = card[1] << 16;
        }
        else
        {
          pResult->detail = card[0] << 16;
        }
      }
    }
    else if (cardColor[0] == cardColor[1]
      && cardColor[0] == cardColor[2]
      && cardColor[0] == cardColor[3]
      && cardColor[0] == cardColor[4]
    )//同花或者同花顺
    {
      pResult->detail = 0;
      if (card[0] - card[1] == 1
        && card[1] - card[2] == 1
        && card[2] - card[3] == 1
        && card[3] - card[4] == 1
        )//同花顺
      {
        if (card[0] == 0x0D)//12345小于23456,所以12345中最大的是5
        {
          pResult->detail = card[1] << 16;
          pResult->level = TEXAS_CARD_LEVEL_STRAIGHT_FLUSH;
        }
        else
        {
          pResult->detail = card[0] << 16;
          pResult->level = TEXAS_CARD_LEVEL_STRAIGHT_FLUSH;
        }
      }
      else//同花
      {
        pResult->detail = ((card[0] << 16) + (card[1] << 12) + (card[2] << 8) + (card[3] << 4) + card[4]);
        pResult->level = TEXAS_CARD_LEVEL_FLUSH;
      }
    }
    else //三条，两队，一对，高牌
    {
      if (card[0] == card[1] && card[1] == card[2])//三条
      {
        pResult->detail = (card[2] << 16) + (card[3] << 12) + (card[4] << 8);
        pResult->level = TEXAS_CARD_LEVEL_ARTICLE_3;
      }
      else if (card[1] == card[2] && card[2] == card[3])//三条
      {
        pResult->detail = (card[2] << 16) + (card[0] << 12) + (card[4] << 8);
        pResult->level = TEXAS_CARD_LEVEL_ARTICLE_3;
      }
      else if (card[2] == card[3] && card[3] == card[4])//三条
      {
        pResult->detail = (card[2] << 16) + (card[0] << 12) + (card[1] << 8);
        pResult->level = TEXAS_CARD_LEVEL_ARTICLE_3;
      }
      else if (card[0] == card[1] && card[2] == card[3])//两对
      {
        pResult->detail = (card[0] << 16) + (card[2] << 12) + (card[4] << 8);
        pResult->level = TEXAS_CARD_LEVEL_TWO_PAIR;
      }
      else if (card[0] == card[1] && card[3] == card[4])//两对
      {
        pResult->detail = (card[0] << 16) + (card[3] << 12) + (card[2] << 8);
        pResult->level = TEXAS_CARD_LEVEL_TWO_PAIR;
      }
      else if (card[1] == card[2] && card[3] == card[4])//两对
      {
        pResult->detail = (card[1] << 16) + (card[3] << 12) + (card[0] << 8);
        pResult->level = TEXAS_CARD_LEVEL_TWO_PAIR;
      }
      else if (card[0] == card[1])//一对
      {
        pResult->detail = (card[0] << 16) + (card[2] << 12) + (card[3] << 8) + (card[4] << 4);
        pResult->level = TEXAS_CARD_LEVEL_PAIR;
      }
      else if (card[1] == card[2])//一对
      {
        pResult->detail = (card[1] << 16) + (card[0] << 12) + (card[3] << 8) + (card[4] << 4);
        pResult->level = TEXAS_CARD_LEVEL_PAIR;
      }
      else if (card[2] == card[3])//一对
      {
        pResult->detail = (card[2] << 16) + (card[0] << 12) + (card[1] << 8) + (card[4] << 4);
        pResult->level = TEXAS_CARD_LEVEL_PAIR;
      }
      else if (card[3] == card[4])//一对
      {
        pResult->detail = (card[3] << 16) + (card[0] << 12) + (card[1] << 8) + (card[2] << 4);
        pResult->level = TEXAS_CARD_LEVEL_PAIR;
      }
      else//高牌
      {
        pResult->detail = (card[0] << 16) + (card[1] << 12) + (card[2] << 8) + (card[3] << 4) + card[4];
        pResult->level = TEXAS_CARD_LEVEL_HIGH;
      }
    }
  }
}
  
//参数值:0表示为空牌,c1,c2是玩家手上的牌，其它是公共牌,公共牌允许为空牌，但所有空牌必须放在最后
//返回值:如果牌张数小于2，则返回0,否则返回1
int TexasCalcLevelEx(unsigned char c1, unsigned char c2, 
          unsigned char c3, unsigned char c4, unsigned char c5, unsigned char c6, unsigned char c7
          , LPCARD_LEVEL pResult)
{
  unsigned char card[7];
  unsigned char cardColor[7];
  if (c1 == 0 || c2 == 0)//c1，c2原则上不能为空牌
  {
    return 0;
  }
  //得到全部的牌点
  card[0] = c1 & 0x0F;
  card[1] = c2 & 0x0F;
  card[2] = c3 & 0x0F;
  card[3] = c4 & 0x0F;
  card[4] = c5 & 0x0F;
  card[5] = c6 & 0x0F;
  card[6] = c7 & 0x0F;
  //得到全部的牌颜色
  cardColor[0] = c1 >> 4;
  cardColor[1] = c2 >> 4;
  cardColor[2] = c3 >> 4;
  cardColor[3] = c4 >> 4;
  cardColor[4] = c5 >> 4;
  cardColor[5] = c6 >> 4;
  cardColor[6] = c7 >> 4;
  CardSort(card, cardColor, 7);
  if (card[5]) //六张牌或者七张牌
  {
    unsigned char *allCardCombResult;
    unsigned char *allCardCombResultColor;
    //先获取全部的5张牌组合
    int cardCombCount = TexasCombine5(card, cardColor, &allCardCombResult, &allCardCombResultColor);
    int i;
    CARD_LEVEL cardLevel;
    pResult->detail = pResult->level = 0;
    //逐个组合计算等级，并取最大值
    for (i = 0; i < cardCombCount; ++i)
    {
      TexasCalcLevel(allCardCombResult + i * 5, allCardCombResultColor + i * 5, &cardLevel);
      ////打印中间结果
      //char buff[32];
      //allCardCombResult[i * 5] += allCardCombResultColor[i * 5] << 4;
      //allCardCombResult[i * 5+1] += allCardCombResultColor[i * 5+1] << 4;
      //allCardCombResult[i * 5+2] += allCardCombResultColor[i * 5+2] << 4;
      //allCardCombResult[i * 5+3] += allCardCombResultColor[i * 5+3] << 4;
      //allCardCombResult[i * 5+4] += allCardCombResultColor[i * 5+4] << 4;
      //GLog("%s %s,%s,%s,%s,%s\r\n", TexasGetCardLevelDesc(&cardLevel, buff) 
      // ,CardGetName(allCardCombResult[i * 5])
      // ,CardGetName(allCardCombResult[i * 5+1])
      // ,CardGetName(allCardCombResult[i * 5+2])
      // ,CardGetName(allCardCombResult[i * 5+3])
      // ,CardGetName(allCardCombResult[i * 5+4])
      // );
      if (cardLevel.level > pResult->level || cardLevel.level == pResult->level && cardLevel.detail >= pResult->detail)
      {
        pResult->level = cardLevel.level;
        pResult->detail = cardLevel.detail;
      }
    }
    MyFree(allCardCombResult);
    MyFree(allCardCombResultColor);
  }
  else
  {
    TexasCalcLevel(card, cardColor, pResult);
  }
  return 1;
}
  
//获取牌级描述,pBuffer必须先分配好足够空间,至少24字节
char* TexasGetCardLevelDesc(LPCARD_LEVEL pCardLevel, char* pBuffer)
{
  switch (pCardLevel->level)
  {
  case TEXAS_CARD_LEVEL_HIGH:
    sprintf(pBuffer, "高牌:%s,%s,%s,%s,%s"
      , CardGetCardPointName((pCardLevel->detail >> 16) & 0xF)
      , CardGetCardPointName((pCardLevel->detail >> 12) & 0xF)
      , CardGetCardPointName((pCardLevel->detail >> 8) & 0xF)
      , CardGetCardPointName((pCardLevel->detail >> 4) & 0xF)
      , CardGetCardPointName((pCardLevel->detail >> 0) & 0xF)
      );
    break;
  case TEXAS_CARD_LEVEL_PAIR:
    sprintf(pBuffer, "一对:%s,(%s,%s,%s)"
      , CardGetCardPointName((pCardLevel->detail >> 16) & 0xF)
      , CardGetCardPointName((pCardLevel->detail >> 12) & 0xF)
      , CardGetCardPointName((pCardLevel->detail >> 8) & 0xF)
      , CardGetCardPointName((pCardLevel->detail >> 4) & 0xF)
      );
    break;
  case TEXAS_CARD_LEVEL_TWO_PAIR:
    sprintf(pBuffer, "两对:%s,%s,(%s)"
      , CardGetCardPointName((pCardLevel->detail >> 16) & 0xF)
      , CardGetCardPointName((pCardLevel->detail >> 12) & 0xF)
      , CardGetCardPointName((pCardLevel->detail >> 8) & 0xF)
      );
    break;
  case TEXAS_CARD_LEVEL_ARTICLE_3:
    sprintf(pBuffer, "三条:%s,(%s,%s)"
      , CardGetCardPointName((pCardLevel->detail >> 16) & 0xF)
      , CardGetCardPointName((pCardLevel->detail >> 12) & 0xF)
      , CardGetCardPointName((pCardLevel->detail >> 8) & 0xF)
      );
    break;
  case TEXAS_CARD_LEVEL_STRAIGHT:
    sprintf(pBuffer, "顺子:%s"
      , CardGetCardPointName((pCardLevel->detail >> 16) & 0xF)
      );
    break;
  case TEXAS_CARD_LEVEL_FLUSH:
    sprintf(pBuffer, "同花:%s,%s,%s,%s,%s"
      , CardGetCardPointName((pCardLevel->detail >> 16) & 0xF)
      , CardGetCardPointName((pCardLevel->detail >> 12) & 0xF)
      , CardGetCardPointName((pCardLevel->detail >> 8) & 0xF)
      , CardGetCardPointName((pCardLevel->detail >> 4) & 0xF)
      , CardGetCardPointName((pCardLevel->detail >> 0) & 0xF)
      );
    break;
  case TEXAS_CARD_LEVEL_FULL_HOUSE:
    sprintf(pBuffer, "葫芦:%s,%s"
      , CardGetCardPointName((pCardLevel->detail >> 16) & 0xF)
      , CardGetCardPointName((pCardLevel->detail >> 12) & 0xF)
      );
    break;
  case TEXAS_CARD_LEVEL_ARTICLE_4:
    sprintf(pBuffer, "金刚:%s,(%s)"
      , CardGetCardPointName((pCardLevel->detail >> 16) & 0xF)
      , CardGetCardPointName((pCardLevel->detail >> 12) & 0xF)
      );
    break;
  case TEXAS_CARD_LEVEL_STRAIGHT_FLUSH:
    sprintf(pBuffer, "同花顺:%s"
      , CardGetCardPointName((pCardLevel->detail >> 16) & 0xF)
      );
    break;
  default:
    strcpy(pBuffer, "未知");
    break;
  }
  GLog("TexasGetCardLevelDesc--%s\r\n", pBuffer);
  return pBuffer;
}