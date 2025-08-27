// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELSUGGESTV2RESPONSEBODYMODULEKEYWORDSUGGESTINFOSBUSINESSAREAWITHCITY_HPP_
#define ALIBABACLOUD_MODELS_HOTELSUGGESTV2RESPONSEBODYMODULEKEYWORDSUGGESTINFOSBUSINESSAREAWITHCITY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelSuggestV2ResponseBodyModuleKeywordSuggestInfosBusinessAreaWithCity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelSuggestV2ResponseBodyModuleKeywordSuggestInfosBusinessAreaWithCity& obj) { 
      DARABONBA_PTR_TO_JSON(address, address_);
      DARABONBA_PTR_TO_JSON(city_code, cityCode_);
      DARABONBA_PTR_TO_JSON(city_name, cityName_);
      DARABONBA_PTR_TO_JSON(display_name, displayName_);
      DARABONBA_PTR_TO_JSON(hotel_id, hotelId_);
      DARABONBA_PTR_TO_JSON(icon, icon_);
      DARABONBA_PTR_TO_JSON(point, point_);
      DARABONBA_PTR_TO_JSON(price, price_);
      DARABONBA_PTR_TO_JSON(region, region_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(type_desc, typeDesc_);
    };
    friend void from_json(const Darabonba::Json& j, HotelSuggestV2ResponseBodyModuleKeywordSuggestInfosBusinessAreaWithCity& obj) { 
      DARABONBA_PTR_FROM_JSON(address, address_);
      DARABONBA_PTR_FROM_JSON(city_code, cityCode_);
      DARABONBA_PTR_FROM_JSON(city_name, cityName_);
      DARABONBA_PTR_FROM_JSON(display_name, displayName_);
      DARABONBA_PTR_FROM_JSON(hotel_id, hotelId_);
      DARABONBA_PTR_FROM_JSON(icon, icon_);
      DARABONBA_PTR_FROM_JSON(point, point_);
      DARABONBA_PTR_FROM_JSON(price, price_);
      DARABONBA_PTR_FROM_JSON(region, region_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(type_desc, typeDesc_);
    };
    HotelSuggestV2ResponseBodyModuleKeywordSuggestInfosBusinessAreaWithCity() = default ;
    HotelSuggestV2ResponseBodyModuleKeywordSuggestInfosBusinessAreaWithCity(const HotelSuggestV2ResponseBodyModuleKeywordSuggestInfosBusinessAreaWithCity &) = default ;
    HotelSuggestV2ResponseBodyModuleKeywordSuggestInfosBusinessAreaWithCity(HotelSuggestV2ResponseBodyModuleKeywordSuggestInfosBusinessAreaWithCity &&) = default ;
    HotelSuggestV2ResponseBodyModuleKeywordSuggestInfosBusinessAreaWithCity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelSuggestV2ResponseBodyModuleKeywordSuggestInfosBusinessAreaWithCity() = default ;
    HotelSuggestV2ResponseBodyModuleKeywordSuggestInfosBusinessAreaWithCity& operator=(const HotelSuggestV2ResponseBodyModuleKeywordSuggestInfosBusinessAreaWithCity &) = default ;
    HotelSuggestV2ResponseBodyModuleKeywordSuggestInfosBusinessAreaWithCity& operator=(HotelSuggestV2ResponseBodyModuleKeywordSuggestInfosBusinessAreaWithCity &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->address_ != nullptr
        && this->cityCode_ != nullptr && this->cityName_ != nullptr && this->displayName_ != nullptr && this->hotelId_ != nullptr && this->icon_ != nullptr
        && this->point_ != nullptr && this->price_ != nullptr && this->region_ != nullptr && this->type_ != nullptr && this->typeDesc_ != nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline HotelSuggestV2ResponseBodyModuleKeywordSuggestInfosBusinessAreaWithCity& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // cityCode Field Functions 
    bool hasCityCode() const { return this->cityCode_ != nullptr;};
    void deleteCityCode() { this->cityCode_ = nullptr;};
    inline int32_t cityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, 0) };
    inline HotelSuggestV2ResponseBodyModuleKeywordSuggestInfosBusinessAreaWithCity& setCityCode(int32_t cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


    // cityName Field Functions 
    bool hasCityName() const { return this->cityName_ != nullptr;};
    void deleteCityName() { this->cityName_ = nullptr;};
    inline string cityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
    inline HotelSuggestV2ResponseBodyModuleKeywordSuggestInfosBusinessAreaWithCity& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline HotelSuggestV2ResponseBodyModuleKeywordSuggestInfosBusinessAreaWithCity& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string hotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline HotelSuggestV2ResponseBodyModuleKeywordSuggestInfosBusinessAreaWithCity& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // icon Field Functions 
    bool hasIcon() const { return this->icon_ != nullptr;};
    void deleteIcon() { this->icon_ = nullptr;};
    inline string icon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
    inline HotelSuggestV2ResponseBodyModuleKeywordSuggestInfosBusinessAreaWithCity& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


    // point Field Functions 
    bool hasPoint() const { return this->point_ != nullptr;};
    void deletePoint() { this->point_ = nullptr;};
    inline string point() const { DARABONBA_PTR_GET_DEFAULT(point_, "") };
    inline HotelSuggestV2ResponseBodyModuleKeywordSuggestInfosBusinessAreaWithCity& setPoint(string point) { DARABONBA_PTR_SET_VALUE(point_, point) };


    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline string price() const { DARABONBA_PTR_GET_DEFAULT(price_, "") };
    inline HotelSuggestV2ResponseBodyModuleKeywordSuggestInfosBusinessAreaWithCity& setPrice(string price) { DARABONBA_PTR_SET_VALUE(price_, price) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline int32_t region() const { DARABONBA_PTR_GET_DEFAULT(region_, 0) };
    inline HotelSuggestV2ResponseBodyModuleKeywordSuggestInfosBusinessAreaWithCity& setRegion(int32_t region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline HotelSuggestV2ResponseBodyModuleKeywordSuggestInfosBusinessAreaWithCity& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // typeDesc Field Functions 
    bool hasTypeDesc() const { return this->typeDesc_ != nullptr;};
    void deleteTypeDesc() { this->typeDesc_ = nullptr;};
    inline string typeDesc() const { DARABONBA_PTR_GET_DEFAULT(typeDesc_, "") };
    inline HotelSuggestV2ResponseBodyModuleKeywordSuggestInfosBusinessAreaWithCity& setTypeDesc(string typeDesc) { DARABONBA_PTR_SET_VALUE(typeDesc_, typeDesc) };


  protected:
    std::shared_ptr<string> address_ = nullptr;
    std::shared_ptr<int32_t> cityCode_ = nullptr;
    std::shared_ptr<string> cityName_ = nullptr;
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> hotelId_ = nullptr;
    std::shared_ptr<string> icon_ = nullptr;
    std::shared_ptr<string> point_ = nullptr;
    std::shared_ptr<string> price_ = nullptr;
    std::shared_ptr<int32_t> region_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
    std::shared_ptr<string> typeDesc_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
