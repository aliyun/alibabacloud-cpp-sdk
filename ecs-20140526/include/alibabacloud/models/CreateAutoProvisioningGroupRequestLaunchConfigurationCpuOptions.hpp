// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAUTOPROVISIONINGGROUPREQUESTLAUNCHCONFIGURATIONCPUOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_CREATEAUTOPROVISIONINGGROUPREQUESTLAUNCHCONFIGURATIONCPUOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateAutoProvisioningGroupRequestLaunchConfigurationCpuOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAutoProvisioningGroupRequestLaunchConfigurationCpuOptions& obj) { 
      DARABONBA_PTR_TO_JSON(Core, core_);
      DARABONBA_PTR_TO_JSON(ThreadsPerCore, threadsPerCore_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAutoProvisioningGroupRequestLaunchConfigurationCpuOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(Core, core_);
      DARABONBA_PTR_FROM_JSON(ThreadsPerCore, threadsPerCore_);
    };
    CreateAutoProvisioningGroupRequestLaunchConfigurationCpuOptions() = default ;
    CreateAutoProvisioningGroupRequestLaunchConfigurationCpuOptions(const CreateAutoProvisioningGroupRequestLaunchConfigurationCpuOptions &) = default ;
    CreateAutoProvisioningGroupRequestLaunchConfigurationCpuOptions(CreateAutoProvisioningGroupRequestLaunchConfigurationCpuOptions &&) = default ;
    CreateAutoProvisioningGroupRequestLaunchConfigurationCpuOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAutoProvisioningGroupRequestLaunchConfigurationCpuOptions() = default ;
    CreateAutoProvisioningGroupRequestLaunchConfigurationCpuOptions& operator=(const CreateAutoProvisioningGroupRequestLaunchConfigurationCpuOptions &) = default ;
    CreateAutoProvisioningGroupRequestLaunchConfigurationCpuOptions& operator=(CreateAutoProvisioningGroupRequestLaunchConfigurationCpuOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->core_ == nullptr
        && return this->threadsPerCore_ == nullptr; };
    // core Field Functions 
    bool hasCore() const { return this->core_ != nullptr;};
    void deleteCore() { this->core_ = nullptr;};
    inline int32_t core() const { DARABONBA_PTR_GET_DEFAULT(core_, 0) };
    inline CreateAutoProvisioningGroupRequestLaunchConfigurationCpuOptions& setCore(int32_t core) { DARABONBA_PTR_SET_VALUE(core_, core) };


    // threadsPerCore Field Functions 
    bool hasThreadsPerCore() const { return this->threadsPerCore_ != nullptr;};
    void deleteThreadsPerCore() { this->threadsPerCore_ = nullptr;};
    inline int32_t threadsPerCore() const { DARABONBA_PTR_GET_DEFAULT(threadsPerCore_, 0) };
    inline CreateAutoProvisioningGroupRequestLaunchConfigurationCpuOptions& setThreadsPerCore(int32_t threadsPerCore) { DARABONBA_PTR_SET_VALUE(threadsPerCore_, threadsPerCore) };


  protected:
    std::shared_ptr<int32_t> core_ = nullptr;
    std::shared_ptr<int32_t> threadsPerCore_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
