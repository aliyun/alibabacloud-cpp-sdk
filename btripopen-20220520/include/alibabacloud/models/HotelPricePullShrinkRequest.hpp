// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELPRICEPULLSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_HOTELPRICEPULLSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelPricePullShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelPricePullShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_TO_JSON(check_in, checkIn_);
      DARABONBA_PTR_TO_JSON(check_out, checkOut_);
      DARABONBA_PTR_TO_JSON(city_code, cityCode_);
      DARABONBA_PTR_TO_JSON(hotel_ids, hotelIdsShrink_);
      DARABONBA_PTR_TO_JSON(payment_type, paymentType_);
    };
    friend void from_json(const Darabonba::Json& j, HotelPricePullShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_FROM_JSON(check_in, checkIn_);
      DARABONBA_PTR_FROM_JSON(check_out, checkOut_);
      DARABONBA_PTR_FROM_JSON(city_code, cityCode_);
      DARABONBA_PTR_FROM_JSON(hotel_ids, hotelIdsShrink_);
      DARABONBA_PTR_FROM_JSON(payment_type, paymentType_);
    };
    HotelPricePullShrinkRequest() = default ;
    HotelPricePullShrinkRequest(const HotelPricePullShrinkRequest &) = default ;
    HotelPricePullShrinkRequest(HotelPricePullShrinkRequest &&) = default ;
    HotelPricePullShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelPricePullShrinkRequest() = default ;
    HotelPricePullShrinkRequest& operator=(const HotelPricePullShrinkRequest &) = default ;
    HotelPricePullShrinkRequest& operator=(HotelPricePullShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->btripUserId_ != nullptr
        && this->checkIn_ != nullptr && this->checkOut_ != nullptr && this->cityCode_ != nullptr && this->hotelIdsShrink_ != nullptr && this->paymentType_ != nullptr; };
    // btripUserId Field Functions 
    bool hasBtripUserId() const { return this->btripUserId_ != nullptr;};
    void deleteBtripUserId() { this->btripUserId_ = nullptr;};
    inline string btripUserId() const { DARABONBA_PTR_GET_DEFAULT(btripUserId_, "") };
    inline HotelPricePullShrinkRequest& setBtripUserId(string btripUserId) { DARABONBA_PTR_SET_VALUE(btripUserId_, btripUserId) };


    // checkIn Field Functions 
    bool hasCheckIn() const { return this->checkIn_ != nullptr;};
    void deleteCheckIn() { this->checkIn_ = nullptr;};
    inline string checkIn() const { DARABONBA_PTR_GET_DEFAULT(checkIn_, "") };
    inline HotelPricePullShrinkRequest& setCheckIn(string checkIn) { DARABONBA_PTR_SET_VALUE(checkIn_, checkIn) };


    // checkOut Field Functions 
    bool hasCheckOut() const { return this->checkOut_ != nullptr;};
    void deleteCheckOut() { this->checkOut_ = nullptr;};
    inline string checkOut() const { DARABONBA_PTR_GET_DEFAULT(checkOut_, "") };
    inline HotelPricePullShrinkRequest& setCheckOut(string checkOut) { DARABONBA_PTR_SET_VALUE(checkOut_, checkOut) };


    // cityCode Field Functions 
    bool hasCityCode() const { return this->cityCode_ != nullptr;};
    void deleteCityCode() { this->cityCode_ = nullptr;};
    inline int32_t cityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, 0) };
    inline HotelPricePullShrinkRequest& setCityCode(int32_t cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


    // hotelIdsShrink Field Functions 
    bool hasHotelIdsShrink() const { return this->hotelIdsShrink_ != nullptr;};
    void deleteHotelIdsShrink() { this->hotelIdsShrink_ = nullptr;};
    inline string hotelIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(hotelIdsShrink_, "") };
    inline HotelPricePullShrinkRequest& setHotelIdsShrink(string hotelIdsShrink) { DARABONBA_PTR_SET_VALUE(hotelIdsShrink_, hotelIdsShrink) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline int32_t paymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, 0) };
    inline HotelPricePullShrinkRequest& setPaymentType(int32_t paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


  protected:
    std::shared_ptr<string> btripUserId_ = nullptr;
    std::shared_ptr<string> checkIn_ = nullptr;
    std::shared_ptr<string> checkOut_ = nullptr;
    std::shared_ptr<int32_t> cityCode_ = nullptr;
    std::shared_ptr<string> hotelIdsShrink_ = nullptr;
    std::shared_ptr<int32_t> paymentType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
