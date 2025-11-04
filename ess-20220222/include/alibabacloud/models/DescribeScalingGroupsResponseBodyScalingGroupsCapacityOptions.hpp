// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCALINGGROUPSRESPONSEBODYSCALINGGROUPSCAPACITYOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCALINGGROUPSRESPONSEBODYSCALINGGROUPSCAPACITYOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeScalingGroupsResponseBodyScalingGroupsCapacityOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScalingGroupsResponseBodyScalingGroupsCapacityOptions& obj) { 
      DARABONBA_PTR_TO_JSON(CompensateWithOnDemand, compensateWithOnDemand_);
      DARABONBA_PTR_TO_JSON(OnDemandBaseCapacity, onDemandBaseCapacity_);
      DARABONBA_PTR_TO_JSON(OnDemandPercentageAboveBaseCapacity, onDemandPercentageAboveBaseCapacity_);
      DARABONBA_PTR_TO_JSON(PriceComparisonMode, priceComparisonMode_);
      DARABONBA_PTR_TO_JSON(SpotAutoReplaceOnDemand, spotAutoReplaceOnDemand_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScalingGroupsResponseBodyScalingGroupsCapacityOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(CompensateWithOnDemand, compensateWithOnDemand_);
      DARABONBA_PTR_FROM_JSON(OnDemandBaseCapacity, onDemandBaseCapacity_);
      DARABONBA_PTR_FROM_JSON(OnDemandPercentageAboveBaseCapacity, onDemandPercentageAboveBaseCapacity_);
      DARABONBA_PTR_FROM_JSON(PriceComparisonMode, priceComparisonMode_);
      DARABONBA_PTR_FROM_JSON(SpotAutoReplaceOnDemand, spotAutoReplaceOnDemand_);
    };
    DescribeScalingGroupsResponseBodyScalingGroupsCapacityOptions() = default ;
    DescribeScalingGroupsResponseBodyScalingGroupsCapacityOptions(const DescribeScalingGroupsResponseBodyScalingGroupsCapacityOptions &) = default ;
    DescribeScalingGroupsResponseBodyScalingGroupsCapacityOptions(DescribeScalingGroupsResponseBodyScalingGroupsCapacityOptions &&) = default ;
    DescribeScalingGroupsResponseBodyScalingGroupsCapacityOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScalingGroupsResponseBodyScalingGroupsCapacityOptions() = default ;
    DescribeScalingGroupsResponseBodyScalingGroupsCapacityOptions& operator=(const DescribeScalingGroupsResponseBodyScalingGroupsCapacityOptions &) = default ;
    DescribeScalingGroupsResponseBodyScalingGroupsCapacityOptions& operator=(DescribeScalingGroupsResponseBodyScalingGroupsCapacityOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->compensateWithOnDemand_ == nullptr
        && return this->onDemandBaseCapacity_ == nullptr && return this->onDemandPercentageAboveBaseCapacity_ == nullptr && return this->priceComparisonMode_ == nullptr && return this->spotAutoReplaceOnDemand_ == nullptr; };
    // compensateWithOnDemand Field Functions 
    bool hasCompensateWithOnDemand() const { return this->compensateWithOnDemand_ != nullptr;};
    void deleteCompensateWithOnDemand() { this->compensateWithOnDemand_ = nullptr;};
    inline bool compensateWithOnDemand() const { DARABONBA_PTR_GET_DEFAULT(compensateWithOnDemand_, false) };
    inline DescribeScalingGroupsResponseBodyScalingGroupsCapacityOptions& setCompensateWithOnDemand(bool compensateWithOnDemand) { DARABONBA_PTR_SET_VALUE(compensateWithOnDemand_, compensateWithOnDemand) };


    // onDemandBaseCapacity Field Functions 
    bool hasOnDemandBaseCapacity() const { return this->onDemandBaseCapacity_ != nullptr;};
    void deleteOnDemandBaseCapacity() { this->onDemandBaseCapacity_ = nullptr;};
    inline int32_t onDemandBaseCapacity() const { DARABONBA_PTR_GET_DEFAULT(onDemandBaseCapacity_, 0) };
    inline DescribeScalingGroupsResponseBodyScalingGroupsCapacityOptions& setOnDemandBaseCapacity(int32_t onDemandBaseCapacity) { DARABONBA_PTR_SET_VALUE(onDemandBaseCapacity_, onDemandBaseCapacity) };


    // onDemandPercentageAboveBaseCapacity Field Functions 
    bool hasOnDemandPercentageAboveBaseCapacity() const { return this->onDemandPercentageAboveBaseCapacity_ != nullptr;};
    void deleteOnDemandPercentageAboveBaseCapacity() { this->onDemandPercentageAboveBaseCapacity_ = nullptr;};
    inline int32_t onDemandPercentageAboveBaseCapacity() const { DARABONBA_PTR_GET_DEFAULT(onDemandPercentageAboveBaseCapacity_, 0) };
    inline DescribeScalingGroupsResponseBodyScalingGroupsCapacityOptions& setOnDemandPercentageAboveBaseCapacity(int32_t onDemandPercentageAboveBaseCapacity) { DARABONBA_PTR_SET_VALUE(onDemandPercentageAboveBaseCapacity_, onDemandPercentageAboveBaseCapacity) };


    // priceComparisonMode Field Functions 
    bool hasPriceComparisonMode() const { return this->priceComparisonMode_ != nullptr;};
    void deletePriceComparisonMode() { this->priceComparisonMode_ = nullptr;};
    inline string priceComparisonMode() const { DARABONBA_PTR_GET_DEFAULT(priceComparisonMode_, "") };
    inline DescribeScalingGroupsResponseBodyScalingGroupsCapacityOptions& setPriceComparisonMode(string priceComparisonMode) { DARABONBA_PTR_SET_VALUE(priceComparisonMode_, priceComparisonMode) };


    // spotAutoReplaceOnDemand Field Functions 
    bool hasSpotAutoReplaceOnDemand() const { return this->spotAutoReplaceOnDemand_ != nullptr;};
    void deleteSpotAutoReplaceOnDemand() { this->spotAutoReplaceOnDemand_ = nullptr;};
    inline bool spotAutoReplaceOnDemand() const { DARABONBA_PTR_GET_DEFAULT(spotAutoReplaceOnDemand_, false) };
    inline DescribeScalingGroupsResponseBodyScalingGroupsCapacityOptions& setSpotAutoReplaceOnDemand(bool spotAutoReplaceOnDemand) { DARABONBA_PTR_SET_VALUE(spotAutoReplaceOnDemand_, spotAutoReplaceOnDemand) };


  protected:
    // Indicates whether pay-as-you-go ECS instances can be automatically created to reach the required number of ECS instances when preemptible ECS instances cannot be created due to high prices or insufficient inventory of resources. This parameter takes effect when you set `MultiAZPolicy` to `COST_OPTIMIZED`. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> compensateWithOnDemand_ = nullptr;
    // The minimum number of pay-as-you-go instances required in the scaling group. When the actual number of pay-as-you-go instances drops below the minimum threshold, Auto Scaling preferentially creates pay-as-you-go instances. Valid values: 0 to 1000.
    std::shared_ptr<int32_t> onDemandBaseCapacity_ = nullptr;
    // The percentage of pay-as-you-go instances in the excess instances when the minimum number of pay-as-you-go instances is reached. `OnDemandBaseCapacity` specifies the minimum number of pay-as-you-go instances required in the scaling group. Valid values: 0 to 100.
    std::shared_ptr<int32_t> onDemandPercentageAboveBaseCapacity_ = nullptr;
    // Indicates how prices are compared. Valid values:
    // 
    // *   PricePerUnit: Prices are compared based on the price per instance capacity.
    // 
    //     Capacity is determined by the weights assigned to instance types in the scaling group. If no weight is specified, a default weight of 1 is used, meaning each instance is assigned a capacity of 1.
    // 
    // *   PricePerVCpu: Prices are compared based on the price per vCPU.
    std::shared_ptr<string> priceComparisonMode_ = nullptr;
    // Specifies whether to replace pay-as-you-go ECS instances with preemptible ECS instances. If you specify `CompensateWithOnDemand`, it may result in a higher percentage of pay-as-you-go instances compared to the value of `OnDemandPercentageAboveBaseCapacity`. In this scenario, Auto Scaling will try to deploy preemptible ECS instances to replace the surplus pay-as-you-go ECS instances. When `CompensateWithOnDemand` is specified, Auto Scaling creates pay-as-you-go ECS instances if there are not enough preemptible instance types available. To avoid keeping these pay-as-you-go ECS instances for long periods, Auto Scaling tries to replace them with preemptible instances as soon as enough of preemptible instance types become available. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> spotAutoReplaceOnDemand_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
