// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLICUPDATETEMPLATERUNTIMECONFIG_HPP_
#define ALIBABACLOUD_MODELS_PUBLICUPDATETEMPLATERUNTIMECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PublicUpdateTemplateLogConfig.hpp>
#include <alibabacloud/models/PublicUpdateTemplateSandboxConfig.hpp>
#include <alibabacloud/models/PublicUpdateTemplateVPCConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class PublicUpdateTemplateRuntimeConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublicUpdateTemplateRuntimeConfig& obj) { 
      DARABONBA_PTR_TO_JSON(cpu, cpu_);
      DARABONBA_PTR_TO_JSON(diskSize, diskSize_);
      DARABONBA_PTR_TO_JSON(internetAccess, internetAccess_);
      DARABONBA_PTR_TO_JSON(logConfig, logConfig_);
      DARABONBA_PTR_TO_JSON(memorySize, memorySize_);
      DARABONBA_PTR_TO_JSON(sandboxConfig, sandboxConfig_);
      DARABONBA_PTR_TO_JSON(vpcConfig, vpcConfig_);
    };
    friend void from_json(const Darabonba::Json& j, PublicUpdateTemplateRuntimeConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(diskSize, diskSize_);
      DARABONBA_PTR_FROM_JSON(internetAccess, internetAccess_);
      DARABONBA_PTR_FROM_JSON(logConfig, logConfig_);
      DARABONBA_PTR_FROM_JSON(memorySize, memorySize_);
      DARABONBA_PTR_FROM_JSON(sandboxConfig, sandboxConfig_);
      DARABONBA_PTR_FROM_JSON(vpcConfig, vpcConfig_);
    };
    PublicUpdateTemplateRuntimeConfig() = default ;
    PublicUpdateTemplateRuntimeConfig(const PublicUpdateTemplateRuntimeConfig &) = default ;
    PublicUpdateTemplateRuntimeConfig(PublicUpdateTemplateRuntimeConfig &&) = default ;
    PublicUpdateTemplateRuntimeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublicUpdateTemplateRuntimeConfig() = default ;
    PublicUpdateTemplateRuntimeConfig& operator=(const PublicUpdateTemplateRuntimeConfig &) = default ;
    PublicUpdateTemplateRuntimeConfig& operator=(PublicUpdateTemplateRuntimeConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cpu_ == nullptr
        && this->diskSize_ == nullptr && this->internetAccess_ == nullptr && this->logConfig_ == nullptr && this->memorySize_ == nullptr && this->sandboxConfig_ == nullptr
        && this->vpcConfig_ == nullptr; };
    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline float getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0.0) };
    inline PublicUpdateTemplateRuntimeConfig& setCpu(float cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // diskSize Field Functions 
    bool hasDiskSize() const { return this->diskSize_ != nullptr;};
    void deleteDiskSize() { this->diskSize_ = nullptr;};
    inline int32_t getDiskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, 0) };
    inline PublicUpdateTemplateRuntimeConfig& setDiskSize(int32_t diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


    // internetAccess Field Functions 
    bool hasInternetAccess() const { return this->internetAccess_ != nullptr;};
    void deleteInternetAccess() { this->internetAccess_ = nullptr;};
    inline bool getInternetAccess() const { DARABONBA_PTR_GET_DEFAULT(internetAccess_, false) };
    inline PublicUpdateTemplateRuntimeConfig& setInternetAccess(bool internetAccess) { DARABONBA_PTR_SET_VALUE(internetAccess_, internetAccess) };


    // logConfig Field Functions 
    bool hasLogConfig() const { return this->logConfig_ != nullptr;};
    void deleteLogConfig() { this->logConfig_ = nullptr;};
    inline const PublicUpdateTemplateLogConfig & getLogConfig() const { DARABONBA_PTR_GET_CONST(logConfig_, PublicUpdateTemplateLogConfig) };
    inline PublicUpdateTemplateLogConfig getLogConfig() { DARABONBA_PTR_GET(logConfig_, PublicUpdateTemplateLogConfig) };
    inline PublicUpdateTemplateRuntimeConfig& setLogConfig(const PublicUpdateTemplateLogConfig & logConfig) { DARABONBA_PTR_SET_VALUE(logConfig_, logConfig) };
    inline PublicUpdateTemplateRuntimeConfig& setLogConfig(PublicUpdateTemplateLogConfig && logConfig) { DARABONBA_PTR_SET_RVALUE(logConfig_, logConfig) };


    // memorySize Field Functions 
    bool hasMemorySize() const { return this->memorySize_ != nullptr;};
    void deleteMemorySize() { this->memorySize_ = nullptr;};
    inline int32_t getMemorySize() const { DARABONBA_PTR_GET_DEFAULT(memorySize_, 0) };
    inline PublicUpdateTemplateRuntimeConfig& setMemorySize(int32_t memorySize) { DARABONBA_PTR_SET_VALUE(memorySize_, memorySize) };


    // sandboxConfig Field Functions 
    bool hasSandboxConfig() const { return this->sandboxConfig_ != nullptr;};
    void deleteSandboxConfig() { this->sandboxConfig_ = nullptr;};
    inline const PublicUpdateTemplateSandboxConfig & getSandboxConfig() const { DARABONBA_PTR_GET_CONST(sandboxConfig_, PublicUpdateTemplateSandboxConfig) };
    inline PublicUpdateTemplateSandboxConfig getSandboxConfig() { DARABONBA_PTR_GET(sandboxConfig_, PublicUpdateTemplateSandboxConfig) };
    inline PublicUpdateTemplateRuntimeConfig& setSandboxConfig(const PublicUpdateTemplateSandboxConfig & sandboxConfig) { DARABONBA_PTR_SET_VALUE(sandboxConfig_, sandboxConfig) };
    inline PublicUpdateTemplateRuntimeConfig& setSandboxConfig(PublicUpdateTemplateSandboxConfig && sandboxConfig) { DARABONBA_PTR_SET_RVALUE(sandboxConfig_, sandboxConfig) };


    // vpcConfig Field Functions 
    bool hasVpcConfig() const { return this->vpcConfig_ != nullptr;};
    void deleteVpcConfig() { this->vpcConfig_ = nullptr;};
    inline const PublicUpdateTemplateVPCConfig & getVpcConfig() const { DARABONBA_PTR_GET_CONST(vpcConfig_, PublicUpdateTemplateVPCConfig) };
    inline PublicUpdateTemplateVPCConfig getVpcConfig() { DARABONBA_PTR_GET(vpcConfig_, PublicUpdateTemplateVPCConfig) };
    inline PublicUpdateTemplateRuntimeConfig& setVpcConfig(const PublicUpdateTemplateVPCConfig & vpcConfig) { DARABONBA_PTR_SET_VALUE(vpcConfig_, vpcConfig) };
    inline PublicUpdateTemplateRuntimeConfig& setVpcConfig(PublicUpdateTemplateVPCConfig && vpcConfig) { DARABONBA_PTR_SET_RVALUE(vpcConfig_, vpcConfig) };


  protected:
    // The number of vCPUs.
    shared_ptr<float> cpu_ {};
    // The system cloud disk size, in MB.
    shared_ptr<int32_t> diskSize_ {};
    // Specifies whether the sandbox is allowed to access the Internet.
    shared_ptr<bool> internetAccess_ {};
    // The log configuration.
    shared_ptr<PublicUpdateTemplateLogConfig> logConfig_ {};
    // The memory size, in MB.
    shared_ptr<int32_t> memorySize_ {};
    // The sandbox configuration.
    shared_ptr<PublicUpdateTemplateSandboxConfig> sandboxConfig_ {};
    // The VPC network configuration.
    shared_ptr<PublicUpdateTemplateVPCConfig> vpcConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
