// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELORDERQUERYRESPONSEBODYMODULEHOTELINFO_HPP_
#define ALIBABACLOUD_MODELS_HOTELORDERQUERYRESPONSEBODYMODULEHOTELINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelOrderQueryResponseBodyModuleHotelInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelOrderQueryResponseBodyModuleHotelInfo& obj) { 
      DARABONBA_PTR_TO_JSON(brand_code, brandCode_);
      DARABONBA_PTR_TO_JSON(brand_group, brandGroup_);
      DARABONBA_PTR_TO_JSON(brand_name, brandName_);
      DARABONBA_PTR_TO_JSON(check_in, checkIn_);
      DARABONBA_PTR_TO_JSON(check_out, checkOut_);
      DARABONBA_PTR_TO_JSON(city, city_);
      DARABONBA_PTR_TO_JSON(city_ad_code, cityAdCode_);
      DARABONBA_PTR_TO_JSON(country_code, countryCode_);
      DARABONBA_PTR_TO_JSON(country_name, countryName_);
      DARABONBA_PTR_TO_JSON(hotel_address, hotelAddress_);
      DARABONBA_PTR_TO_JSON(hotel_name, hotelName_);
      DARABONBA_PTR_TO_JSON(hotel_phone, hotelPhone_);
      DARABONBA_PTR_TO_JSON(hotel_support_vat_invoice_type, hotelSupportVatInvoiceType_);
      DARABONBA_PTR_TO_JSON(night, night_);
      DARABONBA_PTR_TO_JSON(room_num, roomNum_);
      DARABONBA_PTR_TO_JSON(room_type, roomType_);
    };
    friend void from_json(const Darabonba::Json& j, HotelOrderQueryResponseBodyModuleHotelInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(brand_code, brandCode_);
      DARABONBA_PTR_FROM_JSON(brand_group, brandGroup_);
      DARABONBA_PTR_FROM_JSON(brand_name, brandName_);
      DARABONBA_PTR_FROM_JSON(check_in, checkIn_);
      DARABONBA_PTR_FROM_JSON(check_out, checkOut_);
      DARABONBA_PTR_FROM_JSON(city, city_);
      DARABONBA_PTR_FROM_JSON(city_ad_code, cityAdCode_);
      DARABONBA_PTR_FROM_JSON(country_code, countryCode_);
      DARABONBA_PTR_FROM_JSON(country_name, countryName_);
      DARABONBA_PTR_FROM_JSON(hotel_address, hotelAddress_);
      DARABONBA_PTR_FROM_JSON(hotel_name, hotelName_);
      DARABONBA_PTR_FROM_JSON(hotel_phone, hotelPhone_);
      DARABONBA_PTR_FROM_JSON(hotel_support_vat_invoice_type, hotelSupportVatInvoiceType_);
      DARABONBA_PTR_FROM_JSON(night, night_);
      DARABONBA_PTR_FROM_JSON(room_num, roomNum_);
      DARABONBA_PTR_FROM_JSON(room_type, roomType_);
    };
    HotelOrderQueryResponseBodyModuleHotelInfo() = default ;
    HotelOrderQueryResponseBodyModuleHotelInfo(const HotelOrderQueryResponseBodyModuleHotelInfo &) = default ;
    HotelOrderQueryResponseBodyModuleHotelInfo(HotelOrderQueryResponseBodyModuleHotelInfo &&) = default ;
    HotelOrderQueryResponseBodyModuleHotelInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelOrderQueryResponseBodyModuleHotelInfo() = default ;
    HotelOrderQueryResponseBodyModuleHotelInfo& operator=(const HotelOrderQueryResponseBodyModuleHotelInfo &) = default ;
    HotelOrderQueryResponseBodyModuleHotelInfo& operator=(HotelOrderQueryResponseBodyModuleHotelInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->brandCode_ != nullptr
        && this->brandGroup_ != nullptr && this->brandName_ != nullptr && this->checkIn_ != nullptr && this->checkOut_ != nullptr && this->city_ != nullptr
        && this->cityAdCode_ != nullptr && this->countryCode_ != nullptr && this->countryName_ != nullptr && this->hotelAddress_ != nullptr && this->hotelName_ != nullptr
        && this->hotelPhone_ != nullptr && this->hotelSupportVatInvoiceType_ != nullptr && this->night_ != nullptr && this->roomNum_ != nullptr && this->roomType_ != nullptr; };
    // brandCode Field Functions 
    bool hasBrandCode() const { return this->brandCode_ != nullptr;};
    void deleteBrandCode() { this->brandCode_ = nullptr;};
    inline string brandCode() const { DARABONBA_PTR_GET_DEFAULT(brandCode_, "") };
    inline HotelOrderQueryResponseBodyModuleHotelInfo& setBrandCode(string brandCode) { DARABONBA_PTR_SET_VALUE(brandCode_, brandCode) };


    // brandGroup Field Functions 
    bool hasBrandGroup() const { return this->brandGroup_ != nullptr;};
    void deleteBrandGroup() { this->brandGroup_ = nullptr;};
    inline string brandGroup() const { DARABONBA_PTR_GET_DEFAULT(brandGroup_, "") };
    inline HotelOrderQueryResponseBodyModuleHotelInfo& setBrandGroup(string brandGroup) { DARABONBA_PTR_SET_VALUE(brandGroup_, brandGroup) };


    // brandName Field Functions 
    bool hasBrandName() const { return this->brandName_ != nullptr;};
    void deleteBrandName() { this->brandName_ = nullptr;};
    inline string brandName() const { DARABONBA_PTR_GET_DEFAULT(brandName_, "") };
    inline HotelOrderQueryResponseBodyModuleHotelInfo& setBrandName(string brandName) { DARABONBA_PTR_SET_VALUE(brandName_, brandName) };


    // checkIn Field Functions 
    bool hasCheckIn() const { return this->checkIn_ != nullptr;};
    void deleteCheckIn() { this->checkIn_ = nullptr;};
    inline int64_t checkIn() const { DARABONBA_PTR_GET_DEFAULT(checkIn_, 0L) };
    inline HotelOrderQueryResponseBodyModuleHotelInfo& setCheckIn(int64_t checkIn) { DARABONBA_PTR_SET_VALUE(checkIn_, checkIn) };


    // checkOut Field Functions 
    bool hasCheckOut() const { return this->checkOut_ != nullptr;};
    void deleteCheckOut() { this->checkOut_ = nullptr;};
    inline int64_t checkOut() const { DARABONBA_PTR_GET_DEFAULT(checkOut_, 0L) };
    inline HotelOrderQueryResponseBodyModuleHotelInfo& setCheckOut(int64_t checkOut) { DARABONBA_PTR_SET_VALUE(checkOut_, checkOut) };


    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string city() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline HotelOrderQueryResponseBodyModuleHotelInfo& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // cityAdCode Field Functions 
    bool hasCityAdCode() const { return this->cityAdCode_ != nullptr;};
    void deleteCityAdCode() { this->cityAdCode_ = nullptr;};
    inline string cityAdCode() const { DARABONBA_PTR_GET_DEFAULT(cityAdCode_, "") };
    inline HotelOrderQueryResponseBodyModuleHotelInfo& setCityAdCode(string cityAdCode) { DARABONBA_PTR_SET_VALUE(cityAdCode_, cityAdCode) };


    // countryCode Field Functions 
    bool hasCountryCode() const { return this->countryCode_ != nullptr;};
    void deleteCountryCode() { this->countryCode_ = nullptr;};
    inline string countryCode() const { DARABONBA_PTR_GET_DEFAULT(countryCode_, "") };
    inline HotelOrderQueryResponseBodyModuleHotelInfo& setCountryCode(string countryCode) { DARABONBA_PTR_SET_VALUE(countryCode_, countryCode) };


    // countryName Field Functions 
    bool hasCountryName() const { return this->countryName_ != nullptr;};
    void deleteCountryName() { this->countryName_ = nullptr;};
    inline string countryName() const { DARABONBA_PTR_GET_DEFAULT(countryName_, "") };
    inline HotelOrderQueryResponseBodyModuleHotelInfo& setCountryName(string countryName) { DARABONBA_PTR_SET_VALUE(countryName_, countryName) };


    // hotelAddress Field Functions 
    bool hasHotelAddress() const { return this->hotelAddress_ != nullptr;};
    void deleteHotelAddress() { this->hotelAddress_ = nullptr;};
    inline string hotelAddress() const { DARABONBA_PTR_GET_DEFAULT(hotelAddress_, "") };
    inline HotelOrderQueryResponseBodyModuleHotelInfo& setHotelAddress(string hotelAddress) { DARABONBA_PTR_SET_VALUE(hotelAddress_, hotelAddress) };


    // hotelName Field Functions 
    bool hasHotelName() const { return this->hotelName_ != nullptr;};
    void deleteHotelName() { this->hotelName_ = nullptr;};
    inline string hotelName() const { DARABONBA_PTR_GET_DEFAULT(hotelName_, "") };
    inline HotelOrderQueryResponseBodyModuleHotelInfo& setHotelName(string hotelName) { DARABONBA_PTR_SET_VALUE(hotelName_, hotelName) };


    // hotelPhone Field Functions 
    bool hasHotelPhone() const { return this->hotelPhone_ != nullptr;};
    void deleteHotelPhone() { this->hotelPhone_ = nullptr;};
    inline string hotelPhone() const { DARABONBA_PTR_GET_DEFAULT(hotelPhone_, "") };
    inline HotelOrderQueryResponseBodyModuleHotelInfo& setHotelPhone(string hotelPhone) { DARABONBA_PTR_SET_VALUE(hotelPhone_, hotelPhone) };


    // hotelSupportVatInvoiceType Field Functions 
    bool hasHotelSupportVatInvoiceType() const { return this->hotelSupportVatInvoiceType_ != nullptr;};
    void deleteHotelSupportVatInvoiceType() { this->hotelSupportVatInvoiceType_ = nullptr;};
    inline int32_t hotelSupportVatInvoiceType() const { DARABONBA_PTR_GET_DEFAULT(hotelSupportVatInvoiceType_, 0) };
    inline HotelOrderQueryResponseBodyModuleHotelInfo& setHotelSupportVatInvoiceType(int32_t hotelSupportVatInvoiceType) { DARABONBA_PTR_SET_VALUE(hotelSupportVatInvoiceType_, hotelSupportVatInvoiceType) };


    // night Field Functions 
    bool hasNight() const { return this->night_ != nullptr;};
    void deleteNight() { this->night_ = nullptr;};
    inline int32_t night() const { DARABONBA_PTR_GET_DEFAULT(night_, 0) };
    inline HotelOrderQueryResponseBodyModuleHotelInfo& setNight(int32_t night) { DARABONBA_PTR_SET_VALUE(night_, night) };


    // roomNum Field Functions 
    bool hasRoomNum() const { return this->roomNum_ != nullptr;};
    void deleteRoomNum() { this->roomNum_ = nullptr;};
    inline int32_t roomNum() const { DARABONBA_PTR_GET_DEFAULT(roomNum_, 0) };
    inline HotelOrderQueryResponseBodyModuleHotelInfo& setRoomNum(int32_t roomNum) { DARABONBA_PTR_SET_VALUE(roomNum_, roomNum) };


    // roomType Field Functions 
    bool hasRoomType() const { return this->roomType_ != nullptr;};
    void deleteRoomType() { this->roomType_ = nullptr;};
    inline string roomType() const { DARABONBA_PTR_GET_DEFAULT(roomType_, "") };
    inline HotelOrderQueryResponseBodyModuleHotelInfo& setRoomType(string roomType) { DARABONBA_PTR_SET_VALUE(roomType_, roomType) };


  protected:
    std::shared_ptr<string> brandCode_ = nullptr;
    std::shared_ptr<string> brandGroup_ = nullptr;
    std::shared_ptr<string> brandName_ = nullptr;
    std::shared_ptr<int64_t> checkIn_ = nullptr;
    std::shared_ptr<int64_t> checkOut_ = nullptr;
    std::shared_ptr<string> city_ = nullptr;
    std::shared_ptr<string> cityAdCode_ = nullptr;
    std::shared_ptr<string> countryCode_ = nullptr;
    std::shared_ptr<string> countryName_ = nullptr;
    std::shared_ptr<string> hotelAddress_ = nullptr;
    std::shared_ptr<string> hotelName_ = nullptr;
    std::shared_ptr<string> hotelPhone_ = nullptr;
    std::shared_ptr<int32_t> hotelSupportVatInvoiceType_ = nullptr;
    std::shared_ptr<int32_t> night_ = nullptr;
    std::shared_ptr<int32_t> roomNum_ = nullptr;
    std::shared_ptr<string> roomType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
