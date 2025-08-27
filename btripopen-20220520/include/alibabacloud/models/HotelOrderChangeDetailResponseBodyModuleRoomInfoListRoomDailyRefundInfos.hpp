// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELORDERCHANGEDETAILRESPONSEBODYMODULEROOMINFOLISTROOMDAILYREFUNDINFOS_HPP_
#define ALIBABACLOUD_MODELS_HOTELORDERCHANGEDETAILRESPONSEBODYMODULEROOMINFOLISTROOMDAILYREFUNDINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelOrderChangeDetailResponseBodyModuleRoomInfoListRoomDailyRefundInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelOrderChangeDetailResponseBodyModuleRoomInfoListRoomDailyRefundInfos& obj) { 
      DARABONBA_PTR_TO_JSON(check_in_date, checkInDate_);
      DARABONBA_PTR_TO_JSON(penalty_price, penaltyPrice_);
      DARABONBA_PTR_TO_JSON(price, price_);
      DARABONBA_PTR_TO_JSON(refund_price, refundPrice_);
    };
    friend void from_json(const Darabonba::Json& j, HotelOrderChangeDetailResponseBodyModuleRoomInfoListRoomDailyRefundInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(check_in_date, checkInDate_);
      DARABONBA_PTR_FROM_JSON(penalty_price, penaltyPrice_);
      DARABONBA_PTR_FROM_JSON(price, price_);
      DARABONBA_PTR_FROM_JSON(refund_price, refundPrice_);
    };
    HotelOrderChangeDetailResponseBodyModuleRoomInfoListRoomDailyRefundInfos() = default ;
    HotelOrderChangeDetailResponseBodyModuleRoomInfoListRoomDailyRefundInfos(const HotelOrderChangeDetailResponseBodyModuleRoomInfoListRoomDailyRefundInfos &) = default ;
    HotelOrderChangeDetailResponseBodyModuleRoomInfoListRoomDailyRefundInfos(HotelOrderChangeDetailResponseBodyModuleRoomInfoListRoomDailyRefundInfos &&) = default ;
    HotelOrderChangeDetailResponseBodyModuleRoomInfoListRoomDailyRefundInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelOrderChangeDetailResponseBodyModuleRoomInfoListRoomDailyRefundInfos() = default ;
    HotelOrderChangeDetailResponseBodyModuleRoomInfoListRoomDailyRefundInfos& operator=(const HotelOrderChangeDetailResponseBodyModuleRoomInfoListRoomDailyRefundInfos &) = default ;
    HotelOrderChangeDetailResponseBodyModuleRoomInfoListRoomDailyRefundInfos& operator=(HotelOrderChangeDetailResponseBodyModuleRoomInfoListRoomDailyRefundInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkInDate_ != nullptr
        && this->penaltyPrice_ != nullptr && this->price_ != nullptr && this->refundPrice_ != nullptr; };
    // checkInDate Field Functions 
    bool hasCheckInDate() const { return this->checkInDate_ != nullptr;};
    void deleteCheckInDate() { this->checkInDate_ = nullptr;};
    inline string checkInDate() const { DARABONBA_PTR_GET_DEFAULT(checkInDate_, "") };
    inline HotelOrderChangeDetailResponseBodyModuleRoomInfoListRoomDailyRefundInfos& setCheckInDate(string checkInDate) { DARABONBA_PTR_SET_VALUE(checkInDate_, checkInDate) };


    // penaltyPrice Field Functions 
    bool hasPenaltyPrice() const { return this->penaltyPrice_ != nullptr;};
    void deletePenaltyPrice() { this->penaltyPrice_ = nullptr;};
    inline int64_t penaltyPrice() const { DARABONBA_PTR_GET_DEFAULT(penaltyPrice_, 0L) };
    inline HotelOrderChangeDetailResponseBodyModuleRoomInfoListRoomDailyRefundInfos& setPenaltyPrice(int64_t penaltyPrice) { DARABONBA_PTR_SET_VALUE(penaltyPrice_, penaltyPrice) };


    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline int64_t price() const { DARABONBA_PTR_GET_DEFAULT(price_, 0L) };
    inline HotelOrderChangeDetailResponseBodyModuleRoomInfoListRoomDailyRefundInfos& setPrice(int64_t price) { DARABONBA_PTR_SET_VALUE(price_, price) };


    // refundPrice Field Functions 
    bool hasRefundPrice() const { return this->refundPrice_ != nullptr;};
    void deleteRefundPrice() { this->refundPrice_ = nullptr;};
    inline int64_t refundPrice() const { DARABONBA_PTR_GET_DEFAULT(refundPrice_, 0L) };
    inline HotelOrderChangeDetailResponseBodyModuleRoomInfoListRoomDailyRefundInfos& setRefundPrice(int64_t refundPrice) { DARABONBA_PTR_SET_VALUE(refundPrice_, refundPrice) };


  protected:
    std::shared_ptr<string> checkInDate_ = nullptr;
    std::shared_ptr<int64_t> penaltyPrice_ = nullptr;
    std::shared_ptr<int64_t> price_ = nullptr;
    std::shared_ptr<int64_t> refundPrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
