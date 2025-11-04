// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEECISCALINGCONFIGURATIONREQUESTCONTAINERSSECURITYCONTEXT_HPP_
#define ALIBABACLOUD_MODELS_CREATEECISCALINGCONFIGURATIONREQUESTCONTAINERSSECURITYCONTEXT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateEciScalingConfigurationRequestContainersSecurityContextCapability.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class CreateEciScalingConfigurationRequestContainersSecurityContext : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEciScalingConfigurationRequestContainersSecurityContext& obj) { 
      DARABONBA_PTR_TO_JSON(Capability, capability_);
      DARABONBA_PTR_TO_JSON(ReadOnlyRootFilesystem, readOnlyRootFilesystem_);
      DARABONBA_PTR_TO_JSON(RunAsUser, runAsUser_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEciScalingConfigurationRequestContainersSecurityContext& obj) { 
      DARABONBA_PTR_FROM_JSON(Capability, capability_);
      DARABONBA_PTR_FROM_JSON(ReadOnlyRootFilesystem, readOnlyRootFilesystem_);
      DARABONBA_PTR_FROM_JSON(RunAsUser, runAsUser_);
    };
    CreateEciScalingConfigurationRequestContainersSecurityContext() = default ;
    CreateEciScalingConfigurationRequestContainersSecurityContext(const CreateEciScalingConfigurationRequestContainersSecurityContext &) = default ;
    CreateEciScalingConfigurationRequestContainersSecurityContext(CreateEciScalingConfigurationRequestContainersSecurityContext &&) = default ;
    CreateEciScalingConfigurationRequestContainersSecurityContext(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEciScalingConfigurationRequestContainersSecurityContext() = default ;
    CreateEciScalingConfigurationRequestContainersSecurityContext& operator=(const CreateEciScalingConfigurationRequestContainersSecurityContext &) = default ;
    CreateEciScalingConfigurationRequestContainersSecurityContext& operator=(CreateEciScalingConfigurationRequestContainersSecurityContext &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->capability_ == nullptr
        && return this->readOnlyRootFilesystem_ == nullptr && return this->runAsUser_ == nullptr; };
    // capability Field Functions 
    bool hasCapability() const { return this->capability_ != nullptr;};
    void deleteCapability() { this->capability_ = nullptr;};
    inline const Models::CreateEciScalingConfigurationRequestContainersSecurityContextCapability & capability() const { DARABONBA_PTR_GET_CONST(capability_, Models::CreateEciScalingConfigurationRequestContainersSecurityContextCapability) };
    inline Models::CreateEciScalingConfigurationRequestContainersSecurityContextCapability capability() { DARABONBA_PTR_GET(capability_, Models::CreateEciScalingConfigurationRequestContainersSecurityContextCapability) };
    inline CreateEciScalingConfigurationRequestContainersSecurityContext& setCapability(const Models::CreateEciScalingConfigurationRequestContainersSecurityContextCapability & capability) { DARABONBA_PTR_SET_VALUE(capability_, capability) };
    inline CreateEciScalingConfigurationRequestContainersSecurityContext& setCapability(Models::CreateEciScalingConfigurationRequestContainersSecurityContextCapability && capability) { DARABONBA_PTR_SET_RVALUE(capability_, capability) };


    // readOnlyRootFilesystem Field Functions 
    bool hasReadOnlyRootFilesystem() const { return this->readOnlyRootFilesystem_ != nullptr;};
    void deleteReadOnlyRootFilesystem() { this->readOnlyRootFilesystem_ = nullptr;};
    inline bool readOnlyRootFilesystem() const { DARABONBA_PTR_GET_DEFAULT(readOnlyRootFilesystem_, false) };
    inline CreateEciScalingConfigurationRequestContainersSecurityContext& setReadOnlyRootFilesystem(bool readOnlyRootFilesystem) { DARABONBA_PTR_SET_VALUE(readOnlyRootFilesystem_, readOnlyRootFilesystem) };


    // runAsUser Field Functions 
    bool hasRunAsUser() const { return this->runAsUser_ != nullptr;};
    void deleteRunAsUser() { this->runAsUser_ = nullptr;};
    inline int64_t runAsUser() const { DARABONBA_PTR_GET_DEFAULT(runAsUser_, 0L) };
    inline CreateEciScalingConfigurationRequestContainersSecurityContext& setRunAsUser(int64_t runAsUser) { DARABONBA_PTR_SET_VALUE(runAsUser_, runAsUser) };


  protected:
    std::shared_ptr<Models::CreateEciScalingConfigurationRequestContainersSecurityContextCapability> capability_ = nullptr;
    std::shared_ptr<bool> readOnlyRootFilesystem_ = nullptr;
    std::shared_ptr<int64_t> runAsUser_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
