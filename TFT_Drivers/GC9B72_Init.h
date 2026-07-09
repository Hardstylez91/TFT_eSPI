
// This is the command sequence that initialises the GC9B72 driver

{
  writecommand(0x11);
  delay(120);

  writecommand(0xFF);
  writedata(0x77);
  writedata(0x01);
  writedata(0x00);
  writedata(0x00);
  writedata(0x13);

  writecommand(0xEF);
  writedata(0x08);

  writecommand(0xFF);
  writedata(0x77);
  writedata(0x01);
  writedata(0x00);
  writedata(0x00);
  writedata(0x10);

  writecommand(0xC0);
  writedata(0x3B);
  writedata(0x00);

  writecommand(0xC1);
  writedata(0x0B); // VBP
  writedata(0x02);

  writecommand(0xC2);
  writedata(0x21);
  writedata(0x02);

  writecommand(0xCC);
  writedata(0x10);

  writecommand(0xCD);//BK0
  writedata(0x08);

  writecommand(0xFF);
  writedata(0x77);
  writedata(0x01);
  writedata(0x00);
  writedata(0x00);
  writedata(0x11);

  writecommand(0xBA);
  writedata(0x33);

  writecommand(0xBC);
  writedata(0x3E);

  writecommand(0xC0);
  writedata(0x09);

  writecommand(0xC1);
  writedata(0x78);

  writecommand(0xC2);
  writedata(0x78);

  writecommand(0xFF);
  writedata(0x77);
  writedata(0x01);
  writedata(0x00);
  writedata(0x00);
  writedata(0x00);

  writecommand(0xB0);
  writedata(0x00);
  writedata(0x0E);
  writedata(0x56);
  writedata(0x0D);
  writedata(0x10);
  writedata(0x05);
  writedata(0x05);
  writedata(0x07);
  writedata(0x07);
  writedata(0x22);
  writedata(0x04);
  writedata(0x13);
  writedata(0x12);
  writedata(0x6B);
  writedata(0x73);
  writedata(0xFF);

  writecommand(0xB1);
  writedata(0x00);
  writedata(0x0E);
  writedata(0x56);
  writedata(0x0D);
  writedata(0x10);
  writedata(0x05);
  writedata(0x05);
  writedata(0x07);
  writedata(0x07);
  writedata(0x22);
  writedata(0x04);
  writedata(0x13);
  writedata(0x12);
  writedata(0x6B);
  writedata(0x73);
  writedata(0xFF);

  writecommand(0xFF);
  writedata(0x77);
  writedata(0x01);
  writedata(0x00);
  writedata(0x00);
  writedata(0x11);

  writecommand(0xB0);
  writedata(0x75);

  writecommand(0xB1);
  writedata(0x41);

  writecommand(0xB2);
  writedata(0x89);

  writecommand(0xB3);
  writedata(0x80);

  writecommand(0xB5);
  writedata(0x49);

  writecommand(0xB7);
  writedata(0x85);

  writecommand(0xB8);
  writedata(0x32);

  writecommand(0xD0);
  writedata(0x88);

  delay(100);

  writecommand(0xE0);
  writedata(0x00);
  writedata(0x00);
  writedata(0x02);

  writecommand(0xE1);
  writedata(0x05);
  writedata(0xC0);
  writedata(0x07);
  writedata(0xC0);
  writedata(0x04);
  writedata(0xC0);
  writedata(0x06);
  writedata(0xC0);
  writedata(0x00);
  writedata(0x44);
  writedata(0x44);

  writecommand(0xE2);
  writedata(0x10);
  writedata(0x10);
  writedata(0x33);
  writedata(0x33);
  writedata(0xEC);
  writedata(0xC0);
  writedata(0x00);
  writedata(0x00);
  writedata(0xEC);
  writedata(0xC0);
  writedata(0x00);
  writedata(0x00);
  writedata(0x00);

  writecommand(0xE3);
  writedata(0x00);
  writedata(0x00);
  writedata(0x11);
  writedata(0x11);

  writecommand(0xE4);
  writedata(0x44);
  writedata(0x44);

  writecommand(0xE5);
  writedata(0x09);
  writedata(0xF1);
  writedata(0x10);
  writedata(0xFA);
  writedata(0x0B);
  writedata(0xF3);
  writedata(0x10);
  writedata(0xFA);
  writedata(0x05);
  writedata(0xED);
  writedata(0x10);
  writedata(0xFA);
  writedata(0x07);
  writedata(0xEF);
  writedata(0x10);
  writedata(0xFA);

  writecommand(0xE6);
  writedata(0x00);
  writedata(0x00);
  writedata(0x11);
  writedata(0x11);

  writecommand(0xE7);
  writedata(0x44);
  writedata(0x44);

  writecommand(0xE8);
  writedata(0x08);
  writedata(0xF0);
  writedata(0x10);
  writedata(0xFA);
  writedata(0x0A);
  writedata(0xF2);
  writedata(0x10);
  writedata(0xFA);
  writedata(0x04);
  writedata(0xEC);
  writedata(0x10);
  writedata(0xFA);
  writedata(0x06);
  writedata(0xEE);
  writedata(0x10);
  writedata(0xFA);

  writecommand(0xEB);
  writedata(0x02);
  writedata(0x01);
  writedata(0xE4);
  writedata(0xE4);
  writedata(0x44);
  writedata(0x88);
  writedata(0x00);

  writecommand(0xED);
  writedata(0xFF);
  writedata(0x04);
  writedata(0x56);
  writedata(0x7F);
  writedata(0xBA);
  writedata(0x2F);
  writedata(0xFF);
  writedata(0xFF);
  writedata(0xFF);
  writedata(0xFF);
  writedata(0xF2);
  writedata(0xAB);
  writedata(0xF7);
  writedata(0x65);
  writedata(0x40);
  writedata(0xFF);


  writecommand(0x3A);
  writedata(0x60);

  writecommand(0x20);

  writecommand(0x36);
  writedata(0x00);

  writecommand(0x11);
  delay(120);
  writecommand(0x29);
}
