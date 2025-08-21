// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWEATHERRESPONSEBODYRESULTCURRENTMETEOROLOGYTEMPERATURE_HPP_
#define ALIBABACLOUD_MODELS_GETWEATHERRESPONSEBODYRESULTCURRENTMETEOROLOGYTEMPERATURE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class GetWeatherResponseBodyResultCurrentMeteorologyTemperature : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWeatherResponseBodyResultCurrentMeteorologyTemperature& obj) { 
      DARABONBA_PTR_TO_JSON(Current, current_);
      DARABONBA_PTR_TO_JSON(CurrentDesc, currentDesc_);
      DARABONBA_PTR_TO_JSON(High, high_);
      DARABONBA_PTR_TO_JSON(HighDesc, highDesc_);
      DARABONBA_PTR_TO_JSON(Logical, logical_);
      DARABONBA_PTR_TO_JSON(Low, low_);
      DARABONBA_PTR_TO_JSON(LowDesc, lowDesc_);
    };
    friend void from_json(const Darabonba::Json& j, GetWeatherResponseBodyResultCurrentMeteorologyTemperature& obj) { 
      DARABONBA_PTR_FROM_JSON(Current, current_);
      DARABONBA_PTR_FROM_JSON(CurrentDesc, currentDesc_);
      DARABONBA_PTR_FROM_JSON(High, high_);
      DARABONBA_PTR_FROM_JSON(HighDesc, highDesc_);
      DARABONBA_PTR_FROM_JSON(Logical, logical_);
      DARABONBA_PTR_FROM_JSON(Low, low_);
      DARABONBA_PTR_FROM_JSON(LowDesc, lowDesc_);
    };
    GetWeatherResponseBodyResultCurrentMeteorologyTemperature() = default ;
    GetWeatherResponseBodyResultCurrentMeteorologyTemperature(const GetWeatherResponseBodyResultCurrentMeteorologyTemperature &) = default ;
    GetWeatherResponseBodyResultCurrentMeteorologyTemperature(GetWeatherResponseBodyResultCurrentMeteorologyTemperature &&) = default ;
    GetWeatherResponseBodyResultCurrentMeteorologyTemperature(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWeatherResponseBodyResultCurrentMeteorologyTemperature() = default ;
    GetWeatherResponseBodyResultCurrentMeteorologyTemperature& operator=(const GetWeatherResponseBodyResultCurrentMeteorologyTemperature &) = default ;
    GetWeatherResponseBodyResultCurrentMeteorologyTemperature& operator=(GetWeatherResponseBodyResultCurrentMeteorologyTemperature &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->current_ != nullptr
        && this->currentDesc_ != nullptr && this->high_ != nullptr && this->highDesc_ != nullptr && this->logical_ != nullptr && this->low_ != nullptr
        && this->lowDesc_ != nullptr; };
    // current Field Functions 
    bool hasCurrent() const { return this->current_ != nullptr;};
    void deleteCurrent() { this->current_ = nullptr;};
    inline string current() const { DARABONBA_PTR_GET_DEFAULT(current_, "") };
    inline GetWeatherResponseBodyResultCurrentMeteorologyTemperature& setCurrent(string current) { DARABONBA_PTR_SET_VALUE(current_, current) };


    // currentDesc Field Functions 
    bool hasCurrentDesc() const { return this->currentDesc_ != nullptr;};
    void deleteCurrentDesc() { this->currentDesc_ = nullptr;};
    inline string currentDesc() const { DARABONBA_PTR_GET_DEFAULT(currentDesc_, "") };
    inline GetWeatherResponseBodyResultCurrentMeteorologyTemperature& setCurrentDesc(string currentDesc) { DARABONBA_PTR_SET_VALUE(currentDesc_, currentDesc) };


    // high Field Functions 
    bool hasHigh() const { return this->high_ != nullptr;};
    void deleteHigh() { this->high_ = nullptr;};
    inline string high() const { DARABONBA_PTR_GET_DEFAULT(high_, "") };
    inline GetWeatherResponseBodyResultCurrentMeteorologyTemperature& setHigh(string high) { DARABONBA_PTR_SET_VALUE(high_, high) };


    // highDesc Field Functions 
    bool hasHighDesc() const { return this->highDesc_ != nullptr;};
    void deleteHighDesc() { this->highDesc_ = nullptr;};
    inline string highDesc() const { DARABONBA_PTR_GET_DEFAULT(highDesc_, "") };
    inline GetWeatherResponseBodyResultCurrentMeteorologyTemperature& setHighDesc(string highDesc) { DARABONBA_PTR_SET_VALUE(highDesc_, highDesc) };


    // logical Field Functions 
    bool hasLogical() const { return this->logical_ != nullptr;};
    void deleteLogical() { this->logical_ = nullptr;};
    inline string logical() const { DARABONBA_PTR_GET_DEFAULT(logical_, "") };
    inline GetWeatherResponseBodyResultCurrentMeteorologyTemperature& setLogical(string logical) { DARABONBA_PTR_SET_VALUE(logical_, logical) };


    // low Field Functions 
    bool hasLow() const { return this->low_ != nullptr;};
    void deleteLow() { this->low_ = nullptr;};
    inline string low() const { DARABONBA_PTR_GET_DEFAULT(low_, "") };
    inline GetWeatherResponseBodyResultCurrentMeteorologyTemperature& setLow(string low) { DARABONBA_PTR_SET_VALUE(low_, low) };


    // lowDesc Field Functions 
    bool hasLowDesc() const { return this->lowDesc_ != nullptr;};
    void deleteLowDesc() { this->lowDesc_ = nullptr;};
    inline string lowDesc() const { DARABONBA_PTR_GET_DEFAULT(lowDesc_, "") };
    inline GetWeatherResponseBodyResultCurrentMeteorologyTemperature& setLowDesc(string lowDesc) { DARABONBA_PTR_SET_VALUE(lowDesc_, lowDesc) };


  protected:
    std::shared_ptr<string> current_ = nullptr;
    std::shared_ptr<string> currentDesc_ = nullptr;
    std::shared_ptr<string> high_ = nullptr;
    std::shared_ptr<string> highDesc_ = nullptr;
    std::shared_ptr<string> logical_ = nullptr;
    std::shared_ptr<string> low_ = nullptr;
    std::shared_ptr<string> lowDesc_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
