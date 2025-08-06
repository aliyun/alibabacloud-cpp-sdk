// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOPROVISIONINGGROUPSRESPONSEBODYAUTOPROVISIONINGGROUPSAUTOPROVISIONINGGROUPSPOTOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOPROVISIONINGGROUPSRESPONSEBODYAUTOPROVISIONINGGROUPSAUTOPROVISIONINGGROUPSPOTOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupSpotOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupSpotOptions& obj) { 
      DARABONBA_PTR_TO_JSON(AllocationStrategy, allocationStrategy_);
      DARABONBA_PTR_TO_JSON(InstanceInterruptionBehavior, instanceInterruptionBehavior_);
      DARABONBA_PTR_TO_JSON(InstancePoolsToUseCount, instancePoolsToUseCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupSpotOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(AllocationStrategy, allocationStrategy_);
      DARABONBA_PTR_FROM_JSON(InstanceInterruptionBehavior, instanceInterruptionBehavior_);
      DARABONBA_PTR_FROM_JSON(InstancePoolsToUseCount, instancePoolsToUseCount_);
    };
    DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupSpotOptions() = default ;
    DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupSpotOptions(const DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupSpotOptions &) = default ;
    DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupSpotOptions(DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupSpotOptions &&) = default ;
    DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupSpotOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupSpotOptions() = default ;
    DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupSpotOptions& operator=(const DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupSpotOptions &) = default ;
    DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupSpotOptions& operator=(DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupSpotOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allocationStrategy_ != nullptr
        && this->instanceInterruptionBehavior_ != nullptr && this->instancePoolsToUseCount_ != nullptr; };
    // allocationStrategy Field Functions 
    bool hasAllocationStrategy() const { return this->allocationStrategy_ != nullptr;};
    void deleteAllocationStrategy() { this->allocationStrategy_ = nullptr;};
    inline string allocationStrategy() const { DARABONBA_PTR_GET_DEFAULT(allocationStrategy_, "") };
    inline DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupSpotOptions& setAllocationStrategy(string allocationStrategy) { DARABONBA_PTR_SET_VALUE(allocationStrategy_, allocationStrategy) };


    // instanceInterruptionBehavior Field Functions 
    bool hasInstanceInterruptionBehavior() const { return this->instanceInterruptionBehavior_ != nullptr;};
    void deleteInstanceInterruptionBehavior() { this->instanceInterruptionBehavior_ = nullptr;};
    inline string instanceInterruptionBehavior() const { DARABONBA_PTR_GET_DEFAULT(instanceInterruptionBehavior_, "") };
    inline DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupSpotOptions& setInstanceInterruptionBehavior(string instanceInterruptionBehavior) { DARABONBA_PTR_SET_VALUE(instanceInterruptionBehavior_, instanceInterruptionBehavior) };


    // instancePoolsToUseCount Field Functions 
    bool hasInstancePoolsToUseCount() const { return this->instancePoolsToUseCount_ != nullptr;};
    void deleteInstancePoolsToUseCount() { this->instancePoolsToUseCount_ = nullptr;};
    inline int32_t instancePoolsToUseCount() const { DARABONBA_PTR_GET_DEFAULT(instancePoolsToUseCount_, 0) };
    inline DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupSpotOptions& setInstancePoolsToUseCount(int32_t instancePoolsToUseCount) { DARABONBA_PTR_SET_VALUE(instancePoolsToUseCount_, instancePoolsToUseCount) };


  protected:
    // The policy for creating spot instances. Valid values:
    // 
    // *   lowest-price: cost optimization policy. This policy indicates that the lowest-priced instance type is used to create instances.
    // *   diversified: balanced distribution policy. This policy indicates that instances are created evenly across multiple zones specified in the extended configuration.
    std::shared_ptr<string> allocationStrategy_ = nullptr;
    // The action to be performed after the excess spot instances are stopped. Valid values:
    // 
    // *   stop: retains the excess spot instances in the stopped state.
    // *   terminate: releases the excess spot instances.
    std::shared_ptr<string> instanceInterruptionBehavior_ = nullptr;
    // The number of instances that the auto provisioning group creates by selecting the instance type of the lowest price.
    // 
    // >  This parameter is set when the auto provisioning group is created, and cannot be modified.
    std::shared_ptr<int32_t> instancePoolsToUseCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
