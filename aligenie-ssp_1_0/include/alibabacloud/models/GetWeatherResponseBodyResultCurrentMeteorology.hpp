// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWEATHERRESPONSEBODYRESULTCURRENTMETEOROLOGY_HPP_
#define ALIBABACLOUD_MODELS_GETWEATHERRESPONSEBODYRESULTCURRENTMETEOROLOGY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetWeatherResponseBodyResultCurrentMeteorologyTemperature.hpp>
#include <alibabacloud/models/GetWeatherResponseBodyResultCurrentMeteorologyWeather.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class GetWeatherResponseBodyResultCurrentMeteorology : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWeatherResponseBodyResultCurrentMeteorology& obj) { 
      DARABONBA_PTR_TO_JSON(Temperature, temperature_);
      DARABONBA_PTR_TO_JSON(Weather, weather_);
    };
    friend void from_json(const Darabonba::Json& j, GetWeatherResponseBodyResultCurrentMeteorology& obj) { 
      DARABONBA_PTR_FROM_JSON(Temperature, temperature_);
      DARABONBA_PTR_FROM_JSON(Weather, weather_);
    };
    GetWeatherResponseBodyResultCurrentMeteorology() = default ;
    GetWeatherResponseBodyResultCurrentMeteorology(const GetWeatherResponseBodyResultCurrentMeteorology &) = default ;
    GetWeatherResponseBodyResultCurrentMeteorology(GetWeatherResponseBodyResultCurrentMeteorology &&) = default ;
    GetWeatherResponseBodyResultCurrentMeteorology(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWeatherResponseBodyResultCurrentMeteorology() = default ;
    GetWeatherResponseBodyResultCurrentMeteorology& operator=(const GetWeatherResponseBodyResultCurrentMeteorology &) = default ;
    GetWeatherResponseBodyResultCurrentMeteorology& operator=(GetWeatherResponseBodyResultCurrentMeteorology &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->temperature_ != nullptr
        && this->weather_ != nullptr; };
    // temperature Field Functions 
    bool hasTemperature() const { return this->temperature_ != nullptr;};
    void deleteTemperature() { this->temperature_ = nullptr;};
    inline const Models::GetWeatherResponseBodyResultCurrentMeteorologyTemperature & temperature() const { DARABONBA_PTR_GET_CONST(temperature_, Models::GetWeatherResponseBodyResultCurrentMeteorologyTemperature) };
    inline Models::GetWeatherResponseBodyResultCurrentMeteorologyTemperature temperature() { DARABONBA_PTR_GET(temperature_, Models::GetWeatherResponseBodyResultCurrentMeteorologyTemperature) };
    inline GetWeatherResponseBodyResultCurrentMeteorology& setTemperature(const Models::GetWeatherResponseBodyResultCurrentMeteorologyTemperature & temperature) { DARABONBA_PTR_SET_VALUE(temperature_, temperature) };
    inline GetWeatherResponseBodyResultCurrentMeteorology& setTemperature(Models::GetWeatherResponseBodyResultCurrentMeteorologyTemperature && temperature) { DARABONBA_PTR_SET_RVALUE(temperature_, temperature) };


    // weather Field Functions 
    bool hasWeather() const { return this->weather_ != nullptr;};
    void deleteWeather() { this->weather_ = nullptr;};
    inline const Models::GetWeatherResponseBodyResultCurrentMeteorologyWeather & weather() const { DARABONBA_PTR_GET_CONST(weather_, Models::GetWeatherResponseBodyResultCurrentMeteorologyWeather) };
    inline Models::GetWeatherResponseBodyResultCurrentMeteorologyWeather weather() { DARABONBA_PTR_GET(weather_, Models::GetWeatherResponseBodyResultCurrentMeteorologyWeather) };
    inline GetWeatherResponseBodyResultCurrentMeteorology& setWeather(const Models::GetWeatherResponseBodyResultCurrentMeteorologyWeather & weather) { DARABONBA_PTR_SET_VALUE(weather_, weather) };
    inline GetWeatherResponseBodyResultCurrentMeteorology& setWeather(Models::GetWeatherResponseBodyResultCurrentMeteorologyWeather && weather) { DARABONBA_PTR_SET_RVALUE(weather_, weather) };


  protected:
    std::shared_ptr<Models::GetWeatherResponseBodyResultCurrentMeteorologyTemperature> temperature_ = nullptr;
    std::shared_ptr<Models::GetWeatherResponseBodyResultCurrentMeteorologyWeather> weather_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
