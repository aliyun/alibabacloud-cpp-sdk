// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELSEARCHRESPONSEBODYMODULEITEMS_HPP_
#define ALIBABACLOUD_MODELS_HOTELSEARCHRESPONSEBODYMODULEITEMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/HotelSearchResponseBodyModuleItemsDiscountDesc.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelSearchResponseBodyModuleItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelSearchResponseBodyModuleItems& obj) { 
      DARABONBA_PTR_TO_JSON(brand_name, brandName_);
      DARABONBA_PTR_TO_JSON(btand_code, btandCode_);
      DARABONBA_PTR_TO_JSON(city_code, cityCode_);
      DARABONBA_PTR_TO_JSON(discount_desc, discountDesc_);
      DARABONBA_PTR_TO_JSON(distance, distance_);
      DARABONBA_PTR_TO_JSON(district_code, districtCode_);
      DARABONBA_PTR_TO_JSON(hotel_address, hotelAddress_);
      DARABONBA_PTR_TO_JSON(hotel_code, hotelCode_);
      DARABONBA_PTR_TO_JSON(hotel_en_name, hotelEnName_);
      DARABONBA_PTR_TO_JSON(hotel_name, hotelName_);
      DARABONBA_PTR_TO_JSON(hotel_star, hotelStar_);
      DARABONBA_PTR_TO_JSON(image_url, imageUrl_);
      DARABONBA_PTR_TO_JSON(is_protocol, isProtocol_);
      DARABONBA_PTR_TO_JSON(location, location_);
      DARABONBA_PTR_TO_JSON(min_price, minPrice_);
      DARABONBA_PTR_TO_JSON(original_min_price, originalMinPrice_);
      DARABONBA_PTR_TO_JSON(score, score_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(tel, tel_);
    };
    friend void from_json(const Darabonba::Json& j, HotelSearchResponseBodyModuleItems& obj) { 
      DARABONBA_PTR_FROM_JSON(brand_name, brandName_);
      DARABONBA_PTR_FROM_JSON(btand_code, btandCode_);
      DARABONBA_PTR_FROM_JSON(city_code, cityCode_);
      DARABONBA_PTR_FROM_JSON(discount_desc, discountDesc_);
      DARABONBA_PTR_FROM_JSON(distance, distance_);
      DARABONBA_PTR_FROM_JSON(district_code, districtCode_);
      DARABONBA_PTR_FROM_JSON(hotel_address, hotelAddress_);
      DARABONBA_PTR_FROM_JSON(hotel_code, hotelCode_);
      DARABONBA_PTR_FROM_JSON(hotel_en_name, hotelEnName_);
      DARABONBA_PTR_FROM_JSON(hotel_name, hotelName_);
      DARABONBA_PTR_FROM_JSON(hotel_star, hotelStar_);
      DARABONBA_PTR_FROM_JSON(image_url, imageUrl_);
      DARABONBA_PTR_FROM_JSON(is_protocol, isProtocol_);
      DARABONBA_PTR_FROM_JSON(location, location_);
      DARABONBA_PTR_FROM_JSON(min_price, minPrice_);
      DARABONBA_PTR_FROM_JSON(original_min_price, originalMinPrice_);
      DARABONBA_PTR_FROM_JSON(score, score_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(tel, tel_);
    };
    HotelSearchResponseBodyModuleItems() = default ;
    HotelSearchResponseBodyModuleItems(const HotelSearchResponseBodyModuleItems &) = default ;
    HotelSearchResponseBodyModuleItems(HotelSearchResponseBodyModuleItems &&) = default ;
    HotelSearchResponseBodyModuleItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelSearchResponseBodyModuleItems() = default ;
    HotelSearchResponseBodyModuleItems& operator=(const HotelSearchResponseBodyModuleItems &) = default ;
    HotelSearchResponseBodyModuleItems& operator=(HotelSearchResponseBodyModuleItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->brandName_ != nullptr
        && this->btandCode_ != nullptr && this->cityCode_ != nullptr && this->discountDesc_ != nullptr && this->distance_ != nullptr && this->districtCode_ != nullptr
        && this->hotelAddress_ != nullptr && this->hotelCode_ != nullptr && this->hotelEnName_ != nullptr && this->hotelName_ != nullptr && this->hotelStar_ != nullptr
        && this->imageUrl_ != nullptr && this->isProtocol_ != nullptr && this->location_ != nullptr && this->minPrice_ != nullptr && this->originalMinPrice_ != nullptr
        && this->score_ != nullptr && this->status_ != nullptr && this->tel_ != nullptr; };
    // brandName Field Functions 
    bool hasBrandName() const { return this->brandName_ != nullptr;};
    void deleteBrandName() { this->brandName_ = nullptr;};
    inline string brandName() const { DARABONBA_PTR_GET_DEFAULT(brandName_, "") };
    inline HotelSearchResponseBodyModuleItems& setBrandName(string brandName) { DARABONBA_PTR_SET_VALUE(brandName_, brandName) };


    // btandCode Field Functions 
    bool hasBtandCode() const { return this->btandCode_ != nullptr;};
    void deleteBtandCode() { this->btandCode_ = nullptr;};
    inline string btandCode() const { DARABONBA_PTR_GET_DEFAULT(btandCode_, "") };
    inline HotelSearchResponseBodyModuleItems& setBtandCode(string btandCode) { DARABONBA_PTR_SET_VALUE(btandCode_, btandCode) };


    // cityCode Field Functions 
    bool hasCityCode() const { return this->cityCode_ != nullptr;};
    void deleteCityCode() { this->cityCode_ = nullptr;};
    inline string cityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
    inline HotelSearchResponseBodyModuleItems& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


    // discountDesc Field Functions 
    bool hasDiscountDesc() const { return this->discountDesc_ != nullptr;};
    void deleteDiscountDesc() { this->discountDesc_ = nullptr;};
    inline const Models::HotelSearchResponseBodyModuleItemsDiscountDesc & discountDesc() const { DARABONBA_PTR_GET_CONST(discountDesc_, Models::HotelSearchResponseBodyModuleItemsDiscountDesc) };
    inline Models::HotelSearchResponseBodyModuleItemsDiscountDesc discountDesc() { DARABONBA_PTR_GET(discountDesc_, Models::HotelSearchResponseBodyModuleItemsDiscountDesc) };
    inline HotelSearchResponseBodyModuleItems& setDiscountDesc(const Models::HotelSearchResponseBodyModuleItemsDiscountDesc & discountDesc) { DARABONBA_PTR_SET_VALUE(discountDesc_, discountDesc) };
    inline HotelSearchResponseBodyModuleItems& setDiscountDesc(Models::HotelSearchResponseBodyModuleItemsDiscountDesc && discountDesc) { DARABONBA_PTR_SET_RVALUE(discountDesc_, discountDesc) };


    // distance Field Functions 
    bool hasDistance() const { return this->distance_ != nullptr;};
    void deleteDistance() { this->distance_ = nullptr;};
    inline int32_t distance() const { DARABONBA_PTR_GET_DEFAULT(distance_, 0) };
    inline HotelSearchResponseBodyModuleItems& setDistance(int32_t distance) { DARABONBA_PTR_SET_VALUE(distance_, distance) };


    // districtCode Field Functions 
    bool hasDistrictCode() const { return this->districtCode_ != nullptr;};
    void deleteDistrictCode() { this->districtCode_ = nullptr;};
    inline string districtCode() const { DARABONBA_PTR_GET_DEFAULT(districtCode_, "") };
    inline HotelSearchResponseBodyModuleItems& setDistrictCode(string districtCode) { DARABONBA_PTR_SET_VALUE(districtCode_, districtCode) };


    // hotelAddress Field Functions 
    bool hasHotelAddress() const { return this->hotelAddress_ != nullptr;};
    void deleteHotelAddress() { this->hotelAddress_ = nullptr;};
    inline string hotelAddress() const { DARABONBA_PTR_GET_DEFAULT(hotelAddress_, "") };
    inline HotelSearchResponseBodyModuleItems& setHotelAddress(string hotelAddress) { DARABONBA_PTR_SET_VALUE(hotelAddress_, hotelAddress) };


    // hotelCode Field Functions 
    bool hasHotelCode() const { return this->hotelCode_ != nullptr;};
    void deleteHotelCode() { this->hotelCode_ = nullptr;};
    inline string hotelCode() const { DARABONBA_PTR_GET_DEFAULT(hotelCode_, "") };
    inline HotelSearchResponseBodyModuleItems& setHotelCode(string hotelCode) { DARABONBA_PTR_SET_VALUE(hotelCode_, hotelCode) };


    // hotelEnName Field Functions 
    bool hasHotelEnName() const { return this->hotelEnName_ != nullptr;};
    void deleteHotelEnName() { this->hotelEnName_ = nullptr;};
    inline string hotelEnName() const { DARABONBA_PTR_GET_DEFAULT(hotelEnName_, "") };
    inline HotelSearchResponseBodyModuleItems& setHotelEnName(string hotelEnName) { DARABONBA_PTR_SET_VALUE(hotelEnName_, hotelEnName) };


    // hotelName Field Functions 
    bool hasHotelName() const { return this->hotelName_ != nullptr;};
    void deleteHotelName() { this->hotelName_ = nullptr;};
    inline string hotelName() const { DARABONBA_PTR_GET_DEFAULT(hotelName_, "") };
    inline HotelSearchResponseBodyModuleItems& setHotelName(string hotelName) { DARABONBA_PTR_SET_VALUE(hotelName_, hotelName) };


    // hotelStar Field Functions 
    bool hasHotelStar() const { return this->hotelStar_ != nullptr;};
    void deleteHotelStar() { this->hotelStar_ = nullptr;};
    inline string hotelStar() const { DARABONBA_PTR_GET_DEFAULT(hotelStar_, "") };
    inline HotelSearchResponseBodyModuleItems& setHotelStar(string hotelStar) { DARABONBA_PTR_SET_VALUE(hotelStar_, hotelStar) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string imageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline HotelSearchResponseBodyModuleItems& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // isProtocol Field Functions 
    bool hasIsProtocol() const { return this->isProtocol_ != nullptr;};
    void deleteIsProtocol() { this->isProtocol_ = nullptr;};
    inline bool isProtocol() const { DARABONBA_PTR_GET_DEFAULT(isProtocol_, false) };
    inline HotelSearchResponseBodyModuleItems& setIsProtocol(bool isProtocol) { DARABONBA_PTR_SET_VALUE(isProtocol_, isProtocol) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline HotelSearchResponseBodyModuleItems& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // minPrice Field Functions 
    bool hasMinPrice() const { return this->minPrice_ != nullptr;};
    void deleteMinPrice() { this->minPrice_ = nullptr;};
    inline double minPrice() const { DARABONBA_PTR_GET_DEFAULT(minPrice_, 0.0) };
    inline HotelSearchResponseBodyModuleItems& setMinPrice(double minPrice) { DARABONBA_PTR_SET_VALUE(minPrice_, minPrice) };


    // originalMinPrice Field Functions 
    bool hasOriginalMinPrice() const { return this->originalMinPrice_ != nullptr;};
    void deleteOriginalMinPrice() { this->originalMinPrice_ = nullptr;};
    inline double originalMinPrice() const { DARABONBA_PTR_GET_DEFAULT(originalMinPrice_, 0.0) };
    inline HotelSearchResponseBodyModuleItems& setOriginalMinPrice(double originalMinPrice) { DARABONBA_PTR_SET_VALUE(originalMinPrice_, originalMinPrice) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline string score() const { DARABONBA_PTR_GET_DEFAULT(score_, "") };
    inline HotelSearchResponseBodyModuleItems& setScore(string score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline HotelSearchResponseBodyModuleItems& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tel Field Functions 
    bool hasTel() const { return this->tel_ != nullptr;};
    void deleteTel() { this->tel_ = nullptr;};
    inline string tel() const { DARABONBA_PTR_GET_DEFAULT(tel_, "") };
    inline HotelSearchResponseBodyModuleItems& setTel(string tel) { DARABONBA_PTR_SET_VALUE(tel_, tel) };


  protected:
    std::shared_ptr<string> brandName_ = nullptr;
    std::shared_ptr<string> btandCode_ = nullptr;
    std::shared_ptr<string> cityCode_ = nullptr;
    std::shared_ptr<Models::HotelSearchResponseBodyModuleItemsDiscountDesc> discountDesc_ = nullptr;
    std::shared_ptr<int32_t> distance_ = nullptr;
    std::shared_ptr<string> districtCode_ = nullptr;
    std::shared_ptr<string> hotelAddress_ = nullptr;
    std::shared_ptr<string> hotelCode_ = nullptr;
    std::shared_ptr<string> hotelEnName_ = nullptr;
    std::shared_ptr<string> hotelName_ = nullptr;
    std::shared_ptr<string> hotelStar_ = nullptr;
    std::shared_ptr<string> imageUrl_ = nullptr;
    std::shared_ptr<bool> isProtocol_ = nullptr;
    std::shared_ptr<string> location_ = nullptr;
    std::shared_ptr<double> minPrice_ = nullptr;
    std::shared_ptr<double> originalMinPrice_ = nullptr;
    std::shared_ptr<string> score_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> tel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
