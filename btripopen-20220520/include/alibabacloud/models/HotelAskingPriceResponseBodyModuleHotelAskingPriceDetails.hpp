// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELASKINGPRICERESPONSEBODYMODULEHOTELASKINGPRICEDETAILS_HPP_
#define ALIBABACLOUD_MODELS_HOTELASKINGPRICERESPONSEBODYMODULEHOTELASKINGPRICEDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelAskingPriceResponseBodyModuleHotelAskingPriceDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelAskingPriceResponseBodyModuleHotelAskingPriceDetails& obj) { 
      DARABONBA_PTR_TO_JSON(city_code, cityCode_);
      DARABONBA_PTR_TO_JSON(hotel_address, hotelAddress_);
      DARABONBA_PTR_TO_JSON(hotel_code, hotelCode_);
      DARABONBA_PTR_TO_JSON(hotel_name, hotelName_);
      DARABONBA_PTR_TO_JSON(is_protocol, isProtocol_);
      DARABONBA_PTR_TO_JSON(min_price, minPrice_);
      DARABONBA_PTR_TO_JSON(original_min_price, originalMinPrice_);
    };
    friend void from_json(const Darabonba::Json& j, HotelAskingPriceResponseBodyModuleHotelAskingPriceDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(city_code, cityCode_);
      DARABONBA_PTR_FROM_JSON(hotel_address, hotelAddress_);
      DARABONBA_PTR_FROM_JSON(hotel_code, hotelCode_);
      DARABONBA_PTR_FROM_JSON(hotel_name, hotelName_);
      DARABONBA_PTR_FROM_JSON(is_protocol, isProtocol_);
      DARABONBA_PTR_FROM_JSON(min_price, minPrice_);
      DARABONBA_PTR_FROM_JSON(original_min_price, originalMinPrice_);
    };
    HotelAskingPriceResponseBodyModuleHotelAskingPriceDetails() = default ;
    HotelAskingPriceResponseBodyModuleHotelAskingPriceDetails(const HotelAskingPriceResponseBodyModuleHotelAskingPriceDetails &) = default ;
    HotelAskingPriceResponseBodyModuleHotelAskingPriceDetails(HotelAskingPriceResponseBodyModuleHotelAskingPriceDetails &&) = default ;
    HotelAskingPriceResponseBodyModuleHotelAskingPriceDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelAskingPriceResponseBodyModuleHotelAskingPriceDetails() = default ;
    HotelAskingPriceResponseBodyModuleHotelAskingPriceDetails& operator=(const HotelAskingPriceResponseBodyModuleHotelAskingPriceDetails &) = default ;
    HotelAskingPriceResponseBodyModuleHotelAskingPriceDetails& operator=(HotelAskingPriceResponseBodyModuleHotelAskingPriceDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cityCode_ != nullptr
        && this->hotelAddress_ != nullptr && this->hotelCode_ != nullptr && this->hotelName_ != nullptr && this->isProtocol_ != nullptr && this->minPrice_ != nullptr
        && this->originalMinPrice_ != nullptr; };
    // cityCode Field Functions 
    bool hasCityCode() const { return this->cityCode_ != nullptr;};
    void deleteCityCode() { this->cityCode_ = nullptr;};
    inline string cityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
    inline HotelAskingPriceResponseBodyModuleHotelAskingPriceDetails& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


    // hotelAddress Field Functions 
    bool hasHotelAddress() const { return this->hotelAddress_ != nullptr;};
    void deleteHotelAddress() { this->hotelAddress_ = nullptr;};
    inline string hotelAddress() const { DARABONBA_PTR_GET_DEFAULT(hotelAddress_, "") };
    inline HotelAskingPriceResponseBodyModuleHotelAskingPriceDetails& setHotelAddress(string hotelAddress) { DARABONBA_PTR_SET_VALUE(hotelAddress_, hotelAddress) };


    // hotelCode Field Functions 
    bool hasHotelCode() const { return this->hotelCode_ != nullptr;};
    void deleteHotelCode() { this->hotelCode_ = nullptr;};
    inline string hotelCode() const { DARABONBA_PTR_GET_DEFAULT(hotelCode_, "") };
    inline HotelAskingPriceResponseBodyModuleHotelAskingPriceDetails& setHotelCode(string hotelCode) { DARABONBA_PTR_SET_VALUE(hotelCode_, hotelCode) };


    // hotelName Field Functions 
    bool hasHotelName() const { return this->hotelName_ != nullptr;};
    void deleteHotelName() { this->hotelName_ = nullptr;};
    inline string hotelName() const { DARABONBA_PTR_GET_DEFAULT(hotelName_, "") };
    inline HotelAskingPriceResponseBodyModuleHotelAskingPriceDetails& setHotelName(string hotelName) { DARABONBA_PTR_SET_VALUE(hotelName_, hotelName) };


    // isProtocol Field Functions 
    bool hasIsProtocol() const { return this->isProtocol_ != nullptr;};
    void deleteIsProtocol() { this->isProtocol_ = nullptr;};
    inline bool isProtocol() const { DARABONBA_PTR_GET_DEFAULT(isProtocol_, false) };
    inline HotelAskingPriceResponseBodyModuleHotelAskingPriceDetails& setIsProtocol(bool isProtocol) { DARABONBA_PTR_SET_VALUE(isProtocol_, isProtocol) };


    // minPrice Field Functions 
    bool hasMinPrice() const { return this->minPrice_ != nullptr;};
    void deleteMinPrice() { this->minPrice_ = nullptr;};
    inline double minPrice() const { DARABONBA_PTR_GET_DEFAULT(minPrice_, 0.0) };
    inline HotelAskingPriceResponseBodyModuleHotelAskingPriceDetails& setMinPrice(double minPrice) { DARABONBA_PTR_SET_VALUE(minPrice_, minPrice) };


    // originalMinPrice Field Functions 
    bool hasOriginalMinPrice() const { return this->originalMinPrice_ != nullptr;};
    void deleteOriginalMinPrice() { this->originalMinPrice_ = nullptr;};
    inline double originalMinPrice() const { DARABONBA_PTR_GET_DEFAULT(originalMinPrice_, 0.0) };
    inline HotelAskingPriceResponseBodyModuleHotelAskingPriceDetails& setOriginalMinPrice(double originalMinPrice) { DARABONBA_PTR_SET_VALUE(originalMinPrice_, originalMinPrice) };


  protected:
    std::shared_ptr<string> cityCode_ = nullptr;
    std::shared_ptr<string> hotelAddress_ = nullptr;
    std::shared_ptr<string> hotelCode_ = nullptr;
    std::shared_ptr<string> hotelName_ = nullptr;
    std::shared_ptr<bool> isProtocol_ = nullptr;
    std::shared_ptr<double> minPrice_ = nullptr;
    std::shared_ptr<double> originalMinPrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
