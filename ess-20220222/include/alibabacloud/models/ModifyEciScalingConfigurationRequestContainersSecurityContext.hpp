// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYECISCALINGCONFIGURATIONREQUESTCONTAINERSSECURITYCONTEXT_HPP_
#define ALIBABACLOUD_MODELS_MODIFYECISCALINGCONFIGURATIONREQUESTCONTAINERSSECURITYCONTEXT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyEciScalingConfigurationRequestContainersSecurityContextCapability.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class ModifyEciScalingConfigurationRequestContainersSecurityContext : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyEciScalingConfigurationRequestContainersSecurityContext& obj) { 
      DARABONBA_PTR_TO_JSON(Capability, capability_);
      DARABONBA_PTR_TO_JSON(ReadOnlyRootFilesystem, readOnlyRootFilesystem_);
      DARABONBA_PTR_TO_JSON(RunAsUser, runAsUser_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyEciScalingConfigurationRequestContainersSecurityContext& obj) { 
      DARABONBA_PTR_FROM_JSON(Capability, capability_);
      DARABONBA_PTR_FROM_JSON(ReadOnlyRootFilesystem, readOnlyRootFilesystem_);
      DARABONBA_PTR_FROM_JSON(RunAsUser, runAsUser_);
    };
    ModifyEciScalingConfigurationRequestContainersSecurityContext() = default ;
    ModifyEciScalingConfigurationRequestContainersSecurityContext(const ModifyEciScalingConfigurationRequestContainersSecurityContext &) = default ;
    ModifyEciScalingConfigurationRequestContainersSecurityContext(ModifyEciScalingConfigurationRequestContainersSecurityContext &&) = default ;
    ModifyEciScalingConfigurationRequestContainersSecurityContext(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyEciScalingConfigurationRequestContainersSecurityContext() = default ;
    ModifyEciScalingConfigurationRequestContainersSecurityContext& operator=(const ModifyEciScalingConfigurationRequestContainersSecurityContext &) = default ;
    ModifyEciScalingConfigurationRequestContainersSecurityContext& operator=(ModifyEciScalingConfigurationRequestContainersSecurityContext &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->capability_ != nullptr
        && this->readOnlyRootFilesystem_ != nullptr && this->runAsUser_ != nullptr; };
    // capability Field Functions 
    bool hasCapability() const { return this->capability_ != nullptr;};
    void deleteCapability() { this->capability_ = nullptr;};
    inline const Models::ModifyEciScalingConfigurationRequestContainersSecurityContextCapability & capability() const { DARABONBA_PTR_GET_CONST(capability_, Models::ModifyEciScalingConfigurationRequestContainersSecurityContextCapability) };
    inline Models::ModifyEciScalingConfigurationRequestContainersSecurityContextCapability capability() { DARABONBA_PTR_GET(capability_, Models::ModifyEciScalingConfigurationRequestContainersSecurityContextCapability) };
    inline ModifyEciScalingConfigurationRequestContainersSecurityContext& setCapability(const Models::ModifyEciScalingConfigurationRequestContainersSecurityContextCapability & capability) { DARABONBA_PTR_SET_VALUE(capability_, capability) };
    inline ModifyEciScalingConfigurationRequestContainersSecurityContext& setCapability(Models::ModifyEciScalingConfigurationRequestContainersSecurityContextCapability && capability) { DARABONBA_PTR_SET_RVALUE(capability_, capability) };


    // readOnlyRootFilesystem Field Functions 
    bool hasReadOnlyRootFilesystem() const { return this->readOnlyRootFilesystem_ != nullptr;};
    void deleteReadOnlyRootFilesystem() { this->readOnlyRootFilesystem_ = nullptr;};
    inline bool readOnlyRootFilesystem() const { DARABONBA_PTR_GET_DEFAULT(readOnlyRootFilesystem_, false) };
    inline ModifyEciScalingConfigurationRequestContainersSecurityContext& setReadOnlyRootFilesystem(bool readOnlyRootFilesystem) { DARABONBA_PTR_SET_VALUE(readOnlyRootFilesystem_, readOnlyRootFilesystem) };


    // runAsUser Field Functions 
    bool hasRunAsUser() const { return this->runAsUser_ != nullptr;};
    void deleteRunAsUser() { this->runAsUser_ = nullptr;};
    inline int64_t runAsUser() const { DARABONBA_PTR_GET_DEFAULT(runAsUser_, 0L) };
    inline ModifyEciScalingConfigurationRequestContainersSecurityContext& setRunAsUser(int64_t runAsUser) { DARABONBA_PTR_SET_VALUE(runAsUser_, runAsUser) };


  protected:
    std::shared_ptr<Models::ModifyEciScalingConfigurationRequestContainersSecurityContextCapability> capability_ = nullptr;
    std::shared_ptr<bool> readOnlyRootFilesystem_ = nullptr;
    std::shared_ptr<int64_t> runAsUser_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
