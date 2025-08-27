// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELPRICEPULLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_HOTELPRICEPULLREQUEST_HPP_
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
  class HotelPricePullRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelPricePullRequest& obj) { 
      DARABONBA_PTR_TO_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_TO_JSON(check_in, checkIn_);
      DARABONBA_PTR_TO_JSON(check_out, checkOut_);
      DARABONBA_PTR_TO_JSON(city_code, cityCode_);
      DARABONBA_PTR_TO_JSON(hotel_ids, hotelIds_);
      DARABONBA_PTR_TO_JSON(payment_type, paymentType_);
    };
    friend void from_json(const Darabonba::Json& j, HotelPricePullRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_FROM_JSON(check_in, checkIn_);
      DARABONBA_PTR_FROM_JSON(check_out, checkOut_);
      DARABONBA_PTR_FROM_JSON(city_code, cityCode_);
      DARABONBA_PTR_FROM_JSON(hotel_ids, hotelIds_);
      DARABONBA_PTR_FROM_JSON(payment_type, paymentType_);
    };
    HotelPricePullRequest() = default ;
    HotelPricePullRequest(const HotelPricePullRequest &) = default ;
    HotelPricePullRequest(HotelPricePullRequest &&) = default ;
    HotelPricePullRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelPricePullRequest() = default ;
    HotelPricePullRequest& operator=(const HotelPricePullRequest &) = default ;
    HotelPricePullRequest& operator=(HotelPricePullRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->btripUserId_ != nullptr
        && this->checkIn_ != nullptr && this->checkOut_ != nullptr && this->cityCode_ != nullptr && this->hotelIds_ != nullptr && this->paymentType_ != nullptr; };
    // btripUserId Field Functions 
    bool hasBtripUserId() const { return this->btripUserId_ != nullptr;};
    void deleteBtripUserId() { this->btripUserId_ = nullptr;};
    inline string btripUserId() const { DARABONBA_PTR_GET_DEFAULT(btripUserId_, "") };
    inline HotelPricePullRequest& setBtripUserId(string btripUserId) { DARABONBA_PTR_SET_VALUE(btripUserId_, btripUserId) };


    // checkIn Field Functions 
    bool hasCheckIn() const { return this->checkIn_ != nullptr;};
    void deleteCheckIn() { this->checkIn_ = nullptr;};
    inline string checkIn() const { DARABONBA_PTR_GET_DEFAULT(checkIn_, "") };
    inline HotelPricePullRequest& setCheckIn(string checkIn) { DARABONBA_PTR_SET_VALUE(checkIn_, checkIn) };


    // checkOut Field Functions 
    bool hasCheckOut() const { return this->checkOut_ != nullptr;};
    void deleteCheckOut() { this->checkOut_ = nullptr;};
    inline string checkOut() const { DARABONBA_PTR_GET_DEFAULT(checkOut_, "") };
    inline HotelPricePullRequest& setCheckOut(string checkOut) { DARABONBA_PTR_SET_VALUE(checkOut_, checkOut) };


    // cityCode Field Functions 
    bool hasCityCode() const { return this->cityCode_ != nullptr;};
    void deleteCityCode() { this->cityCode_ = nullptr;};
    inline int32_t cityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, 0) };
    inline HotelPricePullRequest& setCityCode(int32_t cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


    // hotelIds Field Functions 
    bool hasHotelIds() const { return this->hotelIds_ != nullptr;};
    void deleteHotelIds() { this->hotelIds_ = nullptr;};
    inline const vector<string> & hotelIds() const { DARABONBA_PTR_GET_CONST(hotelIds_, vector<string>) };
    inline vector<string> hotelIds() { DARABONBA_PTR_GET(hotelIds_, vector<string>) };
    inline HotelPricePullRequest& setHotelIds(const vector<string> & hotelIds) { DARABONBA_PTR_SET_VALUE(hotelIds_, hotelIds) };
    inline HotelPricePullRequest& setHotelIds(vector<string> && hotelIds) { DARABONBA_PTR_SET_RVALUE(hotelIds_, hotelIds) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline int32_t paymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, 0) };
    inline HotelPricePullRequest& setPaymentType(int32_t paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


  protected:
    std::shared_ptr<string> btripUserId_ = nullptr;
    std::shared_ptr<string> checkIn_ = nullptr;
    std::shared_ptr<string> checkOut_ = nullptr;
    std::shared_ptr<int32_t> cityCode_ = nullptr;
    std::shared_ptr<vector<string>> hotelIds_ = nullptr;
    std::shared_ptr<int32_t> paymentType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
