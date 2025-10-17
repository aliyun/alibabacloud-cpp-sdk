// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOPROVISIONINGGROUPSRESPONSEBODYAUTOPROVISIONINGGROUPSAUTOPROVISIONINGGROUPTARGETCAPACITYSPECIFICATION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOPROVISIONINGGROUPSRESPONSEBODYAUTOPROVISIONINGGROUPSAUTOPROVISIONINGGROUPTARGETCAPACITYSPECIFICATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupTargetCapacitySpecification : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupTargetCapacitySpecification& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultTargetCapacityType, defaultTargetCapacityType_);
      DARABONBA_PTR_TO_JSON(PayAsYouGoTargetCapacity, payAsYouGoTargetCapacity_);
      DARABONBA_PTR_TO_JSON(SpotTargetCapacity, spotTargetCapacity_);
      DARABONBA_PTR_TO_JSON(TotalTargetCapacity, totalTargetCapacity_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupTargetCapacitySpecification& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultTargetCapacityType, defaultTargetCapacityType_);
      DARABONBA_PTR_FROM_JSON(PayAsYouGoTargetCapacity, payAsYouGoTargetCapacity_);
      DARABONBA_PTR_FROM_JSON(SpotTargetCapacity, spotTargetCapacity_);
      DARABONBA_PTR_FROM_JSON(TotalTargetCapacity, totalTargetCapacity_);
    };
    DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupTargetCapacitySpecification() = default ;
    DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupTargetCapacitySpecification(const DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupTargetCapacitySpecification &) = default ;
    DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupTargetCapacitySpecification(DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupTargetCapacitySpecification &&) = default ;
    DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupTargetCapacitySpecification(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupTargetCapacitySpecification() = default ;
    DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupTargetCapacitySpecification& operator=(const DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupTargetCapacitySpecification &) = default ;
    DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupTargetCapacitySpecification& operator=(DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupTargetCapacitySpecification &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defaultTargetCapacityType_ == nullptr
        && return this->payAsYouGoTargetCapacity_ == nullptr && return this->spotTargetCapacity_ == nullptr && return this->totalTargetCapacity_ == nullptr; };
    // defaultTargetCapacityType Field Functions 
    bool hasDefaultTargetCapacityType() const { return this->defaultTargetCapacityType_ != nullptr;};
    void deleteDefaultTargetCapacityType() { this->defaultTargetCapacityType_ = nullptr;};
    inline string defaultTargetCapacityType() const { DARABONBA_PTR_GET_DEFAULT(defaultTargetCapacityType_, "") };
    inline DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupTargetCapacitySpecification& setDefaultTargetCapacityType(string defaultTargetCapacityType) { DARABONBA_PTR_SET_VALUE(defaultTargetCapacityType_, defaultTargetCapacityType) };


    // payAsYouGoTargetCapacity Field Functions 
    bool hasPayAsYouGoTargetCapacity() const { return this->payAsYouGoTargetCapacity_ != nullptr;};
    void deletePayAsYouGoTargetCapacity() { this->payAsYouGoTargetCapacity_ = nullptr;};
    inline float payAsYouGoTargetCapacity() const { DARABONBA_PTR_GET_DEFAULT(payAsYouGoTargetCapacity_, 0.0) };
    inline DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupTargetCapacitySpecification& setPayAsYouGoTargetCapacity(float payAsYouGoTargetCapacity) { DARABONBA_PTR_SET_VALUE(payAsYouGoTargetCapacity_, payAsYouGoTargetCapacity) };


    // spotTargetCapacity Field Functions 
    bool hasSpotTargetCapacity() const { return this->spotTargetCapacity_ != nullptr;};
    void deleteSpotTargetCapacity() { this->spotTargetCapacity_ = nullptr;};
    inline float spotTargetCapacity() const { DARABONBA_PTR_GET_DEFAULT(spotTargetCapacity_, 0.0) };
    inline DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupTargetCapacitySpecification& setSpotTargetCapacity(float spotTargetCapacity) { DARABONBA_PTR_SET_VALUE(spotTargetCapacity_, spotTargetCapacity) };


    // totalTargetCapacity Field Functions 
    bool hasTotalTargetCapacity() const { return this->totalTargetCapacity_ != nullptr;};
    void deleteTotalTargetCapacity() { this->totalTargetCapacity_ = nullptr;};
    inline float totalTargetCapacity() const { DARABONBA_PTR_GET_DEFAULT(totalTargetCapacity_, 0.0) };
    inline DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupTargetCapacitySpecification& setTotalTargetCapacity(float totalTargetCapacity) { DARABONBA_PTR_SET_VALUE(totalTargetCapacity_, totalTargetCapacity) };


  protected:
    // The type of supplemental instances. When the sum of the `PayAsYouGoTargetCapacity` and `SpotTargetCapacity` values is less than the `TotalTargetCapacity` value, the auto provisioning group creates instances of the specified billing method to meet the target capacity. Valid values:
    // 
    // *   PayAsYouGo: pay-as-you-go instances.
    // *   Spot: spot instances.
    std::shared_ptr<string> defaultTargetCapacityType_ = nullptr;
    // The target capacity of pay-as-you-go instances that the auto provisioning group provisions.
    std::shared_ptr<float> payAsYouGoTargetCapacity_ = nullptr;
    // The target capacity of spot instances that the auto provisioning group provisions.
    std::shared_ptr<float> spotTargetCapacity_ = nullptr;
    // The target capacity of the auto provisioning group. The capacity consists of the following parts:
    // 
    // *   PayAsYouGoTargetCapacity
    // *   SpotTargetCapacity
    // *   The supplemental capacity besides instance capacities specified by PayAsYouGoTargetCapacity and SpotTargetCapacity.
    std::shared_ptr<float> totalTargetCapacity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
