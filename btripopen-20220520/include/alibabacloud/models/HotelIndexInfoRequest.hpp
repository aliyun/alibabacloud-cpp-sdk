// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELINDEXINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_HOTELINDEXINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelIndexInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelIndexInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(city_code, cityCode_);
      DARABONBA_PTR_TO_JSON(hotel_status, hotelStatus_);
      DARABONBA_PTR_TO_JSON(page_size, pageSize_);
      DARABONBA_PTR_TO_JSON(page_token, pageToken_);
    };
    friend void from_json(const Darabonba::Json& j, HotelIndexInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(city_code, cityCode_);
      DARABONBA_PTR_FROM_JSON(hotel_status, hotelStatus_);
      DARABONBA_PTR_FROM_JSON(page_size, pageSize_);
      DARABONBA_PTR_FROM_JSON(page_token, pageToken_);
    };
    HotelIndexInfoRequest() = default ;
    HotelIndexInfoRequest(const HotelIndexInfoRequest &) = default ;
    HotelIndexInfoRequest(HotelIndexInfoRequest &&) = default ;
    HotelIndexInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelIndexInfoRequest() = default ;
    HotelIndexInfoRequest& operator=(const HotelIndexInfoRequest &) = default ;
    HotelIndexInfoRequest& operator=(HotelIndexInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cityCode_ != nullptr
        && this->hotelStatus_ != nullptr && this->pageSize_ != nullptr && this->pageToken_ != nullptr; };
    // cityCode Field Functions 
    bool hasCityCode() const { return this->cityCode_ != nullptr;};
    void deleteCityCode() { this->cityCode_ = nullptr;};
    inline string cityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
    inline HotelIndexInfoRequest& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


    // hotelStatus Field Functions 
    bool hasHotelStatus() const { return this->hotelStatus_ != nullptr;};
    void deleteHotelStatus() { this->hotelStatus_ = nullptr;};
    inline int32_t hotelStatus() const { DARABONBA_PTR_GET_DEFAULT(hotelStatus_, 0) };
    inline HotelIndexInfoRequest& setHotelStatus(int32_t hotelStatus) { DARABONBA_PTR_SET_VALUE(hotelStatus_, hotelStatus) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline HotelIndexInfoRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pageToken Field Functions 
    bool hasPageToken() const { return this->pageToken_ != nullptr;};
    void deletePageToken() { this->pageToken_ = nullptr;};
    inline string pageToken() const { DARABONBA_PTR_GET_DEFAULT(pageToken_, "") };
    inline HotelIndexInfoRequest& setPageToken(string pageToken) { DARABONBA_PTR_SET_VALUE(pageToken_, pageToken) };


  protected:
    std::shared_ptr<string> cityCode_ = nullptr;
    std::shared_ptr<int32_t> hotelStatus_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> pageToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
