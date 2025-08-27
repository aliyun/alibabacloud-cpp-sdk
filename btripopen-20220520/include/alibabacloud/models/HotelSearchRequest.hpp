// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELSEARCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_HOTELSEARCHREQUEST_HPP_
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
  class HotelSearchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelSearchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(adult_num, adultNum_);
      DARABONBA_PTR_TO_JSON(brand_code, brandCode_);
      DARABONBA_PTR_TO_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_TO_JSON(check_in_date, checkInDate_);
      DARABONBA_PTR_TO_JSON(check_out_date, checkOutDate_);
      DARABONBA_PTR_TO_JSON(city_code, cityCode_);
      DARABONBA_PTR_TO_JSON(dir, dir_);
      DARABONBA_PTR_TO_JSON(distance, distance_);
      DARABONBA_PTR_TO_JSON(district_code, districtCode_);
      DARABONBA_PTR_TO_JSON(hotel_star, hotelStar_);
      DARABONBA_PTR_TO_JSON(is_protocol, isProtocol_);
      DARABONBA_PTR_TO_JSON(key_words, keyWords_);
      DARABONBA_PTR_TO_JSON(location, location_);
      DARABONBA_PTR_TO_JSON(max_price, maxPrice_);
      DARABONBA_PTR_TO_JSON(min_price, minPrice_);
      DARABONBA_PTR_TO_JSON(page_no, pageNo_);
      DARABONBA_PTR_TO_JSON(page_size, pageSize_);
      DARABONBA_PTR_TO_JSON(pay_over_type, payOverType_);
      DARABONBA_PTR_TO_JSON(payment_type, paymentType_);
      DARABONBA_PTR_TO_JSON(shids, shids_);
      DARABONBA_PTR_TO_JSON(sort_code, sortCode_);
      DARABONBA_PTR_TO_JSON(super_man, superMan_);
    };
    friend void from_json(const Darabonba::Json& j, HotelSearchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(adult_num, adultNum_);
      DARABONBA_PTR_FROM_JSON(brand_code, brandCode_);
      DARABONBA_PTR_FROM_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_FROM_JSON(check_in_date, checkInDate_);
      DARABONBA_PTR_FROM_JSON(check_out_date, checkOutDate_);
      DARABONBA_PTR_FROM_JSON(city_code, cityCode_);
      DARABONBA_PTR_FROM_JSON(dir, dir_);
      DARABONBA_PTR_FROM_JSON(distance, distance_);
      DARABONBA_PTR_FROM_JSON(district_code, districtCode_);
      DARABONBA_PTR_FROM_JSON(hotel_star, hotelStar_);
      DARABONBA_PTR_FROM_JSON(is_protocol, isProtocol_);
      DARABONBA_PTR_FROM_JSON(key_words, keyWords_);
      DARABONBA_PTR_FROM_JSON(location, location_);
      DARABONBA_PTR_FROM_JSON(max_price, maxPrice_);
      DARABONBA_PTR_FROM_JSON(min_price, minPrice_);
      DARABONBA_PTR_FROM_JSON(page_no, pageNo_);
      DARABONBA_PTR_FROM_JSON(page_size, pageSize_);
      DARABONBA_PTR_FROM_JSON(pay_over_type, payOverType_);
      DARABONBA_PTR_FROM_JSON(payment_type, paymentType_);
      DARABONBA_PTR_FROM_JSON(shids, shids_);
      DARABONBA_PTR_FROM_JSON(sort_code, sortCode_);
      DARABONBA_PTR_FROM_JSON(super_man, superMan_);
    };
    HotelSearchRequest() = default ;
    HotelSearchRequest(const HotelSearchRequest &) = default ;
    HotelSearchRequest(HotelSearchRequest &&) = default ;
    HotelSearchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelSearchRequest() = default ;
    HotelSearchRequest& operator=(const HotelSearchRequest &) = default ;
    HotelSearchRequest& operator=(HotelSearchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->adultNum_ != nullptr
        && this->brandCode_ != nullptr && this->btripUserId_ != nullptr && this->checkInDate_ != nullptr && this->checkOutDate_ != nullptr && this->cityCode_ != nullptr
        && this->dir_ != nullptr && this->distance_ != nullptr && this->districtCode_ != nullptr && this->hotelStar_ != nullptr && this->isProtocol_ != nullptr
        && this->keyWords_ != nullptr && this->location_ != nullptr && this->maxPrice_ != nullptr && this->minPrice_ != nullptr && this->pageNo_ != nullptr
        && this->pageSize_ != nullptr && this->payOverType_ != nullptr && this->paymentType_ != nullptr && this->shids_ != nullptr && this->sortCode_ != nullptr
        && this->superMan_ != nullptr; };
    // adultNum Field Functions 
    bool hasAdultNum() const { return this->adultNum_ != nullptr;};
    void deleteAdultNum() { this->adultNum_ = nullptr;};
    inline string adultNum() const { DARABONBA_PTR_GET_DEFAULT(adultNum_, "") };
    inline HotelSearchRequest& setAdultNum(string adultNum) { DARABONBA_PTR_SET_VALUE(adultNum_, adultNum) };


    // brandCode Field Functions 
    bool hasBrandCode() const { return this->brandCode_ != nullptr;};
    void deleteBrandCode() { this->brandCode_ = nullptr;};
    inline const vector<string> & brandCode() const { DARABONBA_PTR_GET_CONST(brandCode_, vector<string>) };
    inline vector<string> brandCode() { DARABONBA_PTR_GET(brandCode_, vector<string>) };
    inline HotelSearchRequest& setBrandCode(const vector<string> & brandCode) { DARABONBA_PTR_SET_VALUE(brandCode_, brandCode) };
    inline HotelSearchRequest& setBrandCode(vector<string> && brandCode) { DARABONBA_PTR_SET_RVALUE(brandCode_, brandCode) };


    // btripUserId Field Functions 
    bool hasBtripUserId() const { return this->btripUserId_ != nullptr;};
    void deleteBtripUserId() { this->btripUserId_ = nullptr;};
    inline string btripUserId() const { DARABONBA_PTR_GET_DEFAULT(btripUserId_, "") };
    inline HotelSearchRequest& setBtripUserId(string btripUserId) { DARABONBA_PTR_SET_VALUE(btripUserId_, btripUserId) };


    // checkInDate Field Functions 
    bool hasCheckInDate() const { return this->checkInDate_ != nullptr;};
    void deleteCheckInDate() { this->checkInDate_ = nullptr;};
    inline string checkInDate() const { DARABONBA_PTR_GET_DEFAULT(checkInDate_, "") };
    inline HotelSearchRequest& setCheckInDate(string checkInDate) { DARABONBA_PTR_SET_VALUE(checkInDate_, checkInDate) };


    // checkOutDate Field Functions 
    bool hasCheckOutDate() const { return this->checkOutDate_ != nullptr;};
    void deleteCheckOutDate() { this->checkOutDate_ = nullptr;};
    inline string checkOutDate() const { DARABONBA_PTR_GET_DEFAULT(checkOutDate_, "") };
    inline HotelSearchRequest& setCheckOutDate(string checkOutDate) { DARABONBA_PTR_SET_VALUE(checkOutDate_, checkOutDate) };


    // cityCode Field Functions 
    bool hasCityCode() const { return this->cityCode_ != nullptr;};
    void deleteCityCode() { this->cityCode_ = nullptr;};
    inline string cityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
    inline HotelSearchRequest& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


    // dir Field Functions 
    bool hasDir() const { return this->dir_ != nullptr;};
    void deleteDir() { this->dir_ = nullptr;};
    inline int32_t dir() const { DARABONBA_PTR_GET_DEFAULT(dir_, 0) };
    inline HotelSearchRequest& setDir(int32_t dir) { DARABONBA_PTR_SET_VALUE(dir_, dir) };


    // distance Field Functions 
    bool hasDistance() const { return this->distance_ != nullptr;};
    void deleteDistance() { this->distance_ = nullptr;};
    inline int32_t distance() const { DARABONBA_PTR_GET_DEFAULT(distance_, 0) };
    inline HotelSearchRequest& setDistance(int32_t distance) { DARABONBA_PTR_SET_VALUE(distance_, distance) };


    // districtCode Field Functions 
    bool hasDistrictCode() const { return this->districtCode_ != nullptr;};
    void deleteDistrictCode() { this->districtCode_ = nullptr;};
    inline string districtCode() const { DARABONBA_PTR_GET_DEFAULT(districtCode_, "") };
    inline HotelSearchRequest& setDistrictCode(string districtCode) { DARABONBA_PTR_SET_VALUE(districtCode_, districtCode) };


    // hotelStar Field Functions 
    bool hasHotelStar() const { return this->hotelStar_ != nullptr;};
    void deleteHotelStar() { this->hotelStar_ = nullptr;};
    inline string hotelStar() const { DARABONBA_PTR_GET_DEFAULT(hotelStar_, "") };
    inline HotelSearchRequest& setHotelStar(string hotelStar) { DARABONBA_PTR_SET_VALUE(hotelStar_, hotelStar) };


    // isProtocol Field Functions 
    bool hasIsProtocol() const { return this->isProtocol_ != nullptr;};
    void deleteIsProtocol() { this->isProtocol_ = nullptr;};
    inline bool isProtocol() const { DARABONBA_PTR_GET_DEFAULT(isProtocol_, false) };
    inline HotelSearchRequest& setIsProtocol(bool isProtocol) { DARABONBA_PTR_SET_VALUE(isProtocol_, isProtocol) };


    // keyWords Field Functions 
    bool hasKeyWords() const { return this->keyWords_ != nullptr;};
    void deleteKeyWords() { this->keyWords_ = nullptr;};
    inline string keyWords() const { DARABONBA_PTR_GET_DEFAULT(keyWords_, "") };
    inline HotelSearchRequest& setKeyWords(string keyWords) { DARABONBA_PTR_SET_VALUE(keyWords_, keyWords) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline HotelSearchRequest& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // maxPrice Field Functions 
    bool hasMaxPrice() const { return this->maxPrice_ != nullptr;};
    void deleteMaxPrice() { this->maxPrice_ = nullptr;};
    inline double maxPrice() const { DARABONBA_PTR_GET_DEFAULT(maxPrice_, 0.0) };
    inline HotelSearchRequest& setMaxPrice(double maxPrice) { DARABONBA_PTR_SET_VALUE(maxPrice_, maxPrice) };


    // minPrice Field Functions 
    bool hasMinPrice() const { return this->minPrice_ != nullptr;};
    void deleteMinPrice() { this->minPrice_ = nullptr;};
    inline double minPrice() const { DARABONBA_PTR_GET_DEFAULT(minPrice_, 0.0) };
    inline HotelSearchRequest& setMinPrice(double minPrice) { DARABONBA_PTR_SET_VALUE(minPrice_, minPrice) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline HotelSearchRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline HotelSearchRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // payOverType Field Functions 
    bool hasPayOverType() const { return this->payOverType_ != nullptr;};
    void deletePayOverType() { this->payOverType_ = nullptr;};
    inline int32_t payOverType() const { DARABONBA_PTR_GET_DEFAULT(payOverType_, 0) };
    inline HotelSearchRequest& setPayOverType(int32_t payOverType) { DARABONBA_PTR_SET_VALUE(payOverType_, payOverType) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline int32_t paymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, 0) };
    inline HotelSearchRequest& setPaymentType(int32_t paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // shids Field Functions 
    bool hasShids() const { return this->shids_ != nullptr;};
    void deleteShids() { this->shids_ = nullptr;};
    inline const vector<int64_t> & shids() const { DARABONBA_PTR_GET_CONST(shids_, vector<int64_t>) };
    inline vector<int64_t> shids() { DARABONBA_PTR_GET(shids_, vector<int64_t>) };
    inline HotelSearchRequest& setShids(const vector<int64_t> & shids) { DARABONBA_PTR_SET_VALUE(shids_, shids) };
    inline HotelSearchRequest& setShids(vector<int64_t> && shids) { DARABONBA_PTR_SET_RVALUE(shids_, shids) };


    // sortCode Field Functions 
    bool hasSortCode() const { return this->sortCode_ != nullptr;};
    void deleteSortCode() { this->sortCode_ = nullptr;};
    inline int32_t sortCode() const { DARABONBA_PTR_GET_DEFAULT(sortCode_, 0) };
    inline HotelSearchRequest& setSortCode(int32_t sortCode) { DARABONBA_PTR_SET_VALUE(sortCode_, sortCode) };


    // superMan Field Functions 
    bool hasSuperMan() const { return this->superMan_ != nullptr;};
    void deleteSuperMan() { this->superMan_ = nullptr;};
    inline int32_t superMan() const { DARABONBA_PTR_GET_DEFAULT(superMan_, 0) };
    inline HotelSearchRequest& setSuperMan(int32_t superMan) { DARABONBA_PTR_SET_VALUE(superMan_, superMan) };


  protected:
    std::shared_ptr<string> adultNum_ = nullptr;
    std::shared_ptr<vector<string>> brandCode_ = nullptr;
    std::shared_ptr<string> btripUserId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> checkInDate_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> checkOutDate_ = nullptr;
    std::shared_ptr<string> cityCode_ = nullptr;
    std::shared_ptr<int32_t> dir_ = nullptr;
    std::shared_ptr<int32_t> distance_ = nullptr;
    std::shared_ptr<string> districtCode_ = nullptr;
    std::shared_ptr<string> hotelStar_ = nullptr;
    std::shared_ptr<bool> isProtocol_ = nullptr;
    std::shared_ptr<string> keyWords_ = nullptr;
    std::shared_ptr<string> location_ = nullptr;
    std::shared_ptr<double> maxPrice_ = nullptr;
    std::shared_ptr<double> minPrice_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<int32_t> payOverType_ = nullptr;
    std::shared_ptr<int32_t> paymentType_ = nullptr;
    std::shared_ptr<vector<int64_t>> shids_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> sortCode_ = nullptr;
    std::shared_ptr<int32_t> superMan_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
