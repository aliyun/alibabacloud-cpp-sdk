// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWEATHERREQUESTPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_GETWEATHERREQUESTPAYLOAD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class GetWeatherRequestPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWeatherRequestPayload& obj) { 
    };
    friend void from_json(const Darabonba::Json& j, GetWeatherRequestPayload& obj) { 
    };
    GetWeatherRequestPayload() = default ;
    GetWeatherRequestPayload(const GetWeatherRequestPayload &) = default ;
    GetWeatherRequestPayload(GetWeatherRequestPayload &&) = default ;
    GetWeatherRequestPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWeatherRequestPayload() = default ;
    GetWeatherRequestPayload& operator=(const GetWeatherRequestPayload &) = default ;
    GetWeatherRequestPayload& operator=(GetWeatherRequestPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { ; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
