// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELORDERDETAILINFORESPONSEBODYMODULEHOTELDETAILINFO_HPP_
#define ALIBABACLOUD_MODELS_HOTELORDERDETAILINFORESPONSEBODYMODULEHOTELDETAILINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelOrderDetailInfoResponseBodyModuleHotelDetailInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelOrderDetailInfoResponseBodyModuleHotelDetailInfo& obj) { 
      DARABONBA_PTR_TO_JSON(address, address_);
      DARABONBA_PTR_TO_JSON(city_name, cityName_);
      DARABONBA_PTR_TO_JSON(hotel_name, hotelName_);
      DARABONBA_PTR_TO_JSON(hotel_tel, hotelTel_);
      DARABONBA_PTR_TO_JSON(shid, shid_);
    };
    friend void from_json(const Darabonba::Json& j, HotelOrderDetailInfoResponseBodyModuleHotelDetailInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(address, address_);
      DARABONBA_PTR_FROM_JSON(city_name, cityName_);
      DARABONBA_PTR_FROM_JSON(hotel_name, hotelName_);
      DARABONBA_PTR_FROM_JSON(hotel_tel, hotelTel_);
      DARABONBA_PTR_FROM_JSON(shid, shid_);
    };
    HotelOrderDetailInfoResponseBodyModuleHotelDetailInfo() = default ;
    HotelOrderDetailInfoResponseBodyModuleHotelDetailInfo(const HotelOrderDetailInfoResponseBodyModuleHotelDetailInfo &) = default ;
    HotelOrderDetailInfoResponseBodyModuleHotelDetailInfo(HotelOrderDetailInfoResponseBodyModuleHotelDetailInfo &&) = default ;
    HotelOrderDetailInfoResponseBodyModuleHotelDetailInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelOrderDetailInfoResponseBodyModuleHotelDetailInfo() = default ;
    HotelOrderDetailInfoResponseBodyModuleHotelDetailInfo& operator=(const HotelOrderDetailInfoResponseBodyModuleHotelDetailInfo &) = default ;
    HotelOrderDetailInfoResponseBodyModuleHotelDetailInfo& operator=(HotelOrderDetailInfoResponseBodyModuleHotelDetailInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->address_ != nullptr
        && this->cityName_ != nullptr && this->hotelName_ != nullptr && this->hotelTel_ != nullptr && this->shid_ != nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline HotelOrderDetailInfoResponseBodyModuleHotelDetailInfo& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // cityName Field Functions 
    bool hasCityName() const { return this->cityName_ != nullptr;};
    void deleteCityName() { this->cityName_ = nullptr;};
    inline string cityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
    inline HotelOrderDetailInfoResponseBodyModuleHotelDetailInfo& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


    // hotelName Field Functions 
    bool hasHotelName() const { return this->hotelName_ != nullptr;};
    void deleteHotelName() { this->hotelName_ = nullptr;};
    inline string hotelName() const { DARABONBA_PTR_GET_DEFAULT(hotelName_, "") };
    inline HotelOrderDetailInfoResponseBodyModuleHotelDetailInfo& setHotelName(string hotelName) { DARABONBA_PTR_SET_VALUE(hotelName_, hotelName) };


    // hotelTel Field Functions 
    bool hasHotelTel() const { return this->hotelTel_ != nullptr;};
    void deleteHotelTel() { this->hotelTel_ = nullptr;};
    inline string hotelTel() const { DARABONBA_PTR_GET_DEFAULT(hotelTel_, "") };
    inline HotelOrderDetailInfoResponseBodyModuleHotelDetailInfo& setHotelTel(string hotelTel) { DARABONBA_PTR_SET_VALUE(hotelTel_, hotelTel) };


    // shid Field Functions 
    bool hasShid() const { return this->shid_ != nullptr;};
    void deleteShid() { this->shid_ = nullptr;};
    inline int64_t shid() const { DARABONBA_PTR_GET_DEFAULT(shid_, 0L) };
    inline HotelOrderDetailInfoResponseBodyModuleHotelDetailInfo& setShid(int64_t shid) { DARABONBA_PTR_SET_VALUE(shid_, shid) };


  protected:
    std::shared_ptr<string> address_ = nullptr;
    std::shared_ptr<string> cityName_ = nullptr;
    std::shared_ptr<string> hotelName_ = nullptr;
    std::shared_ptr<string> hotelTel_ = nullptr;
    std::shared_ptr<int64_t> shid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
