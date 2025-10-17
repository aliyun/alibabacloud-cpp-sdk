// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAUTOPROVISIONINGGROUPREQUESTPREPAIDOPTIONSSPECIFYCAPACITYDISTRIBUTION_HPP_
#define ALIBABACLOUD_MODELS_CREATEAUTOPROVISIONINGGROUPREQUESTPREPAIDOPTIONSSPECIFYCAPACITYDISTRIBUTION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateAutoProvisioningGroupRequestPrePaidOptionsSpecifyCapacityDistribution : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAutoProvisioningGroupRequestPrePaidOptionsSpecifyCapacityDistribution& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceTypes, instanceTypes_);
      DARABONBA_PTR_TO_JSON(MinTargetCapacity, minTargetCapacity_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAutoProvisioningGroupRequestPrePaidOptionsSpecifyCapacityDistribution& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceTypes, instanceTypes_);
      DARABONBA_PTR_FROM_JSON(MinTargetCapacity, minTargetCapacity_);
    };
    CreateAutoProvisioningGroupRequestPrePaidOptionsSpecifyCapacityDistribution() = default ;
    CreateAutoProvisioningGroupRequestPrePaidOptionsSpecifyCapacityDistribution(const CreateAutoProvisioningGroupRequestPrePaidOptionsSpecifyCapacityDistribution &) = default ;
    CreateAutoProvisioningGroupRequestPrePaidOptionsSpecifyCapacityDistribution(CreateAutoProvisioningGroupRequestPrePaidOptionsSpecifyCapacityDistribution &&) = default ;
    CreateAutoProvisioningGroupRequestPrePaidOptionsSpecifyCapacityDistribution(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAutoProvisioningGroupRequestPrePaidOptionsSpecifyCapacityDistribution() = default ;
    CreateAutoProvisioningGroupRequestPrePaidOptionsSpecifyCapacityDistribution& operator=(const CreateAutoProvisioningGroupRequestPrePaidOptionsSpecifyCapacityDistribution &) = default ;
    CreateAutoProvisioningGroupRequestPrePaidOptionsSpecifyCapacityDistribution& operator=(CreateAutoProvisioningGroupRequestPrePaidOptionsSpecifyCapacityDistribution &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceTypes_ == nullptr
        && return this->minTargetCapacity_ == nullptr; };
    // instanceTypes Field Functions 
    bool hasInstanceTypes() const { return this->instanceTypes_ != nullptr;};
    void deleteInstanceTypes() { this->instanceTypes_ = nullptr;};
    inline const vector<string> & instanceTypes() const { DARABONBA_PTR_GET_CONST(instanceTypes_, vector<string>) };
    inline vector<string> instanceTypes() { DARABONBA_PTR_GET(instanceTypes_, vector<string>) };
    inline CreateAutoProvisioningGroupRequestPrePaidOptionsSpecifyCapacityDistribution& setInstanceTypes(const vector<string> & instanceTypes) { DARABONBA_PTR_SET_VALUE(instanceTypes_, instanceTypes) };
    inline CreateAutoProvisioningGroupRequestPrePaidOptionsSpecifyCapacityDistribution& setInstanceTypes(vector<string> && instanceTypes) { DARABONBA_PTR_SET_RVALUE(instanceTypes_, instanceTypes) };


    // minTargetCapacity Field Functions 
    bool hasMinTargetCapacity() const { return this->minTargetCapacity_ != nullptr;};
    void deleteMinTargetCapacity() { this->minTargetCapacity_ = nullptr;};
    inline int32_t minTargetCapacity() const { DARABONBA_PTR_GET_DEFAULT(minTargetCapacity_, 0) };
    inline CreateAutoProvisioningGroupRequestPrePaidOptionsSpecifyCapacityDistribution& setMinTargetCapacity(int32_t minTargetCapacity) { DARABONBA_PTR_SET_VALUE(minTargetCapacity_, minTargetCapacity) };


  protected:
    // Details about the instance types. Duplicate instance types are not allowed and the instance types are within the LaunchTemplateConfig.InstanceType range.
    std::shared_ptr<vector<string>> instanceTypes_ = nullptr;
    // The minimum number of instances to be delivered within the `InstanceTypes` range.
    // 
    // >  `sum(MinTargetCapacity)<= TotalTargetCapacity` indicates that the sum of MinTargetCapacity values of all instance types cannot exceed the TotalTargetCapacity value. If any instance type set cannot meet the MinTargetCapacity requirement due to insufficient inventory or other reasons, the entire request fails.
    std::shared_ptr<int32_t> minTargetCapacity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
