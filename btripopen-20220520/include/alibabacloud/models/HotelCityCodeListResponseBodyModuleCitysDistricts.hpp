// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELCITYCODELISTRESPONSEBODYMODULECITYSDISTRICTS_HPP_
#define ALIBABACLOUD_MODELS_HOTELCITYCODELISTRESPONSEBODYMODULECITYSDISTRICTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelCityCodeListResponseBodyModuleCitysDistricts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelCityCodeListResponseBodyModuleCitysDistricts& obj) { 
      DARABONBA_PTR_TO_JSON(district_code, districtCode_);
      DARABONBA_PTR_TO_JSON(district_name, districtName_);
    };
    friend void from_json(const Darabonba::Json& j, HotelCityCodeListResponseBodyModuleCitysDistricts& obj) { 
      DARABONBA_PTR_FROM_JSON(district_code, districtCode_);
      DARABONBA_PTR_FROM_JSON(district_name, districtName_);
    };
    HotelCityCodeListResponseBodyModuleCitysDistricts() = default ;
    HotelCityCodeListResponseBodyModuleCitysDistricts(const HotelCityCodeListResponseBodyModuleCitysDistricts &) = default ;
    HotelCityCodeListResponseBodyModuleCitysDistricts(HotelCityCodeListResponseBodyModuleCitysDistricts &&) = default ;
    HotelCityCodeListResponseBodyModuleCitysDistricts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelCityCodeListResponseBodyModuleCitysDistricts() = default ;
    HotelCityCodeListResponseBodyModuleCitysDistricts& operator=(const HotelCityCodeListResponseBodyModuleCitysDistricts &) = default ;
    HotelCityCodeListResponseBodyModuleCitysDistricts& operator=(HotelCityCodeListResponseBodyModuleCitysDistricts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->districtCode_ != nullptr
        && this->districtName_ != nullptr; };
    // districtCode Field Functions 
    bool hasDistrictCode() const { return this->districtCode_ != nullptr;};
    void deleteDistrictCode() { this->districtCode_ = nullptr;};
    inline string districtCode() const { DARABONBA_PTR_GET_DEFAULT(districtCode_, "") };
    inline HotelCityCodeListResponseBodyModuleCitysDistricts& setDistrictCode(string districtCode) { DARABONBA_PTR_SET_VALUE(districtCode_, districtCode) };


    // districtName Field Functions 
    bool hasDistrictName() const { return this->districtName_ != nullptr;};
    void deleteDistrictName() { this->districtName_ = nullptr;};
    inline string districtName() const { DARABONBA_PTR_GET_DEFAULT(districtName_, "") };
    inline HotelCityCodeListResponseBodyModuleCitysDistricts& setDistrictName(string districtName) { DARABONBA_PTR_SET_VALUE(districtName_, districtName) };


  protected:
    std::shared_ptr<string> districtCode_ = nullptr;
    std::shared_ptr<string> districtName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
