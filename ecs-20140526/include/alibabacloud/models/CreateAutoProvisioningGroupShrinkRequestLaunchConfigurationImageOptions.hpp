// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAUTOPROVISIONINGGROUPSHRINKREQUESTLAUNCHCONFIGURATIONIMAGEOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_CREATEAUTOPROVISIONINGGROUPSHRINKREQUESTLAUNCHCONFIGURATIONIMAGEOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateAutoProvisioningGroupShrinkRequestLaunchConfigurationImageOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAutoProvisioningGroupShrinkRequestLaunchConfigurationImageOptions& obj) { 
      DARABONBA_PTR_TO_JSON(LoginAsNonRoot, loginAsNonRoot_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAutoProvisioningGroupShrinkRequestLaunchConfigurationImageOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(LoginAsNonRoot, loginAsNonRoot_);
    };
    CreateAutoProvisioningGroupShrinkRequestLaunchConfigurationImageOptions() = default ;
    CreateAutoProvisioningGroupShrinkRequestLaunchConfigurationImageOptions(const CreateAutoProvisioningGroupShrinkRequestLaunchConfigurationImageOptions &) = default ;
    CreateAutoProvisioningGroupShrinkRequestLaunchConfigurationImageOptions(CreateAutoProvisioningGroupShrinkRequestLaunchConfigurationImageOptions &&) = default ;
    CreateAutoProvisioningGroupShrinkRequestLaunchConfigurationImageOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAutoProvisioningGroupShrinkRequestLaunchConfigurationImageOptions() = default ;
    CreateAutoProvisioningGroupShrinkRequestLaunchConfigurationImageOptions& operator=(const CreateAutoProvisioningGroupShrinkRequestLaunchConfigurationImageOptions &) = default ;
    CreateAutoProvisioningGroupShrinkRequestLaunchConfigurationImageOptions& operator=(CreateAutoProvisioningGroupShrinkRequestLaunchConfigurationImageOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->loginAsNonRoot_ == nullptr; };
    // loginAsNonRoot Field Functions 
    bool hasLoginAsNonRoot() const { return this->loginAsNonRoot_ != nullptr;};
    void deleteLoginAsNonRoot() { this->loginAsNonRoot_ = nullptr;};
    inline bool loginAsNonRoot() const { DARABONBA_PTR_GET_DEFAULT(loginAsNonRoot_, false) };
    inline CreateAutoProvisioningGroupShrinkRequestLaunchConfigurationImageOptions& setLoginAsNonRoot(bool loginAsNonRoot) { DARABONBA_PTR_SET_VALUE(loginAsNonRoot_, loginAsNonRoot) };


  protected:
    // Specifies whether the instance that uses the image supports logons of the ecs-user user. Valid value:
    // 
    // *   true: The instance that uses the image supports logons of the ecs-user user.
    // *   false: The instance that uses the image does not support logons of the ecs-user user.
    std::shared_ptr<bool> loginAsNonRoot_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
