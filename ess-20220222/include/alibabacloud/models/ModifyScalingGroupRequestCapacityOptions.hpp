// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSCALINGGROUPREQUESTCAPACITYOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSCALINGGROUPREQUESTCAPACITYOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class ModifyScalingGroupRequestCapacityOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyScalingGroupRequestCapacityOptions& obj) { 
      DARABONBA_PTR_TO_JSON(CompensateWithOnDemand, compensateWithOnDemand_);
      DARABONBA_PTR_TO_JSON(OnDemandBaseCapacity, onDemandBaseCapacity_);
      DARABONBA_PTR_TO_JSON(OnDemandPercentageAboveBaseCapacity, onDemandPercentageAboveBaseCapacity_);
      DARABONBA_PTR_TO_JSON(PriceComparisonMode, priceComparisonMode_);
      DARABONBA_PTR_TO_JSON(SpotAutoReplaceOnDemand, spotAutoReplaceOnDemand_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyScalingGroupRequestCapacityOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(CompensateWithOnDemand, compensateWithOnDemand_);
      DARABONBA_PTR_FROM_JSON(OnDemandBaseCapacity, onDemandBaseCapacity_);
      DARABONBA_PTR_FROM_JSON(OnDemandPercentageAboveBaseCapacity, onDemandPercentageAboveBaseCapacity_);
      DARABONBA_PTR_FROM_JSON(PriceComparisonMode, priceComparisonMode_);
      DARABONBA_PTR_FROM_JSON(SpotAutoReplaceOnDemand, spotAutoReplaceOnDemand_);
    };
    ModifyScalingGroupRequestCapacityOptions() = default ;
    ModifyScalingGroupRequestCapacityOptions(const ModifyScalingGroupRequestCapacityOptions &) = default ;
    ModifyScalingGroupRequestCapacityOptions(ModifyScalingGroupRequestCapacityOptions &&) = default ;
    ModifyScalingGroupRequestCapacityOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyScalingGroupRequestCapacityOptions() = default ;
    ModifyScalingGroupRequestCapacityOptions& operator=(const ModifyScalingGroupRequestCapacityOptions &) = default ;
    ModifyScalingGroupRequestCapacityOptions& operator=(ModifyScalingGroupRequestCapacityOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->compensateWithOnDemand_ != nullptr
        && this->onDemandBaseCapacity_ != nullptr && this->onDemandPercentageAboveBaseCapacity_ != nullptr && this->priceComparisonMode_ != nullptr && this->spotAutoReplaceOnDemand_ != nullptr; };
    // compensateWithOnDemand Field Functions 
    bool hasCompensateWithOnDemand() const { return this->compensateWithOnDemand_ != nullptr;};
    void deleteCompensateWithOnDemand() { this->compensateWithOnDemand_ = nullptr;};
    inline bool compensateWithOnDemand() const { DARABONBA_PTR_GET_DEFAULT(compensateWithOnDemand_, false) };
    inline ModifyScalingGroupRequestCapacityOptions& setCompensateWithOnDemand(bool compensateWithOnDemand) { DARABONBA_PTR_SET_VALUE(compensateWithOnDemand_, compensateWithOnDemand) };


    // onDemandBaseCapacity Field Functions 
    bool hasOnDemandBaseCapacity() const { return this->onDemandBaseCapacity_ != nullptr;};
    void deleteOnDemandBaseCapacity() { this->onDemandBaseCapacity_ = nullptr;};
    inline int32_t onDemandBaseCapacity() const { DARABONBA_PTR_GET_DEFAULT(onDemandBaseCapacity_, 0) };
    inline ModifyScalingGroupRequestCapacityOptions& setOnDemandBaseCapacity(int32_t onDemandBaseCapacity) { DARABONBA_PTR_SET_VALUE(onDemandBaseCapacity_, onDemandBaseCapacity) };


    // onDemandPercentageAboveBaseCapacity Field Functions 
    bool hasOnDemandPercentageAboveBaseCapacity() const { return this->onDemandPercentageAboveBaseCapacity_ != nullptr;};
    void deleteOnDemandPercentageAboveBaseCapacity() { this->onDemandPercentageAboveBaseCapacity_ = nullptr;};
    inline int32_t onDemandPercentageAboveBaseCapacity() const { DARABONBA_PTR_GET_DEFAULT(onDemandPercentageAboveBaseCapacity_, 0) };
    inline ModifyScalingGroupRequestCapacityOptions& setOnDemandPercentageAboveBaseCapacity(int32_t onDemandPercentageAboveBaseCapacity) { DARABONBA_PTR_SET_VALUE(onDemandPercentageAboveBaseCapacity_, onDemandPercentageAboveBaseCapacity) };


    // priceComparisonMode Field Functions 
    bool hasPriceComparisonMode() const { return this->priceComparisonMode_ != nullptr;};
    void deletePriceComparisonMode() { this->priceComparisonMode_ = nullptr;};
    inline string priceComparisonMode() const { DARABONBA_PTR_GET_DEFAULT(priceComparisonMode_, "") };
    inline ModifyScalingGroupRequestCapacityOptions& setPriceComparisonMode(string priceComparisonMode) { DARABONBA_PTR_SET_VALUE(priceComparisonMode_, priceComparisonMode) };


    // spotAutoReplaceOnDemand Field Functions 
    bool hasSpotAutoReplaceOnDemand() const { return this->spotAutoReplaceOnDemand_ != nullptr;};
    void deleteSpotAutoReplaceOnDemand() { this->spotAutoReplaceOnDemand_ = nullptr;};
    inline bool spotAutoReplaceOnDemand() const { DARABONBA_PTR_GET_DEFAULT(spotAutoReplaceOnDemand_, false) };
    inline ModifyScalingGroupRequestCapacityOptions& setSpotAutoReplaceOnDemand(bool spotAutoReplaceOnDemand) { DARABONBA_PTR_SET_VALUE(spotAutoReplaceOnDemand_, spotAutoReplaceOnDemand) };


  protected:
    // Specifies whether to automatically create pay-as-you-go ECS instances to reach the required number of ECS instances when preemptible ECS instances cannot be created due to high prices or insufficient inventory of resources. This parameter takes effect only if you set `MultiAZPolicy` in the `CreateScalingGroup` operation to `COST_OPTIMIZED`. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> compensateWithOnDemand_ = nullptr;
    // The minimum number of pay-as-you-go instances required in the scaling group. When the number of pay-as-you-go instances drops below the value of this parameter, Auto Scaling preferentially creates pay-as-you-go instances. Valid values: 0 to 1000.
    // 
    // If you set `MultiAZPolicy` to `COMPOSABLE`, the default value is 0.
    std::shared_ptr<int32_t> onDemandBaseCapacity_ = nullptr;
    // The percentage of additional pay-as-you-go instances beyond the minimum required by `OnDemandBaseCapacity` in the scaling group. Valid values: 0 to 100
    // 
    // If you set `MultiAZPolicy` to `COMPOSABLE`, the default value is 100.
    std::shared_ptr<int32_t> onDemandPercentageAboveBaseCapacity_ = nullptr;
    // The price comparison mode. Valid values:
    // 
    // *   PricePerUnit: compares prices based on capacity.
    // 
    //     The capacity of instances in a scaling group is determined by the weights of the instance types used. If no weight is specified, the default weight is 1, which specifies that each instance in the scaling group has a capacity of 1.
    // 
    // *   PricePerVCpu: compares prices based on the price per vCPU.
    // 
    // Default value: PricePerUnit.
    std::shared_ptr<string> priceComparisonMode_ = nullptr;
    // Specifies whether to replace pay-as-you-go instances with preemptible instances. If you specify `CompensateWithOnDemand`, it may result in a higher percentage of pay-as-you-go instances compared to the value of `OnDemandPercentageAboveBaseCapacity`. In this case, Auto Scaling will try to deploy preemptible instances to replace the surplus pay-as-you-go instances. When `CompensateWithOnDemand` is specified, Auto Scaling creates pay-as-you-go instances if there are not enough preemptible instance types. To avoid keeping these pay-as-you-go ECS instances for long periods, Auto Scaling tries to replace them with preemptible instances as soon as enough of preemptible instance types become available. Valid values:
    // 
    // *   true
    // *   false
    // 
    // Default value: false.
    std::shared_ptr<bool> spotAutoReplaceOnDemand_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
