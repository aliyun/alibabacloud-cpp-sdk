// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWEATHERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWEATHERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class GetWeatherResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWeatherResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, GetWeatherResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    GetWeatherResponseBody() = default ;
    GetWeatherResponseBody(const GetWeatherResponseBody &) = default ;
    GetWeatherResponseBody(GetWeatherResponseBody &&) = default ;
    GetWeatherResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWeatherResponseBody() = default ;
    GetWeatherResponseBody& operator=(const GetWeatherResponseBody &) = default ;
    GetWeatherResponseBody& operator=(GetWeatherResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentMeteorology, currentMeteorology_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentMeteorology, currentMeteorology_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CurrentMeteorology : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CurrentMeteorology& obj) { 
          DARABONBA_PTR_TO_JSON(Temperature, temperature_);
          DARABONBA_PTR_TO_JSON(Weather, weather_);
        };
        friend void from_json(const Darabonba::Json& j, CurrentMeteorology& obj) { 
          DARABONBA_PTR_FROM_JSON(Temperature, temperature_);
          DARABONBA_PTR_FROM_JSON(Weather, weather_);
        };
        CurrentMeteorology() = default ;
        CurrentMeteorology(const CurrentMeteorology &) = default ;
        CurrentMeteorology(CurrentMeteorology &&) = default ;
        CurrentMeteorology(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CurrentMeteorology() = default ;
        CurrentMeteorology& operator=(const CurrentMeteorology &) = default ;
        CurrentMeteorology& operator=(CurrentMeteorology &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Weather : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Weather& obj) { 
            DARABONBA_PTR_TO_JSON(Code, code_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, Weather& obj) { 
            DARABONBA_PTR_FROM_JSON(Code, code_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          Weather() = default ;
          Weather(const Weather &) = default ;
          Weather(Weather &&) = default ;
          Weather(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Weather() = default ;
          Weather& operator=(const Weather &) = default ;
          Weather& operator=(Weather &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->code_ == nullptr
        && this->name_ == nullptr; };
          // code Field Functions 
          bool hasCode() const { return this->code_ != nullptr;};
          void deleteCode() { this->code_ = nullptr;};
          inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
          inline Weather& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Weather& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          // Weather code: for example, "000,100"
          shared_ptr<string> code_ {};
          // Weather name description: "Sunny (000), Multicloud (100), Overcast (101), Rain (200), Light rain (201), Light to moderate rain (202), Moderate rain (203), Moderate to heavy rain (204), Heavy rain (205), Heavy to storm rain (206), Storm rain (207), Heavy storm rain (209), Severe storm rain (211), Showers (212), Thunderstorms (213), Freezing rain (214), Snow (300), Sleet (301), Snow showers (302), Light snow (303), Light to moderate snow (304), Moderate snow (305), Heavy snow (307), Blizzard (309), Fog (400), Dust (501), Sand blowing (502), Sandstorm (503), Severe sandstorm (504), Mostly sunny (000), Partly cloudy (100), Light showers (212), Lightning (213), Ice pellets (214), Thunderstorms with hail (215), Light snow showers (302), Freezing fog (400), Haze (500), Dust whirls (502), Localized showers (212), Thunderstorm (213), Ice needles (214), Hail (215), Intense showers (212)"
          shared_ptr<string> name_ {};
        };

        class Temperature : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Temperature& obj) { 
            DARABONBA_PTR_TO_JSON(Current, current_);
            DARABONBA_PTR_TO_JSON(CurrentDesc, currentDesc_);
            DARABONBA_PTR_TO_JSON(High, high_);
            DARABONBA_PTR_TO_JSON(HighDesc, highDesc_);
            DARABONBA_PTR_TO_JSON(Logical, logical_);
            DARABONBA_PTR_TO_JSON(Low, low_);
            DARABONBA_PTR_TO_JSON(LowDesc, lowDesc_);
          };
          friend void from_json(const Darabonba::Json& j, Temperature& obj) { 
            DARABONBA_PTR_FROM_JSON(Current, current_);
            DARABONBA_PTR_FROM_JSON(CurrentDesc, currentDesc_);
            DARABONBA_PTR_FROM_JSON(High, high_);
            DARABONBA_PTR_FROM_JSON(HighDesc, highDesc_);
            DARABONBA_PTR_FROM_JSON(Logical, logical_);
            DARABONBA_PTR_FROM_JSON(Low, low_);
            DARABONBA_PTR_FROM_JSON(LowDesc, lowDesc_);
          };
          Temperature() = default ;
          Temperature(const Temperature &) = default ;
          Temperature(Temperature &&) = default ;
          Temperature(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Temperature() = default ;
          Temperature& operator=(const Temperature &) = default ;
          Temperature& operator=(Temperature &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->current_ == nullptr
        && this->currentDesc_ == nullptr && this->high_ == nullptr && this->highDesc_ == nullptr && this->logical_ == nullptr && this->low_ == nullptr
        && this->lowDesc_ == nullptr; };
          // current Field Functions 
          bool hasCurrent() const { return this->current_ != nullptr;};
          void deleteCurrent() { this->current_ = nullptr;};
          inline string getCurrent() const { DARABONBA_PTR_GET_DEFAULT(current_, "") };
          inline Temperature& setCurrent(string current) { DARABONBA_PTR_SET_VALUE(current_, current) };


          // currentDesc Field Functions 
          bool hasCurrentDesc() const { return this->currentDesc_ != nullptr;};
          void deleteCurrentDesc() { this->currentDesc_ = nullptr;};
          inline string getCurrentDesc() const { DARABONBA_PTR_GET_DEFAULT(currentDesc_, "") };
          inline Temperature& setCurrentDesc(string currentDesc) { DARABONBA_PTR_SET_VALUE(currentDesc_, currentDesc) };


          // high Field Functions 
          bool hasHigh() const { return this->high_ != nullptr;};
          void deleteHigh() { this->high_ = nullptr;};
          inline string getHigh() const { DARABONBA_PTR_GET_DEFAULT(high_, "") };
          inline Temperature& setHigh(string high) { DARABONBA_PTR_SET_VALUE(high_, high) };


          // highDesc Field Functions 
          bool hasHighDesc() const { return this->highDesc_ != nullptr;};
          void deleteHighDesc() { this->highDesc_ = nullptr;};
          inline string getHighDesc() const { DARABONBA_PTR_GET_DEFAULT(highDesc_, "") };
          inline Temperature& setHighDesc(string highDesc) { DARABONBA_PTR_SET_VALUE(highDesc_, highDesc) };


          // logical Field Functions 
          bool hasLogical() const { return this->logical_ != nullptr;};
          void deleteLogical() { this->logical_ = nullptr;};
          inline string getLogical() const { DARABONBA_PTR_GET_DEFAULT(logical_, "") };
          inline Temperature& setLogical(string logical) { DARABONBA_PTR_SET_VALUE(logical_, logical) };


          // low Field Functions 
          bool hasLow() const { return this->low_ != nullptr;};
          void deleteLow() { this->low_ = nullptr;};
          inline string getLow() const { DARABONBA_PTR_GET_DEFAULT(low_, "") };
          inline Temperature& setLow(string low) { DARABONBA_PTR_SET_VALUE(low_, low) };


          // lowDesc Field Functions 
          bool hasLowDesc() const { return this->lowDesc_ != nullptr;};
          void deleteLowDesc() { this->lowDesc_ = nullptr;};
          inline string getLowDesc() const { DARABONBA_PTR_GET_DEFAULT(lowDesc_, "") };
          inline Temperature& setLowDesc(string lowDesc) { DARABONBA_PTR_SET_VALUE(lowDesc_, lowDesc) };


        protected:
          // Current temperature value
          shared_ptr<string> current_ {};
          // Description of the current temperature value
          shared_ptr<string> currentDesc_ {};
          // Maximum temperature value
          shared_ptr<string> high_ {};
          // Description of the maximum temperature value
          shared_ptr<string> highDesc_ {};
          // Temperature with logic, as follows:
          shared_ptr<string> logical_ {};
          // Lowest temperature
          shared_ptr<string> low_ {};
          // Description of the lowest temperature
          shared_ptr<string> lowDesc_ {};
        };

        virtual bool empty() const override { return this->temperature_ == nullptr
        && this->weather_ == nullptr; };
        // temperature Field Functions 
        bool hasTemperature() const { return this->temperature_ != nullptr;};
        void deleteTemperature() { this->temperature_ = nullptr;};
        inline const CurrentMeteorology::Temperature & getTemperature() const { DARABONBA_PTR_GET_CONST(temperature_, CurrentMeteorology::Temperature) };
        inline CurrentMeteorology::Temperature getTemperature() { DARABONBA_PTR_GET(temperature_, CurrentMeteorology::Temperature) };
        inline CurrentMeteorology& setTemperature(const CurrentMeteorology::Temperature & temperature) { DARABONBA_PTR_SET_VALUE(temperature_, temperature) };
        inline CurrentMeteorology& setTemperature(CurrentMeteorology::Temperature && temperature) { DARABONBA_PTR_SET_RVALUE(temperature_, temperature) };


        // weather Field Functions 
        bool hasWeather() const { return this->weather_ != nullptr;};
        void deleteWeather() { this->weather_ = nullptr;};
        inline const CurrentMeteorology::Weather & getWeather() const { DARABONBA_PTR_GET_CONST(weather_, CurrentMeteorology::Weather) };
        inline CurrentMeteorology::Weather getWeather() { DARABONBA_PTR_GET(weather_, CurrentMeteorology::Weather) };
        inline CurrentMeteorology& setWeather(const CurrentMeteorology::Weather & weather) { DARABONBA_PTR_SET_VALUE(weather_, weather) };
        inline CurrentMeteorology& setWeather(CurrentMeteorology::Weather && weather) { DARABONBA_PTR_SET_RVALUE(weather_, weather) };


      protected:
        // Temperature
        shared_ptr<CurrentMeteorology::Temperature> temperature_ {};
        // Daytime weather
        shared_ptr<CurrentMeteorology::Weather> weather_ {};
      };

      virtual bool empty() const override { return this->currentMeteorology_ == nullptr; };
      // currentMeteorology Field Functions 
      bool hasCurrentMeteorology() const { return this->currentMeteorology_ != nullptr;};
      void deleteCurrentMeteorology() { this->currentMeteorology_ = nullptr;};
      inline const Result::CurrentMeteorology & getCurrentMeteorology() const { DARABONBA_PTR_GET_CONST(currentMeteorology_, Result::CurrentMeteorology) };
      inline Result::CurrentMeteorology getCurrentMeteorology() { DARABONBA_PTR_GET(currentMeteorology_, Result::CurrentMeteorology) };
      inline Result& setCurrentMeteorology(const Result::CurrentMeteorology & currentMeteorology) { DARABONBA_PTR_SET_VALUE(currentMeteorology_, currentMeteorology) };
      inline Result& setCurrentMeteorology(Result::CurrentMeteorology && currentMeteorology) { DARABONBA_PTR_SET_RVALUE(currentMeteorology_, currentMeteorology) };


    protected:
      // Current weather
      shared_ptr<Result::CurrentMeteorology> currentMeteorology_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetWeatherResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetWeatherResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWeatherResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetWeatherResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, GetWeatherResponseBody::Result) };
    inline GetWeatherResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, GetWeatherResponseBody::Result) };
    inline GetWeatherResponseBody& setResult(const GetWeatherResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetWeatherResponseBody& setResult(GetWeatherResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // HttpCode
    shared_ptr<int32_t> code_ {};
    // error message
    shared_ptr<string> message_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
    // model data
    shared_ptr<GetWeatherResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
