// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELORDERPREVALIDATERESPONSEBODYMODULERATEPLANINFOBTRIPHOTELCANCELPOLICYDTOBTRIPHOTELCANCELPOLICYINFODTOLIST_HPP_
#define ALIBABACLOUD_MODELS_HOTELORDERPREVALIDATERESPONSEBODYMODULERATEPLANINFOBTRIPHOTELCANCELPOLICYDTOBTRIPHOTELCANCELPOLICYINFODTOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelOrderPreValidateResponseBodyModuleRatePlanInfoBtripHotelCancelPolicyDTOBtripHotelCancelPolicyInfoDTOList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelOrderPreValidateResponseBodyModuleRatePlanInfoBtripHotelCancelPolicyDTOBtripHotelCancelPolicyInfoDTOList& obj) { 
      DARABONBA_PTR_TO_JSON(hour, hour_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, HotelOrderPreValidateResponseBodyModuleRatePlanInfoBtripHotelCancelPolicyDTOBtripHotelCancelPolicyInfoDTOList& obj) { 
      DARABONBA_PTR_FROM_JSON(hour, hour_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    HotelOrderPreValidateResponseBodyModuleRatePlanInfoBtripHotelCancelPolicyDTOBtripHotelCancelPolicyInfoDTOList() = default ;
    HotelOrderPreValidateResponseBodyModuleRatePlanInfoBtripHotelCancelPolicyDTOBtripHotelCancelPolicyInfoDTOList(const HotelOrderPreValidateResponseBodyModuleRatePlanInfoBtripHotelCancelPolicyDTOBtripHotelCancelPolicyInfoDTOList &) = default ;
    HotelOrderPreValidateResponseBodyModuleRatePlanInfoBtripHotelCancelPolicyDTOBtripHotelCancelPolicyInfoDTOList(HotelOrderPreValidateResponseBodyModuleRatePlanInfoBtripHotelCancelPolicyDTOBtripHotelCancelPolicyInfoDTOList &&) = default ;
    HotelOrderPreValidateResponseBodyModuleRatePlanInfoBtripHotelCancelPolicyDTOBtripHotelCancelPolicyInfoDTOList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelOrderPreValidateResponseBodyModuleRatePlanInfoBtripHotelCancelPolicyDTOBtripHotelCancelPolicyInfoDTOList() = default ;
    HotelOrderPreValidateResponseBodyModuleRatePlanInfoBtripHotelCancelPolicyDTOBtripHotelCancelPolicyInfoDTOList& operator=(const HotelOrderPreValidateResponseBodyModuleRatePlanInfoBtripHotelCancelPolicyDTOBtripHotelCancelPolicyInfoDTOList &) = default ;
    HotelOrderPreValidateResponseBodyModuleRatePlanInfoBtripHotelCancelPolicyDTOBtripHotelCancelPolicyInfoDTOList& operator=(HotelOrderPreValidateResponseBodyModuleRatePlanInfoBtripHotelCancelPolicyDTOBtripHotelCancelPolicyInfoDTOList &&) = default ;
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
    inline HotelOrderPreValidateResponseBodyModuleRatePlanInfoBtripHotelCancelPolicyDTOBtripHotelCancelPolicyInfoDTOList& setHour(int64_t hour) { DARABONBA_PTR_SET_VALUE(hour_, hour) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline int64_t value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
    inline HotelOrderPreValidateResponseBodyModuleRatePlanInfoBtripHotelCancelPolicyDTOBtripHotelCancelPolicyInfoDTOList& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<int64_t> hour_ = nullptr;
    std::shared_ptr<int64_t> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
