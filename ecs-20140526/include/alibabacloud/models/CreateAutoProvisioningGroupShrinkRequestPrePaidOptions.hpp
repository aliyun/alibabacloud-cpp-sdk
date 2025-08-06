// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAUTOPROVISIONINGGROUPSHRINKREQUESTPREPAIDOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_CREATEAUTOPROVISIONINGGROUPSHRINKREQUESTPREPAIDOPTIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateAutoProvisioningGroupShrinkRequestPrePaidOptionsSpecifyCapacityDistribution.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateAutoProvisioningGroupShrinkRequestPrePaidOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAutoProvisioningGroupShrinkRequestPrePaidOptions& obj) { 
      DARABONBA_PTR_TO_JSON(SpecifyCapacityDistribution, specifyCapacityDistribution_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAutoProvisioningGroupShrinkRequestPrePaidOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(SpecifyCapacityDistribution, specifyCapacityDistribution_);
    };
    CreateAutoProvisioningGroupShrinkRequestPrePaidOptions() = default ;
    CreateAutoProvisioningGroupShrinkRequestPrePaidOptions(const CreateAutoProvisioningGroupShrinkRequestPrePaidOptions &) = default ;
    CreateAutoProvisioningGroupShrinkRequestPrePaidOptions(CreateAutoProvisioningGroupShrinkRequestPrePaidOptions &&) = default ;
    CreateAutoProvisioningGroupShrinkRequestPrePaidOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAutoProvisioningGroupShrinkRequestPrePaidOptions() = default ;
    CreateAutoProvisioningGroupShrinkRequestPrePaidOptions& operator=(const CreateAutoProvisioningGroupShrinkRequestPrePaidOptions &) = default ;
    CreateAutoProvisioningGroupShrinkRequestPrePaidOptions& operator=(CreateAutoProvisioningGroupShrinkRequestPrePaidOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->specifyCapacityDistribution_ != nullptr; };
    // specifyCapacityDistribution Field Functions 
    bool hasSpecifyCapacityDistribution() const { return this->specifyCapacityDistribution_ != nullptr;};
    void deleteSpecifyCapacityDistribution() { this->specifyCapacityDistribution_ = nullptr;};
    inline const vector<Models::CreateAutoProvisioningGroupShrinkRequestPrePaidOptionsSpecifyCapacityDistribution> & specifyCapacityDistribution() const { DARABONBA_PTR_GET_CONST(specifyCapacityDistribution_, vector<Models::CreateAutoProvisioningGroupShrinkRequestPrePaidOptionsSpecifyCapacityDistribution>) };
    inline vector<Models::CreateAutoProvisioningGroupShrinkRequestPrePaidOptionsSpecifyCapacityDistribution> specifyCapacityDistribution() { DARABONBA_PTR_GET(specifyCapacityDistribution_, vector<Models::CreateAutoProvisioningGroupShrinkRequestPrePaidOptionsSpecifyCapacityDistribution>) };
    inline CreateAutoProvisioningGroupShrinkRequestPrePaidOptions& setSpecifyCapacityDistribution(const vector<Models::CreateAutoProvisioningGroupShrinkRequestPrePaidOptionsSpecifyCapacityDistribution> & specifyCapacityDistribution) { DARABONBA_PTR_SET_VALUE(specifyCapacityDistribution_, specifyCapacityDistribution) };
    inline CreateAutoProvisioningGroupShrinkRequestPrePaidOptions& setSpecifyCapacityDistribution(vector<Models::CreateAutoProvisioningGroupShrinkRequestPrePaidOptionsSpecifyCapacityDistribution> && specifyCapacityDistribution) { DARABONBA_PTR_SET_RVALUE(specifyCapacityDistribution_, specifyCapacityDistribution) };


  protected:
    // The minimum capacity set for different instance types. This parameter is valid only when `AutoProvisioningGroupType` is set to request.
    std::shared_ptr<vector<Models::CreateAutoProvisioningGroupShrinkRequestPrePaidOptionsSpecifyCapacityDistribution>> specifyCapacityDistribution_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
