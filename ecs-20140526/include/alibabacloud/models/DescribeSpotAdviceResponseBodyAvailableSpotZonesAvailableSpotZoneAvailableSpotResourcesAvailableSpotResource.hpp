// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESPOTADVICERESPONSEBODYAVAILABLESPOTZONESAVAILABLESPOTZONEAVAILABLESPOTRESOURCESAVAILABLESPOTRESOURCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESPOTADVICERESPONSEBODYAVAILABLESPOTZONESAVAILABLESPOTZONEAVAILABLESPOTRESOURCESAVAILABLESPOTRESOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZoneAvailableSpotResourcesAvailableSpotResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZoneAvailableSpotResourcesAvailableSpotResource& obj) { 
      DARABONBA_PTR_TO_JSON(AverageSpotDiscount, averageSpotDiscount_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(InterruptRateDesc, interruptRateDesc_);
      DARABONBA_PTR_TO_JSON(InterruptionRate, interruptionRate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZoneAvailableSpotResourcesAvailableSpotResource& obj) { 
      DARABONBA_PTR_FROM_JSON(AverageSpotDiscount, averageSpotDiscount_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(InterruptRateDesc, interruptRateDesc_);
      DARABONBA_PTR_FROM_JSON(InterruptionRate, interruptionRate_);
    };
    DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZoneAvailableSpotResourcesAvailableSpotResource() = default ;
    DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZoneAvailableSpotResourcesAvailableSpotResource(const DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZoneAvailableSpotResourcesAvailableSpotResource &) = default ;
    DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZoneAvailableSpotResourcesAvailableSpotResource(DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZoneAvailableSpotResourcesAvailableSpotResource &&) = default ;
    DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZoneAvailableSpotResourcesAvailableSpotResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZoneAvailableSpotResourcesAvailableSpotResource() = default ;
    DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZoneAvailableSpotResourcesAvailableSpotResource& operator=(const DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZoneAvailableSpotResourcesAvailableSpotResource &) = default ;
    DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZoneAvailableSpotResourcesAvailableSpotResource& operator=(DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZoneAvailableSpotResourcesAvailableSpotResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->averageSpotDiscount_ != nullptr
        && this->instanceType_ != nullptr && this->interruptRateDesc_ != nullptr && this->interruptionRate_ != nullptr; };
    // averageSpotDiscount Field Functions 
    bool hasAverageSpotDiscount() const { return this->averageSpotDiscount_ != nullptr;};
    void deleteAverageSpotDiscount() { this->averageSpotDiscount_ = nullptr;};
    inline int32_t averageSpotDiscount() const { DARABONBA_PTR_GET_DEFAULT(averageSpotDiscount_, 0) };
    inline DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZoneAvailableSpotResourcesAvailableSpotResource& setAverageSpotDiscount(int32_t averageSpotDiscount) { DARABONBA_PTR_SET_VALUE(averageSpotDiscount_, averageSpotDiscount) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZoneAvailableSpotResourcesAvailableSpotResource& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // interruptRateDesc Field Functions 
    bool hasInterruptRateDesc() const { return this->interruptRateDesc_ != nullptr;};
    void deleteInterruptRateDesc() { this->interruptRateDesc_ = nullptr;};
    inline string interruptRateDesc() const { DARABONBA_PTR_GET_DEFAULT(interruptRateDesc_, "") };
    inline DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZoneAvailableSpotResourcesAvailableSpotResource& setInterruptRateDesc(string interruptRateDesc) { DARABONBA_PTR_SET_VALUE(interruptRateDesc_, interruptRateDesc) };


    // interruptionRate Field Functions 
    bool hasInterruptionRate() const { return this->interruptionRate_ != nullptr;};
    void deleteInterruptionRate() { this->interruptionRate_ = nullptr;};
    inline float interruptionRate() const { DARABONBA_PTR_GET_DEFAULT(interruptionRate_, 0.0) };
    inline DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZoneAvailableSpotResourcesAvailableSpotResource& setInterruptionRate(float interruptionRate) { DARABONBA_PTR_SET_VALUE(interruptionRate_, interruptionRate) };


  protected:
    // The percentage of the average spot instance price relative to the pay-as-you-go instance price in the previous 30 days. Unit: %. Valid values: 1 to 100.
    // 
    // You can calculate the average spot instance price based on the return value. For example, if the pay-as-you-go instance price is 1 and the return value of this parameter is 20, the average spot instance price in the previous 30 days is 0.2.
    std::shared_ptr<int32_t> averageSpotDiscount_ = nullptr;
    // The instance type.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The release rate range of spot instances in the previous 30 days, which corresponds to the `InterruptionRate` value. Valid values:
    // 
    // *   0-3%
    // *   3-5%
    // *   5-10%
    // *   10-100%
    std::shared_ptr<string> interruptRateDesc_ = nullptr;
    // The average release rate of spot instances in the previous 30 days. Unit: %.
    std::shared_ptr<float> interruptionRate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
