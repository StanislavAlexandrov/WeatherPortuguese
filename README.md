# WeatherPortuguese
Display current temperature and learn some Portuguese with TTGO T-Display ESP32 Arduino clone

You can put up a TTGO T-Display board like this https://www.aliexpress.com/item/33048962331.html?spm=a2g0o.productlist.0.0.74cf6bd8AiJBxu in the hall so every time you leave you can see the weather (current temperature) and learn a new Portuguese word. 
The words are taken from a 'Top 1000 most commonly used Portuguese words' list and are shown randomly with English translations. 

## Instructions

1. Install all the necessary libraries in the Arduino IDE. Refer to the TTGO page here https://github.com/Xinyuan-LilyGO/TTGO-T-Display
2. Clone the two files from this repository. I recommend using the included Myfont.h file as it has all the necessary symbols that are generally absent in regular font files!
3. Create an account on https://openweathermap.org/. It's free. You will need the following: your API key and your city ID. 
4. In the .ino file make the following changes: 
a. Replace YOUR_WIFI with your WiFi name.
b. Replace YOUR_WIFI_PASSWORD with your WiFi password.
c. In the 'endpoint' string replace YOUR_CITY_ID with the city ID that you found on the OpenWeather website. 
d. Replace YOUR_KEY with your OpenWeather key. 

Note: by default the temperature is displayed in Celsius. To switch to Fahrenheit remove the &units=metric part from the 'endpoint' string. 

