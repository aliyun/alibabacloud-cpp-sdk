// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELASKINGPRICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_HOTELASKINGPRICEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelAskingPriceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelAskingPriceRequest& obj) { 
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
      DARABONBA_PTR_TO_JSON(shids, shids_);
      DARABONBA_PTR_TO_JSON(sort_code, sortCode_);
    };
    friend void from_json(const Darabonba::Json& j, HotelAskingPriceRequest& obj) { 
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
      DARABONBA_PTR_FROM_JSON(shids, shids_);
      DARABONBA_PTR_FROM_JSON(sort_code, sortCode_);
    };
    HotelAskingPriceRequest() = default ;
    HotelAskingPriceRequest(const HotelAskingPriceRequest &) = default ;
    HotelAskingPriceRequest(HotelAskingPriceRequest &&) = default ;
    HotelAskingPriceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelAskingPriceRequest() = default ;
    HotelAskingPriceRequest& operator=(const HotelAskingPriceRequest &) = default ;
    HotelAskingPriceRequest& operator=(HotelAskingPriceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adultNum_ == nullptr
        && this->btripUserId_ == nullptr && this->checkInDate_ == nullptr && this->checkOutDate_ == nullptr && this->cityCode_ == nullptr && this->cityName_ == nullptr
        && this->dir_ == nullptr && this->hotelStar_ == nullptr && this->isProtocol_ == nullptr && this->paymentType_ == nullptr && this->shids_ == nullptr
        && this->sortCode_ == nullptr; };
    // adultNum Field Functions 
    bool hasAdultNum() const { return this->adultNum_ != nullptr;};
    void deleteAdultNum() { this->adultNum_ = nullptr;};
    inline string getAdultNum() const { DARABONBA_PTR_GET_DEFAULT(adultNum_, "") };
    inline HotelAskingPriceRequest& setAdultNum(string adultNum) { DARABONBA_PTR_SET_VALUE(adultNum_, adultNum) };


    // btripUserId Field Functions 
    bool hasBtripUserId() const { return this->btripUserId_ != nullptr;};
    void deleteBtripUserId() { this->btripUserId_ = nullptr;};
    inline string getBtripUserId() const { DARABONBA_PTR_GET_DEFAULT(btripUserId_, "") };
    inline HotelAskingPriceRequest& setBtripUserId(string btripUserId) { DARABONBA_PTR_SET_VALUE(btripUserId_, btripUserId) };


    // checkInDate Field Functions 
    bool hasCheckInDate() const { return this->checkInDate_ != nullptr;};
    void deleteCheckInDate() { this->checkInDate_ = nullptr;};
    inline string getCheckInDate() const { DARABONBA_PTR_GET_DEFAULT(checkInDate_, "") };
    inline HotelAskingPriceRequest& setCheckInDate(string checkInDate) { DARABONBA_PTR_SET_VALUE(checkInDate_, checkInDate) };


    // checkOutDate Field Functions 
    bool hasCheckOutDate() const { return this->checkOutDate_ != nullptr;};
    void deleteCheckOutDate() { this->checkOutDate_ = nullptr;};
    inline string getCheckOutDate() const { DARABONBA_PTR_GET_DEFAULT(checkOutDate_, "") };
    inline HotelAskingPriceRequest& setCheckOutDate(string checkOutDate) { DARABONBA_PTR_SET_VALUE(checkOutDate_, checkOutDate) };


    // cityCode Field Functions 
    bool hasCityCode() const { return this->cityCode_ != nullptr;};
    void deleteCityCode() { this->cityCode_ = nullptr;};
    inline string getCityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
    inline HotelAskingPriceRequest& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


    // cityName Field Functions 
    bool hasCityName() const { return this->cityName_ != nullptr;};
    void deleteCityName() { this->cityName_ = nullptr;};
    inline string getCityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
    inline HotelAskingPriceRequest& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


    // dir Field Functions 
    bool hasDir() const { return this->dir_ != nullptr;};
    void deleteDir() { this->dir_ = nullptr;};
    inline int32_t getDir() const { DARABONBA_PTR_GET_DEFAULT(dir_, 0) };
    inline HotelAskingPriceRequest& setDir(int32_t dir) { DARABONBA_PTR_SET_VALUE(dir_, dir) };


    // hotelStar Field Functions 
    bool hasHotelStar() const { return this->hotelStar_ != nullptr;};
    void deleteHotelStar() { this->hotelStar_ = nullptr;};
    inline string getHotelStar() const { DARABONBA_PTR_GET_DEFAULT(hotelStar_, "") };
    inline HotelAskingPriceRequest& setHotelStar(string hotelStar) { DARABONBA_PTR_SET_VALUE(hotelStar_, hotelStar) };


    // isProtocol Field Functions 
    bool hasIsProtocol() const { return this->isProtocol_ != nullptr;};
    void deleteIsProtocol() { this->isProtocol_ = nullptr;};
    inline bool getIsProtocol() const { DARABONBA_PTR_GET_DEFAULT(isProtocol_, false) };
    inline HotelAskingPriceRequest& setIsProtocol(bool isProtocol) { DARABONBA_PTR_SET_VALUE(isProtocol_, isProtocol) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline int32_t getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, 0) };
    inline HotelAskingPriceRequest& setPaymentType(int32_t paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // shids Field Functions 
    bool hasShids() const { return this->shids_ != nullptr;};
    void deleteShids() { this->shids_ = nullptr;};
    inline const vector<int64_t> & getShids() const { DARABONBA_PTR_GET_CONST(shids_, vector<int64_t>) };
    inline vector<int64_t> getShids() { DARABONBA_PTR_GET(shids_, vector<int64_t>) };
    inline HotelAskingPriceRequest& setShids(const vector<int64_t> & shids) { DARABONBA_PTR_SET_VALUE(shids_, shids) };
    inline HotelAskingPriceRequest& setShids(vector<int64_t> && shids) { DARABONBA_PTR_SET_RVALUE(shids_, shids) };


    // sortCode Field Functions 
    bool hasSortCode() const { return this->sortCode_ != nullptr;};
    void deleteSortCode() { this->sortCode_ = nullptr;};
    inline int32_t getSortCode() const { DARABONBA_PTR_GET_DEFAULT(sortCode_, 0) };
    inline HotelAskingPriceRequest& setSortCode(int32_t sortCode) { DARABONBA_PTR_SET_VALUE(sortCode_, sortCode) };


  protected:
    shared_ptr<string> adultNum_ {};
    shared_ptr<string> btripUserId_ {};
    // This parameter is required.
    shared_ptr<string> checkInDate_ {};
    // This parameter is required.
    shared_ptr<string> checkOutDate_ {};
    shared_ptr<string> cityCode_ {};
    shared_ptr<string> cityName_ {};
    shared_ptr<int32_t> dir_ {};
    shared_ptr<string> hotelStar_ {};
    shared_ptr<bool> isProtocol_ {};
    shared_ptr<int32_t> paymentType_ {};
    // This parameter is required.
    shared_ptr<vector<int64_t>> shids_ {};
    shared_ptr<int32_t> sortCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
