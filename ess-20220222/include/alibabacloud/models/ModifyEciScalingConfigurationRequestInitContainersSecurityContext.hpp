// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYECISCALINGCONFIGURATIONREQUESTINITCONTAINERSSECURITYCONTEXT_HPP_
#define ALIBABACLOUD_MODELS_MODIFYECISCALINGCONFIGURATIONREQUESTINITCONTAINERSSECURITYCONTEXT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyEciScalingConfigurationRequestInitContainersSecurityContextCapability.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class ModifyEciScalingConfigurationRequestInitContainersSecurityContext : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyEciScalingConfigurationRequestInitContainersSecurityContext& obj) { 
      DARABONBA_PTR_TO_JSON(Capability, capability_);
      DARABONBA_PTR_TO_JSON(ReadOnlyRootFilesystem, readOnlyRootFilesystem_);
      DARABONBA_PTR_TO_JSON(RunAsUser, runAsUser_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyEciScalingConfigurationRequestInitContainersSecurityContext& obj) { 
      DARABONBA_PTR_FROM_JSON(Capability, capability_);
      DARABONBA_PTR_FROM_JSON(ReadOnlyRootFilesystem, readOnlyRootFilesystem_);
      DARABONBA_PTR_FROM_JSON(RunAsUser, runAsUser_);
    };
    ModifyEciScalingConfigurationRequestInitContainersSecurityContext() = default ;
    ModifyEciScalingConfigurationRequestInitContainersSecurityContext(const ModifyEciScalingConfigurationRequestInitContainersSecurityContext &) = default ;
    ModifyEciScalingConfigurationRequestInitContainersSecurityContext(ModifyEciScalingConfigurationRequestInitContainersSecurityContext &&) = default ;
    ModifyEciScalingConfigurationRequestInitContainersSecurityContext(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyEciScalingConfigurationRequestInitContainersSecurityContext() = default ;
    ModifyEciScalingConfigurationRequestInitContainersSecurityContext& operator=(const ModifyEciScalingConfigurationRequestInitContainersSecurityContext &) = default ;
    ModifyEciScalingConfigurationRequestInitContainersSecurityContext& operator=(ModifyEciScalingConfigurationRequestInitContainersSecurityContext &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->capability_ == nullptr
        && return this->readOnlyRootFilesystem_ == nullptr && return this->runAsUser_ == nullptr; };
    // capability Field Functions 
    bool hasCapability() const { return this->capability_ != nullptr;};
    void deleteCapability() { this->capability_ = nullptr;};
    inline const Models::ModifyEciScalingConfigurationRequestInitContainersSecurityContextCapability & capability() const { DARABONBA_PTR_GET_CONST(capability_, Models::ModifyEciScalingConfigurationRequestInitContainersSecurityContextCapability) };
    inline Models::ModifyEciScalingConfigurationRequestInitContainersSecurityContextCapability capability() { DARABONBA_PTR_GET(capability_, Models::ModifyEciScalingConfigurationRequestInitContainersSecurityContextCapability) };
    inline ModifyEciScalingConfigurationRequestInitContainersSecurityContext& setCapability(const Models::ModifyEciScalingConfigurationRequestInitContainersSecurityContextCapability & capability) { DARABONBA_PTR_SET_VALUE(capability_, capability) };
    inline ModifyEciScalingConfigurationRequestInitContainersSecurityContext& setCapability(Models::ModifyEciScalingConfigurationRequestInitContainersSecurityContextCapability && capability) { DARABONBA_PTR_SET_RVALUE(capability_, capability) };


    // readOnlyRootFilesystem Field Functions 
    bool hasReadOnlyRootFilesystem() const { return this->readOnlyRootFilesystem_ != nullptr;};
    void deleteReadOnlyRootFilesystem() { this->readOnlyRootFilesystem_ = nullptr;};
    inline bool readOnlyRootFilesystem() const { DARABONBA_PTR_GET_DEFAULT(readOnlyRootFilesystem_, false) };
    inline ModifyEciScalingConfigurationRequestInitContainersSecurityContext& setReadOnlyRootFilesystem(bool readOnlyRootFilesystem) { DARABONBA_PTR_SET_VALUE(readOnlyRootFilesystem_, readOnlyRootFilesystem) };


    // runAsUser Field Functions 
    bool hasRunAsUser() const { return this->runAsUser_ != nullptr;};
    void deleteRunAsUser() { this->runAsUser_ = nullptr;};
    inline int64_t runAsUser() const { DARABONBA_PTR_GET_DEFAULT(runAsUser_, 0L) };
    inline ModifyEciScalingConfigurationRequestInitContainersSecurityContext& setRunAsUser(int64_t runAsUser) { DARABONBA_PTR_SET_VALUE(runAsUser_, runAsUser) };


  protected:
    std::shared_ptr<Models::ModifyEciScalingConfigurationRequestInitContainersSecurityContextCapability> capability_ = nullptr;
    std::shared_ptr<bool> readOnlyRootFilesystem_ = nullptr;
    std::shared_ptr<int64_t> runAsUser_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
