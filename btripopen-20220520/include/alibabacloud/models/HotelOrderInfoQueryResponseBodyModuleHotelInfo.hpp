// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELORDERINFOQUERYRESPONSEBODYMODULEHOTELINFO_HPP_
#define ALIBABACLOUD_MODELS_HOTELORDERINFOQUERYRESPONSEBODYMODULEHOTELINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelOrderInfoQueryResponseBodyModuleHotelInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelOrderInfoQueryResponseBodyModuleHotelInfo& obj) { 
      DARABONBA_PTR_TO_JSON(city_code, cityCode_);
      DARABONBA_PTR_TO_JSON(city_name, cityName_);
      DARABONBA_PTR_TO_JSON(country_code, countryCode_);
      DARABONBA_PTR_TO_JSON(country_name, countryName_);
      DARABONBA_PTR_TO_JSON(district_code, districtCode_);
      DARABONBA_PTR_TO_JSON(district_name, districtName_);
      DARABONBA_PTR_TO_JSON(hotel_address, hotelAddress_);
      DARABONBA_PTR_TO_JSON(hotel_brand_code, hotelBrandCode_);
      DARABONBA_PTR_TO_JSON(hotel_brand_name, hotelBrandName_);
      DARABONBA_PTR_TO_JSON(hotel_group, hotelGroup_);
      DARABONBA_PTR_TO_JSON(hotel_id, hotelId_);
      DARABONBA_PTR_TO_JSON(hotel_name, hotelName_);
      DARABONBA_PTR_TO_JSON(hotel_name_en, hotelNameEn_);
      DARABONBA_PTR_TO_JSON(star, star_);
    };
    friend void from_json(const Darabonba::Json& j, HotelOrderInfoQueryResponseBodyModuleHotelInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(city_code, cityCode_);
      DARABONBA_PTR_FROM_JSON(city_name, cityName_);
      DARABONBA_PTR_FROM_JSON(country_code, countryCode_);
      DARABONBA_PTR_FROM_JSON(country_name, countryName_);
      DARABONBA_PTR_FROM_JSON(district_code, districtCode_);
      DARABONBA_PTR_FROM_JSON(district_name, districtName_);
      DARABONBA_PTR_FROM_JSON(hotel_address, hotelAddress_);
      DARABONBA_PTR_FROM_JSON(hotel_brand_code, hotelBrandCode_);
      DARABONBA_PTR_FROM_JSON(hotel_brand_name, hotelBrandName_);
      DARABONBA_PTR_FROM_JSON(hotel_group, hotelGroup_);
      DARABONBA_PTR_FROM_JSON(hotel_id, hotelId_);
      DARABONBA_PTR_FROM_JSON(hotel_name, hotelName_);
      DARABONBA_PTR_FROM_JSON(hotel_name_en, hotelNameEn_);
      DARABONBA_PTR_FROM_JSON(star, star_);
    };
    HotelOrderInfoQueryResponseBodyModuleHotelInfo() = default ;
    HotelOrderInfoQueryResponseBodyModuleHotelInfo(const HotelOrderInfoQueryResponseBodyModuleHotelInfo &) = default ;
    HotelOrderInfoQueryResponseBodyModuleHotelInfo(HotelOrderInfoQueryResponseBodyModuleHotelInfo &&) = default ;
    HotelOrderInfoQueryResponseBodyModuleHotelInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelOrderInfoQueryResponseBodyModuleHotelInfo() = default ;
    HotelOrderInfoQueryResponseBodyModuleHotelInfo& operator=(const HotelOrderInfoQueryResponseBodyModuleHotelInfo &) = default ;
    HotelOrderInfoQueryResponseBodyModuleHotelInfo& operator=(HotelOrderInfoQueryResponseBodyModuleHotelInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cityCode_ != nullptr
        && this->cityName_ != nullptr && this->countryCode_ != nullptr && this->countryName_ != nullptr && this->districtCode_ != nullptr && this->districtName_ != nullptr
        && this->hotelAddress_ != nullptr && this->hotelBrandCode_ != nullptr && this->hotelBrandName_ != nullptr && this->hotelGroup_ != nullptr && this->hotelId_ != nullptr
        && this->hotelName_ != nullptr && this->hotelNameEn_ != nullptr && this->star_ != nullptr; };
    // cityCode Field Functions 
    bool hasCityCode() const { return this->cityCode_ != nullptr;};
    void deleteCityCode() { this->cityCode_ = nullptr;};
    inline string cityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
    inline HotelOrderInfoQueryResponseBodyModuleHotelInfo& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


    // cityName Field Functions 
    bool hasCityName() const { return this->cityName_ != nullptr;};
    void deleteCityName() { this->cityName_ = nullptr;};
    inline string cityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
    inline HotelOrderInfoQueryResponseBodyModuleHotelInfo& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


    // countryCode Field Functions 
    bool hasCountryCode() const { return this->countryCode_ != nullptr;};
    void deleteCountryCode() { this->countryCode_ = nullptr;};
    inline string countryCode() const { DARABONBA_PTR_GET_DEFAULT(countryCode_, "") };
    inline HotelOrderInfoQueryResponseBodyModuleHotelInfo& setCountryCode(string countryCode) { DARABONBA_PTR_SET_VALUE(countryCode_, countryCode) };


    // countryName Field Functions 
    bool hasCountryName() const { return this->countryName_ != nullptr;};
    void deleteCountryName() { this->countryName_ = nullptr;};
    inline string countryName() const { DARABONBA_PTR_GET_DEFAULT(countryName_, "") };
    inline HotelOrderInfoQueryResponseBodyModuleHotelInfo& setCountryName(string countryName) { DARABONBA_PTR_SET_VALUE(countryName_, countryName) };


    // districtCode Field Functions 
    bool hasDistrictCode() const { return this->districtCode_ != nullptr;};
    void deleteDistrictCode() { this->districtCode_ = nullptr;};
    inline string districtCode() const { DARABONBA_PTR_GET_DEFAULT(districtCode_, "") };
    inline HotelOrderInfoQueryResponseBodyModuleHotelInfo& setDistrictCode(string districtCode) { DARABONBA_PTR_SET_VALUE(districtCode_, districtCode) };


    // districtName Field Functions 
    bool hasDistrictName() const { return this->districtName_ != nullptr;};
    void deleteDistrictName() { this->districtName_ = nullptr;};
    inline string districtName() const { DARABONBA_PTR_GET_DEFAULT(districtName_, "") };
    inline HotelOrderInfoQueryResponseBodyModuleHotelInfo& setDistrictName(string districtName) { DARABONBA_PTR_SET_VALUE(districtName_, districtName) };


    // hotelAddress Field Functions 
    bool hasHotelAddress() const { return this->hotelAddress_ != nullptr;};
    void deleteHotelAddress() { this->hotelAddress_ = nullptr;};
    inline string hotelAddress() const { DARABONBA_PTR_GET_DEFAULT(hotelAddress_, "") };
    inline HotelOrderInfoQueryResponseBodyModuleHotelInfo& setHotelAddress(string hotelAddress) { DARABONBA_PTR_SET_VALUE(hotelAddress_, hotelAddress) };


    // hotelBrandCode Field Functions 
    bool hasHotelBrandCode() const { return this->hotelBrandCode_ != nullptr;};
    void deleteHotelBrandCode() { this->hotelBrandCode_ = nullptr;};
    inline string hotelBrandCode() const { DARABONBA_PTR_GET_DEFAULT(hotelBrandCode_, "") };
    inline HotelOrderInfoQueryResponseBodyModuleHotelInfo& setHotelBrandCode(string hotelBrandCode) { DARABONBA_PTR_SET_VALUE(hotelBrandCode_, hotelBrandCode) };


    // hotelBrandName Field Functions 
    bool hasHotelBrandName() const { return this->hotelBrandName_ != nullptr;};
    void deleteHotelBrandName() { this->hotelBrandName_ = nullptr;};
    inline string hotelBrandName() const { DARABONBA_PTR_GET_DEFAULT(hotelBrandName_, "") };
    inline HotelOrderInfoQueryResponseBodyModuleHotelInfo& setHotelBrandName(string hotelBrandName) { DARABONBA_PTR_SET_VALUE(hotelBrandName_, hotelBrandName) };


    // hotelGroup Field Functions 
    bool hasHotelGroup() const { return this->hotelGroup_ != nullptr;};
    void deleteHotelGroup() { this->hotelGroup_ = nullptr;};
    inline string hotelGroup() const { DARABONBA_PTR_GET_DEFAULT(hotelGroup_, "") };
    inline HotelOrderInfoQueryResponseBodyModuleHotelInfo& setHotelGroup(string hotelGroup) { DARABONBA_PTR_SET_VALUE(hotelGroup_, hotelGroup) };


    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string hotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline HotelOrderInfoQueryResponseBodyModuleHotelInfo& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // hotelName Field Functions 
    bool hasHotelName() const { return this->hotelName_ != nullptr;};
    void deleteHotelName() { this->hotelName_ = nullptr;};
    inline string hotelName() const { DARABONBA_PTR_GET_DEFAULT(hotelName_, "") };
    inline HotelOrderInfoQueryResponseBodyModuleHotelInfo& setHotelName(string hotelName) { DARABONBA_PTR_SET_VALUE(hotelName_, hotelName) };


    // hotelNameEn Field Functions 
    bool hasHotelNameEn() const { return this->hotelNameEn_ != nullptr;};
    void deleteHotelNameEn() { this->hotelNameEn_ = nullptr;};
    inline string hotelNameEn() const { DARABONBA_PTR_GET_DEFAULT(hotelNameEn_, "") };
    inline HotelOrderInfoQueryResponseBodyModuleHotelInfo& setHotelNameEn(string hotelNameEn) { DARABONBA_PTR_SET_VALUE(hotelNameEn_, hotelNameEn) };


    // star Field Functions 
    bool hasStar() const { return this->star_ != nullptr;};
    void deleteStar() { this->star_ = nullptr;};
    inline string star() const { DARABONBA_PTR_GET_DEFAULT(star_, "") };
    inline HotelOrderInfoQueryResponseBodyModuleHotelInfo& setStar(string star) { DARABONBA_PTR_SET_VALUE(star_, star) };


  protected:
    std::shared_ptr<string> cityCode_ = nullptr;
    std::shared_ptr<string> cityName_ = nullptr;
    std::shared_ptr<string> countryCode_ = nullptr;
    std::shared_ptr<string> countryName_ = nullptr;
    std::shared_ptr<string> districtCode_ = nullptr;
    std::shared_ptr<string> districtName_ = nullptr;
    std::shared_ptr<string> hotelAddress_ = nullptr;
    std::shared_ptr<string> hotelBrandCode_ = nullptr;
    std::shared_ptr<string> hotelBrandName_ = nullptr;
    std::shared_ptr<string> hotelGroup_ = nullptr;
    std::shared_ptr<string> hotelId_ = nullptr;
    std::shared_ptr<string> hotelName_ = nullptr;
    std::shared_ptr<string> hotelNameEn_ = nullptr;
    std::shared_ptr<string> star_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
