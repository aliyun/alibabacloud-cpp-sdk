// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELCITYCODELISTRESPONSEBODYMODULECITYS_HPP_
#define ALIBABACLOUD_MODELS_HOTELCITYCODELISTRESPONSEBODYMODULECITYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HotelCityCodeListResponseBodyModuleCitysDistricts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelCityCodeListResponseBodyModuleCitys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelCityCodeListResponseBodyModuleCitys& obj) { 
      DARABONBA_PTR_TO_JSON(city_code, cityCode_);
      DARABONBA_PTR_TO_JSON(city_name, cityName_);
      DARABONBA_PTR_TO_JSON(districts, districts_);
    };
    friend void from_json(const Darabonba::Json& j, HotelCityCodeListResponseBodyModuleCitys& obj) { 
      DARABONBA_PTR_FROM_JSON(city_code, cityCode_);
      DARABONBA_PTR_FROM_JSON(city_name, cityName_);
      DARABONBA_PTR_FROM_JSON(districts, districts_);
    };
    HotelCityCodeListResponseBodyModuleCitys() = default ;
    HotelCityCodeListResponseBodyModuleCitys(const HotelCityCodeListResponseBodyModuleCitys &) = default ;
    HotelCityCodeListResponseBodyModuleCitys(HotelCityCodeListResponseBodyModuleCitys &&) = default ;
    HotelCityCodeListResponseBodyModuleCitys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelCityCodeListResponseBodyModuleCitys() = default ;
    HotelCityCodeListResponseBodyModuleCitys& operator=(const HotelCityCodeListResponseBodyModuleCitys &) = default ;
    HotelCityCodeListResponseBodyModuleCitys& operator=(HotelCityCodeListResponseBodyModuleCitys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cityCode_ != nullptr
        && this->cityName_ != nullptr && this->districts_ != nullptr; };
    // cityCode Field Functions 
    bool hasCityCode() const { return this->cityCode_ != nullptr;};
    void deleteCityCode() { this->cityCode_ = nullptr;};
    inline string cityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
    inline HotelCityCodeListResponseBodyModuleCitys& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


    // cityName Field Functions 
    bool hasCityName() const { return this->cityName_ != nullptr;};
    void deleteCityName() { this->cityName_ = nullptr;};
    inline string cityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
    inline HotelCityCodeListResponseBodyModuleCitys& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


    // districts Field Functions 
    bool hasDistricts() const { return this->districts_ != nullptr;};
    void deleteDistricts() { this->districts_ = nullptr;};
    inline const vector<Models::HotelCityCodeListResponseBodyModuleCitysDistricts> & districts() const { DARABONBA_PTR_GET_CONST(districts_, vector<Models::HotelCityCodeListResponseBodyModuleCitysDistricts>) };
    inline vector<Models::HotelCityCodeListResponseBodyModuleCitysDistricts> districts() { DARABONBA_PTR_GET(districts_, vector<Models::HotelCityCodeListResponseBodyModuleCitysDistricts>) };
    inline HotelCityCodeListResponseBodyModuleCitys& setDistricts(const vector<Models::HotelCityCodeListResponseBodyModuleCitysDistricts> & districts) { DARABONBA_PTR_SET_VALUE(districts_, districts) };
    inline HotelCityCodeListResponseBodyModuleCitys& setDistricts(vector<Models::HotelCityCodeListResponseBodyModuleCitysDistricts> && districts) { DARABONBA_PTR_SET_RVALUE(districts_, districts) };


  protected:
    std::shared_ptr<string> cityCode_ = nullptr;
    std::shared_ptr<string> cityName_ = nullptr;
    std::shared_ptr<vector<Models::HotelCityCodeListResponseBodyModuleCitysDistricts>> districts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
