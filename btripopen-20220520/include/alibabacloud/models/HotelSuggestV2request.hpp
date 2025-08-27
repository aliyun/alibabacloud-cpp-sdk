// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELSUGGESTV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_HOTELSUGGESTV2REQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelSuggestV2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelSuggestV2Request& obj) { 
      DARABONBA_PTR_TO_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_TO_JSON(check_in, checkIn_);
      DARABONBA_PTR_TO_JSON(check_out, checkOut_);
      DARABONBA_PTR_TO_JSON(city_code, cityCode_);
      DARABONBA_PTR_TO_JSON(keyword, keyword_);
      DARABONBA_PTR_TO_JSON(search_type, searchType_);
    };
    friend void from_json(const Darabonba::Json& j, HotelSuggestV2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_FROM_JSON(check_in, checkIn_);
      DARABONBA_PTR_FROM_JSON(check_out, checkOut_);
      DARABONBA_PTR_FROM_JSON(city_code, cityCode_);
      DARABONBA_PTR_FROM_JSON(keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(search_type, searchType_);
    };
    HotelSuggestV2Request() = default ;
    HotelSuggestV2Request(const HotelSuggestV2Request &) = default ;
    HotelSuggestV2Request(HotelSuggestV2Request &&) = default ;
    HotelSuggestV2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelSuggestV2Request() = default ;
    HotelSuggestV2Request& operator=(const HotelSuggestV2Request &) = default ;
    HotelSuggestV2Request& operator=(HotelSuggestV2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->btripUserId_ != nullptr
        && this->checkIn_ != nullptr && this->checkOut_ != nullptr && this->cityCode_ != nullptr && this->keyword_ != nullptr && this->searchType_ != nullptr; };
    // btripUserId Field Functions 
    bool hasBtripUserId() const { return this->btripUserId_ != nullptr;};
    void deleteBtripUserId() { this->btripUserId_ = nullptr;};
    inline string btripUserId() const { DARABONBA_PTR_GET_DEFAULT(btripUserId_, "") };
    inline HotelSuggestV2Request& setBtripUserId(string btripUserId) { DARABONBA_PTR_SET_VALUE(btripUserId_, btripUserId) };


    // checkIn Field Functions 
    bool hasCheckIn() const { return this->checkIn_ != nullptr;};
    void deleteCheckIn() { this->checkIn_ = nullptr;};
    inline string checkIn() const { DARABONBA_PTR_GET_DEFAULT(checkIn_, "") };
    inline HotelSuggestV2Request& setCheckIn(string checkIn) { DARABONBA_PTR_SET_VALUE(checkIn_, checkIn) };


    // checkOut Field Functions 
    bool hasCheckOut() const { return this->checkOut_ != nullptr;};
    void deleteCheckOut() { this->checkOut_ = nullptr;};
    inline string checkOut() const { DARABONBA_PTR_GET_DEFAULT(checkOut_, "") };
    inline HotelSuggestV2Request& setCheckOut(string checkOut) { DARABONBA_PTR_SET_VALUE(checkOut_, checkOut) };


    // cityCode Field Functions 
    bool hasCityCode() const { return this->cityCode_ != nullptr;};
    void deleteCityCode() { this->cityCode_ = nullptr;};
    inline string cityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
    inline HotelSuggestV2Request& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline HotelSuggestV2Request& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // searchType Field Functions 
    bool hasSearchType() const { return this->searchType_ != nullptr;};
    void deleteSearchType() { this->searchType_ = nullptr;};
    inline int32_t searchType() const { DARABONBA_PTR_GET_DEFAULT(searchType_, 0) };
    inline HotelSuggestV2Request& setSearchType(int32_t searchType) { DARABONBA_PTR_SET_VALUE(searchType_, searchType) };


  protected:
    std::shared_ptr<string> btripUserId_ = nullptr;
    std::shared_ptr<string> checkIn_ = nullptr;
    std::shared_ptr<string> checkOut_ = nullptr;
    std::shared_ptr<string> cityCode_ = nullptr;
    std::shared_ptr<string> keyword_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> searchType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
