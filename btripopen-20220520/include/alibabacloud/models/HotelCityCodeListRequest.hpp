// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELCITYCODELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_HOTELCITYCODELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelCityCodeListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelCityCodeListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(country_code, countryCode_);
    };
    friend void from_json(const Darabonba::Json& j, HotelCityCodeListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(country_code, countryCode_);
    };
    HotelCityCodeListRequest() = default ;
    HotelCityCodeListRequest(const HotelCityCodeListRequest &) = default ;
    HotelCityCodeListRequest(HotelCityCodeListRequest &&) = default ;
    HotelCityCodeListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelCityCodeListRequest() = default ;
    HotelCityCodeListRequest& operator=(const HotelCityCodeListRequest &) = default ;
    HotelCityCodeListRequest& operator=(HotelCityCodeListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->countryCode_ != nullptr; };
    // countryCode Field Functions 
    bool hasCountryCode() const { return this->countryCode_ != nullptr;};
    void deleteCountryCode() { this->countryCode_ = nullptr;};
    inline string countryCode() const { DARABONBA_PTR_GET_DEFAULT(countryCode_, "") };
    inline HotelCityCodeListRequest& setCountryCode(string countryCode) { DARABONBA_PTR_SET_VALUE(countryCode_, countryCode) };


  protected:
    std::shared_ptr<string> countryCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
