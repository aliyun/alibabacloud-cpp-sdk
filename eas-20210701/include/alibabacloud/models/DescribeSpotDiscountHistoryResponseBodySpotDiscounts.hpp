// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESPOTDISCOUNTHISTORYRESPONSEBODYSPOTDISCOUNTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESPOTDISCOUNTHISTORYRESPONSEBODYSPOTDISCOUNTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DescribeSpotDiscountHistoryResponseBodySpotDiscounts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSpotDiscountHistoryResponseBodySpotDiscounts& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(SpotDiscount, spotDiscount_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSpotDiscountHistoryResponseBodySpotDiscounts& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(SpotDiscount, spotDiscount_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeSpotDiscountHistoryResponseBodySpotDiscounts() = default ;
    DescribeSpotDiscountHistoryResponseBodySpotDiscounts(const DescribeSpotDiscountHistoryResponseBodySpotDiscounts &) = default ;
    DescribeSpotDiscountHistoryResponseBodySpotDiscounts(DescribeSpotDiscountHistoryResponseBodySpotDiscounts &&) = default ;
    DescribeSpotDiscountHistoryResponseBodySpotDiscounts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSpotDiscountHistoryResponseBodySpotDiscounts() = default ;
    DescribeSpotDiscountHistoryResponseBodySpotDiscounts& operator=(const DescribeSpotDiscountHistoryResponseBodySpotDiscounts &) = default ;
    DescribeSpotDiscountHistoryResponseBodySpotDiscounts& operator=(DescribeSpotDiscountHistoryResponseBodySpotDiscounts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceType_ == nullptr
        && return this->spotDiscount_ == nullptr && return this->timestamp_ == nullptr && return this->zoneId_ == nullptr; };
    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeSpotDiscountHistoryResponseBodySpotDiscounts& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // spotDiscount Field Functions 
    bool hasSpotDiscount() const { return this->spotDiscount_ != nullptr;};
    void deleteSpotDiscount() { this->spotDiscount_ = nullptr;};
    inline string spotDiscount() const { DARABONBA_PTR_GET_DEFAULT(spotDiscount_, "") };
    inline DescribeSpotDiscountHistoryResponseBodySpotDiscounts& setSpotDiscount(string spotDiscount) { DARABONBA_PTR_SET_VALUE(spotDiscount_, spotDiscount) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline string timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
    inline DescribeSpotDiscountHistoryResponseBodySpotDiscounts& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeSpotDiscountHistoryResponseBodySpotDiscounts& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The type of the ECS instance.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The discount for the preemptible instance. For example, 0.1 represents a 90% discount.
    std::shared_ptr<string> spotDiscount_ = nullptr;
    // The time when the discount is available. The time must be in UTC.
    std::shared_ptr<string> timestamp_ = nullptr;
    // The zone ID.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
