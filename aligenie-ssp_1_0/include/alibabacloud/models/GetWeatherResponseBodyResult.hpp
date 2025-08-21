// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWEATHERRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETWEATHERRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetWeatherResponseBodyResultCurrentMeteorology.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class GetWeatherResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWeatherResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentMeteorology, currentMeteorology_);
    };
    friend void from_json(const Darabonba::Json& j, GetWeatherResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentMeteorology, currentMeteorology_);
    };
    GetWeatherResponseBodyResult() = default ;
    GetWeatherResponseBodyResult(const GetWeatherResponseBodyResult &) = default ;
    GetWeatherResponseBodyResult(GetWeatherResponseBodyResult &&) = default ;
    GetWeatherResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWeatherResponseBodyResult() = default ;
    GetWeatherResponseBodyResult& operator=(const GetWeatherResponseBodyResult &) = default ;
    GetWeatherResponseBodyResult& operator=(GetWeatherResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentMeteorology_ != nullptr; };
    // currentMeteorology Field Functions 
    bool hasCurrentMeteorology() const { return this->currentMeteorology_ != nullptr;};
    void deleteCurrentMeteorology() { this->currentMeteorology_ = nullptr;};
    inline const Models::GetWeatherResponseBodyResultCurrentMeteorology & currentMeteorology() const { DARABONBA_PTR_GET_CONST(currentMeteorology_, Models::GetWeatherResponseBodyResultCurrentMeteorology) };
    inline Models::GetWeatherResponseBodyResultCurrentMeteorology currentMeteorology() { DARABONBA_PTR_GET(currentMeteorology_, Models::GetWeatherResponseBodyResultCurrentMeteorology) };
    inline GetWeatherResponseBodyResult& setCurrentMeteorology(const Models::GetWeatherResponseBodyResultCurrentMeteorology & currentMeteorology) { DARABONBA_PTR_SET_VALUE(currentMeteorology_, currentMeteorology) };
    inline GetWeatherResponseBodyResult& setCurrentMeteorology(Models::GetWeatherResponseBodyResultCurrentMeteorology && currentMeteorology) { DARABONBA_PTR_SET_RVALUE(currentMeteorology_, currentMeteorology) };


  protected:
    std::shared_ptr<Models::GetWeatherResponseBodyResultCurrentMeteorology> currentMeteorology_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
