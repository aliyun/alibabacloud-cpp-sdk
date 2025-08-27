// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELGOODSQUERYRESPONSEBODYMODULEROOMSRATESBTRIPCANCELRULEBTRIPHOTELCANCELPOLICYDTOBTRIPHOTELCANCELPOLICYINFODTOLIST_HPP_
#define ALIBABACLOUD_MODELS_HOTELGOODSQUERYRESPONSEBODYMODULEROOMSRATESBTRIPCANCELRULEBTRIPHOTELCANCELPOLICYDTOBTRIPHOTELCANCELPOLICYINFODTOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRuleBtripHotelCancelPolicyDTOBtripHotelCancelPolicyInfoDTOList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRuleBtripHotelCancelPolicyDTOBtripHotelCancelPolicyInfoDTOList& obj) { 
      DARABONBA_PTR_TO_JSON(hour, hour_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRuleBtripHotelCancelPolicyDTOBtripHotelCancelPolicyInfoDTOList& obj) { 
      DARABONBA_PTR_FROM_JSON(hour, hour_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRuleBtripHotelCancelPolicyDTOBtripHotelCancelPolicyInfoDTOList() = default ;
    HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRuleBtripHotelCancelPolicyDTOBtripHotelCancelPolicyInfoDTOList(const HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRuleBtripHotelCancelPolicyDTOBtripHotelCancelPolicyInfoDTOList &) = default ;
    HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRuleBtripHotelCancelPolicyDTOBtripHotelCancelPolicyInfoDTOList(HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRuleBtripHotelCancelPolicyDTOBtripHotelCancelPolicyInfoDTOList &&) = default ;
    HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRuleBtripHotelCancelPolicyDTOBtripHotelCancelPolicyInfoDTOList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRuleBtripHotelCancelPolicyDTOBtripHotelCancelPolicyInfoDTOList() = default ;
    HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRuleBtripHotelCancelPolicyDTOBtripHotelCancelPolicyInfoDTOList& operator=(const HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRuleBtripHotelCancelPolicyDTOBtripHotelCancelPolicyInfoDTOList &) = default ;
    HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRuleBtripHotelCancelPolicyDTOBtripHotelCancelPolicyInfoDTOList& operator=(HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRuleBtripHotelCancelPolicyDTOBtripHotelCancelPolicyInfoDTOList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hour_ != nullptr
        && this->value_ != nullptr; };
    // hour Field Functions 
    bool hasHour() const { return this->hour_ != nullptr;};
    void deleteHour() { this->hour_ = nullptr;};
    inline int64_t hour() const { DARABONBA_PTR_GET_DEFAULT(hour_, 0L) };
    inline HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRuleBtripHotelCancelPolicyDTOBtripHotelCancelPolicyInfoDTOList& setHour(int64_t hour) { DARABONBA_PTR_SET_VALUE(hour_, hour) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline int64_t value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
    inline HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRuleBtripHotelCancelPolicyDTOBtripHotelCancelPolicyInfoDTOList& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<int64_t> hour_ = nullptr;
    std::shared_ptr<int64_t> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
