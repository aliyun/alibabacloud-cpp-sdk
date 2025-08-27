// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELASKINGPRICESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_HOTELASKINGPRICESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelAskingPriceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelAskingPriceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(adult_num, adultNum_);
      DARABONBA_PTR_TO_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_TO_JSON(check_in_date, checkInDate_);
      DARABONBA_PTR_TO_JSON(check_out_date, checkOutDate_);
      DARABONBA_PTR_TO_JSON(city_code, cityCode_);
      DARABONBA_PTR_TO_JSON(city_name, cityName_);
      DARABONBA_PTR_TO_JSON(dir, dir_);
      DARABONBA_PTR_TO_JSON(hotel_star, hotelStar_);
      DARABONBA_PTR_TO_JSON(is_protocol, isProtocol_);
      DARABONBA_PTR_TO_JSON(payment_type, paymentType_);
      DARABONBA_PTR_TO_JSON(shids, shidsShrink_);
      DARABONBA_PTR_TO_JSON(sort_code, sortCode_);
    };
    friend void from_json(const Darabonba::Json& j, HotelAskingPriceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(adult_num, adultNum_);
      DARABONBA_PTR_FROM_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_FROM_JSON(check_in_date, checkInDate_);
      DARABONBA_PTR_FROM_JSON(check_out_date, checkOutDate_);
      DARABONBA_PTR_FROM_JSON(city_code, cityCode_);
      DARABONBA_PTR_FROM_JSON(city_name, cityName_);
      DARABONBA_PTR_FROM_JSON(dir, dir_);
      DARABONBA_PTR_FROM_JSON(hotel_star, hotelStar_);
      DARABONBA_PTR_FROM_JSON(is_protocol, isProtocol_);
      DARABONBA_PTR_FROM_JSON(payment_type, paymentType_);
      DARABONBA_PTR_FROM_JSON(shids, shidsShrink_);
      DARABONBA_PTR_FROM_JSON(sort_code, sortCode_);
    };
    HotelAskingPriceShrinkRequest() = default ;
    HotelAskingPriceShrinkRequest(const HotelAskingPriceShrinkRequest &) = default ;
    HotelAskingPriceShrinkRequest(HotelAskingPriceShrinkRequest &&) = default ;
    HotelAskingPriceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelAskingPriceShrinkRequest() = default ;
    HotelAskingPriceShrinkRequest& operator=(const HotelAskingPriceShrinkRequest &) = default ;
    HotelAskingPriceShrinkRequest& operator=(HotelAskingPriceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->adultNum_ != nullptr
        && this->btripUserId_ != nullptr && this->checkInDate_ != nullptr && this->checkOutDate_ != nullptr && this->cityCode_ != nullptr && this->cityName_ != nullptr
        && this->dir_ != nullptr && this->hotelStar_ != nullptr && this->isProtocol_ != nullptr && this->paymentType_ != nullptr && this->shidsShrink_ != nullptr
        && this->sortCode_ != nullptr; };
    // adultNum Field Functions 
    bool hasAdultNum() const { return this->adultNum_ != nullptr;};
    void deleteAdultNum() { this->adultNum_ = nullptr;};
    inline string adultNum() const { DARABONBA_PTR_GET_DEFAULT(adultNum_, "") };
    inline HotelAskingPriceShrinkRequest& setAdultNum(string adultNum) { DARABONBA_PTR_SET_VALUE(adultNum_, adultNum) };


    // btripUserId Field Functions 
    bool hasBtripUserId() const { return this->btripUserId_ != nullptr;};
    void deleteBtripUserId() { this->btripUserId_ = nullptr;};
    inline string btripUserId() const { DARABONBA_PTR_GET_DEFAULT(btripUserId_, "") };
    inline HotelAskingPriceShrinkRequest& setBtripUserId(string btripUserId) { DARABONBA_PTR_SET_VALUE(btripUserId_, btripUserId) };


    // checkInDate Field Functions 
    bool hasCheckInDate() const { return this->checkInDate_ != nullptr;};
    void deleteCheckInDate() { this->checkInDate_ = nullptr;};
    inline string checkInDate() const { DARABONBA_PTR_GET_DEFAULT(checkInDate_, "") };
    inline HotelAskingPriceShrinkRequest& setCheckInDate(string checkInDate) { DARABONBA_PTR_SET_VALUE(checkInDate_, checkInDate) };


    // checkOutDate Field Functions 
    bool hasCheckOutDate() const { return this->checkOutDate_ != nullptr;};
    void deleteCheckOutDate() { this->checkOutDate_ = nullptr;};
    inline string checkOutDate() const { DARABONBA_PTR_GET_DEFAULT(checkOutDate_, "") };
    inline HotelAskingPriceShrinkRequest& setCheckOutDate(string checkOutDate) { DARABONBA_PTR_SET_VALUE(checkOutDate_, checkOutDate) };


    // cityCode Field Functions 
    bool hasCityCode() const { return this->cityCode_ != nullptr;};
    void deleteCityCode() { this->cityCode_ = nullptr;};
    inline string cityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
    inline HotelAskingPriceShrinkRequest& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


    // cityName Field Functions 
    bool hasCityName() const { return this->cityName_ != nullptr;};
    void deleteCityName() { this->cityName_ = nullptr;};
    inline string cityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
    inline HotelAskingPriceShrinkRequest& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


    // dir Field Functions 
    bool hasDir() const { return this->dir_ != nullptr;};
    void deleteDir() { this->dir_ = nullptr;};
    inline int32_t dir() const { DARABONBA_PTR_GET_DEFAULT(dir_, 0) };
    inline HotelAskingPriceShrinkRequest& setDir(int32_t dir) { DARABONBA_PTR_SET_VALUE(dir_, dir) };


    // hotelStar Field Functions 
    bool hasHotelStar() const { return this->hotelStar_ != nullptr;};
    void deleteHotelStar() { this->hotelStar_ = nullptr;};
    inline string hotelStar() const { DARABONBA_PTR_GET_DEFAULT(hotelStar_, "") };
    inline HotelAskingPriceShrinkRequest& setHotelStar(string hotelStar) { DARABONBA_PTR_SET_VALUE(hotelStar_, hotelStar) };


    // isProtocol Field Functions 
    bool hasIsProtocol() const { return this->isProtocol_ != nullptr;};
    void deleteIsProtocol() { this->isProtocol_ = nullptr;};
    inline bool isProtocol() const { DARABONBA_PTR_GET_DEFAULT(isProtocol_, false) };
    inline HotelAskingPriceShrinkRequest& setIsProtocol(bool isProtocol) { DARABONBA_PTR_SET_VALUE(isProtocol_, isProtocol) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline int32_t paymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, 0) };
    inline HotelAskingPriceShrinkRequest& setPaymentType(int32_t paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // shidsShrink Field Functions 
    bool hasShidsShrink() const { return this->shidsShrink_ != nullptr;};
    void deleteShidsShrink() { this->shidsShrink_ = nullptr;};
    inline string shidsShrink() const { DARABONBA_PTR_GET_DEFAULT(shidsShrink_, "") };
    inline HotelAskingPriceShrinkRequest& setShidsShrink(string shidsShrink) { DARABONBA_PTR_SET_VALUE(shidsShrink_, shidsShrink) };


    // sortCode Field Functions 
    bool hasSortCode() const { return this->sortCode_ != nullptr;};
    void deleteSortCode() { this->sortCode_ = nullptr;};
    inline int32_t sortCode() const { DARABONBA_PTR_GET_DEFAULT(sortCode_, 0) };
    inline HotelAskingPriceShrinkRequest& setSortCode(int32_t sortCode) { DARABONBA_PTR_SET_VALUE(sortCode_, sortCode) };


  protected:
    std::shared_ptr<string> adultNum_ = nullptr;
    std::shared_ptr<string> btripUserId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> checkInDate_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> checkOutDate_ = nullptr;
    std::shared_ptr<string> cityCode_ = nullptr;
    std::shared_ptr<string> cityName_ = nullptr;
    std::shared_ptr<int32_t> dir_ = nullptr;
    std::shared_ptr<string> hotelStar_ = nullptr;
    std::shared_ptr<bool> isProtocol_ = nullptr;
    std::shared_ptr<int32_t> paymentType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> shidsShrink_ = nullptr;
    std::shared_ptr<int32_t> sortCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
