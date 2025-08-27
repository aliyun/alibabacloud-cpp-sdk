// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELEXCEEDAPPLYQUERYRESPONSEBODYMODULEAPPLYINTENTIONINFODO_HPP_
#define ALIBABACLOUD_MODELS_HOTELEXCEEDAPPLYQUERYRESPONSEBODYMODULEAPPLYINTENTIONINFODO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo& obj) { 
      DARABONBA_PTR_TO_JSON(check_in, checkIn_);
      DARABONBA_PTR_TO_JSON(check_out, checkOut_);
      DARABONBA_PTR_TO_JSON(city_code, cityCode_);
      DARABONBA_PTR_TO_JSON(city_name, cityName_);
      DARABONBA_PTR_TO_JSON(price, price_);
      DARABONBA_PTR_TO_JSON(together, together_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, HotelExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo& obj) { 
      DARABONBA_PTR_FROM_JSON(check_in, checkIn_);
      DARABONBA_PTR_FROM_JSON(check_out, checkOut_);
      DARABONBA_PTR_FROM_JSON(city_code, cityCode_);
      DARABONBA_PTR_FROM_JSON(city_name, cityName_);
      DARABONBA_PTR_FROM_JSON(price, price_);
      DARABONBA_PTR_FROM_JSON(together, together_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    HotelExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo() = default ;
    HotelExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo(const HotelExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo &) = default ;
    HotelExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo(HotelExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo &&) = default ;
    HotelExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo() = default ;
    HotelExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo& operator=(const HotelExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo &) = default ;
    HotelExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo& operator=(HotelExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkIn_ != nullptr
        && this->checkOut_ != nullptr && this->cityCode_ != nullptr && this->cityName_ != nullptr && this->price_ != nullptr && this->together_ != nullptr
        && this->type_ != nullptr; };
    // checkIn Field Functions 
    bool hasCheckIn() const { return this->checkIn_ != nullptr;};
    void deleteCheckIn() { this->checkIn_ = nullptr;};
    inline string checkIn() const { DARABONBA_PTR_GET_DEFAULT(checkIn_, "") };
    inline HotelExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo& setCheckIn(string checkIn) { DARABONBA_PTR_SET_VALUE(checkIn_, checkIn) };


    // checkOut Field Functions 
    bool hasCheckOut() const { return this->checkOut_ != nullptr;};
    void deleteCheckOut() { this->checkOut_ = nullptr;};
    inline string checkOut() const { DARABONBA_PTR_GET_DEFAULT(checkOut_, "") };
    inline HotelExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo& setCheckOut(string checkOut) { DARABONBA_PTR_SET_VALUE(checkOut_, checkOut) };


    // cityCode Field Functions 
    bool hasCityCode() const { return this->cityCode_ != nullptr;};
    void deleteCityCode() { this->cityCode_ = nullptr;};
    inline string cityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
    inline HotelExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


    // cityName Field Functions 
    bool hasCityName() const { return this->cityName_ != nullptr;};
    void deleteCityName() { this->cityName_ = nullptr;};
    inline string cityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
    inline HotelExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline int64_t price() const { DARABONBA_PTR_GET_DEFAULT(price_, 0L) };
    inline HotelExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo& setPrice(int64_t price) { DARABONBA_PTR_SET_VALUE(price_, price) };


    // together Field Functions 
    bool hasTogether() const { return this->together_ != nullptr;};
    void deleteTogether() { this->together_ = nullptr;};
    inline bool together() const { DARABONBA_PTR_GET_DEFAULT(together_, false) };
    inline HotelExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo& setTogether(bool together) { DARABONBA_PTR_SET_VALUE(together_, together) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline HotelExceedApplyQueryResponseBodyModuleApplyIntentionInfoDo& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> checkIn_ = nullptr;
    std::shared_ptr<string> checkOut_ = nullptr;
    std::shared_ptr<string> cityCode_ = nullptr;
    std::shared_ptr<string> cityName_ = nullptr;
    std::shared_ptr<int64_t> price_ = nullptr;
    std::shared_ptr<bool> together_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
