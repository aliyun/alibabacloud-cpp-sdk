// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAUTOPROVISIONINGGROUPREQUESTLAUNCHCONFIGURATIONSCHEDULEROPTIONS_HPP_
#define ALIBABACLOUD_MODELS_CREATEAUTOPROVISIONINGGROUPREQUESTLAUNCHCONFIGURATIONSCHEDULEROPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateAutoProvisioningGroupRequestLaunchConfigurationSchedulerOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAutoProvisioningGroupRequestLaunchConfigurationSchedulerOptions& obj) { 
      DARABONBA_PTR_TO_JSON(DedicatedHostClusterId, dedicatedHostClusterId_);
      DARABONBA_PTR_TO_JSON(DedicatedHostId, dedicatedHostId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAutoProvisioningGroupRequestLaunchConfigurationSchedulerOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(DedicatedHostClusterId, dedicatedHostClusterId_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostId, dedicatedHostId_);
    };
    CreateAutoProvisioningGroupRequestLaunchConfigurationSchedulerOptions() = default ;
    CreateAutoProvisioningGroupRequestLaunchConfigurationSchedulerOptions(const CreateAutoProvisioningGroupRequestLaunchConfigurationSchedulerOptions &) = default ;
    CreateAutoProvisioningGroupRequestLaunchConfigurationSchedulerOptions(CreateAutoProvisioningGroupRequestLaunchConfigurationSchedulerOptions &&) = default ;
    CreateAutoProvisioningGroupRequestLaunchConfigurationSchedulerOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAutoProvisioningGroupRequestLaunchConfigurationSchedulerOptions() = default ;
    CreateAutoProvisioningGroupRequestLaunchConfigurationSchedulerOptions& operator=(const CreateAutoProvisioningGroupRequestLaunchConfigurationSchedulerOptions &) = default ;
    CreateAutoProvisioningGroupRequestLaunchConfigurationSchedulerOptions& operator=(CreateAutoProvisioningGroupRequestLaunchConfigurationSchedulerOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dedicatedHostClusterId_ == nullptr
        && return this->dedicatedHostId_ == nullptr; };
    // dedicatedHostClusterId Field Functions 
    bool hasDedicatedHostClusterId() const { return this->dedicatedHostClusterId_ != nullptr;};
    void deleteDedicatedHostClusterId() { this->dedicatedHostClusterId_ = nullptr;};
    inline string dedicatedHostClusterId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostClusterId_, "") };
    inline CreateAutoProvisioningGroupRequestLaunchConfigurationSchedulerOptions& setDedicatedHostClusterId(string dedicatedHostClusterId) { DARABONBA_PTR_SET_VALUE(dedicatedHostClusterId_, dedicatedHostClusterId) };


    // dedicatedHostId Field Functions 
    bool hasDedicatedHostId() const { return this->dedicatedHostId_ != nullptr;};
    void deleteDedicatedHostId() { this->dedicatedHostId_ = nullptr;};
    inline string dedicatedHostId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostId_, "") };
    inline CreateAutoProvisioningGroupRequestLaunchConfigurationSchedulerOptions& setDedicatedHostId(string dedicatedHostId) { DARABONBA_PTR_SET_VALUE(dedicatedHostId_, dedicatedHostId) };


  protected:
    std::shared_ptr<string> dedicatedHostClusterId_ = nullptr;
    std::shared_ptr<string> dedicatedHostId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
