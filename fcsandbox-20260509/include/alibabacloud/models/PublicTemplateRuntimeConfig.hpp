// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLICTEMPLATERUNTIMECONFIG_HPP_
#define ALIBABACLOUD_MODELS_PUBLICTEMPLATERUNTIMECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PublicTemplateLogConfig.hpp>
#include <alibabacloud/models/PublicTemplateSandboxConfig.hpp>
#include <alibabacloud/models/PublicTemplateVPCConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class PublicTemplateRuntimeConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublicTemplateRuntimeConfig& obj) { 
      DARABONBA_PTR_TO_JSON(cpu, cpu_);
      DARABONBA_PTR_TO_JSON(diskSize, diskSize_);
      DARABONBA_PTR_TO_JSON(internetAccess, internetAccess_);
      DARABONBA_PTR_TO_JSON(logConfig, logConfig_);
      DARABONBA_PTR_TO_JSON(memorySize, memorySize_);
      DARABONBA_PTR_TO_JSON(sandboxConfig, sandboxConfig_);
      DARABONBA_PTR_TO_JSON(vpcConfig, vpcConfig_);
    };
    friend void from_json(const Darabonba::Json& j, PublicTemplateRuntimeConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(diskSize, diskSize_);
      DARABONBA_PTR_FROM_JSON(internetAccess, internetAccess_);
      DARABONBA_PTR_FROM_JSON(logConfig, logConfig_);
      DARABONBA_PTR_FROM_JSON(memorySize, memorySize_);
      DARABONBA_PTR_FROM_JSON(sandboxConfig, sandboxConfig_);
      DARABONBA_PTR_FROM_JSON(vpcConfig, vpcConfig_);
    };
    PublicTemplateRuntimeConfig() = default ;
    PublicTemplateRuntimeConfig(const PublicTemplateRuntimeConfig &) = default ;
    PublicTemplateRuntimeConfig(PublicTemplateRuntimeConfig &&) = default ;
    PublicTemplateRuntimeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublicTemplateRuntimeConfig() = default ;
    PublicTemplateRuntimeConfig& operator=(const PublicTemplateRuntimeConfig &) = default ;
    PublicTemplateRuntimeConfig& operator=(PublicTemplateRuntimeConfig &&) = default ;
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
    inline PublicTemplateRuntimeConfig& setCpu(float cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // diskSize Field Functions 
    bool hasDiskSize() const { return this->diskSize_ != nullptr;};
    void deleteDiskSize() { this->diskSize_ = nullptr;};
    inline int32_t getDiskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, 0) };
    inline PublicTemplateRuntimeConfig& setDiskSize(int32_t diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


    // internetAccess Field Functions 
    bool hasInternetAccess() const { return this->internetAccess_ != nullptr;};
    void deleteInternetAccess() { this->internetAccess_ = nullptr;};
    inline bool getInternetAccess() const { DARABONBA_PTR_GET_DEFAULT(internetAccess_, false) };
    inline PublicTemplateRuntimeConfig& setInternetAccess(bool internetAccess) { DARABONBA_PTR_SET_VALUE(internetAccess_, internetAccess) };


    // logConfig Field Functions 
    bool hasLogConfig() const { return this->logConfig_ != nullptr;};
    void deleteLogConfig() { this->logConfig_ = nullptr;};
    inline const PublicTemplateLogConfig & getLogConfig() const { DARABONBA_PTR_GET_CONST(logConfig_, PublicTemplateLogConfig) };
    inline PublicTemplateLogConfig getLogConfig() { DARABONBA_PTR_GET(logConfig_, PublicTemplateLogConfig) };
    inline PublicTemplateRuntimeConfig& setLogConfig(const PublicTemplateLogConfig & logConfig) { DARABONBA_PTR_SET_VALUE(logConfig_, logConfig) };
    inline PublicTemplateRuntimeConfig& setLogConfig(PublicTemplateLogConfig && logConfig) { DARABONBA_PTR_SET_RVALUE(logConfig_, logConfig) };


    // memorySize Field Functions 
    bool hasMemorySize() const { return this->memorySize_ != nullptr;};
    void deleteMemorySize() { this->memorySize_ = nullptr;};
    inline int32_t getMemorySize() const { DARABONBA_PTR_GET_DEFAULT(memorySize_, 0) };
    inline PublicTemplateRuntimeConfig& setMemorySize(int32_t memorySize) { DARABONBA_PTR_SET_VALUE(memorySize_, memorySize) };


    // sandboxConfig Field Functions 
    bool hasSandboxConfig() const { return this->sandboxConfig_ != nullptr;};
    void deleteSandboxConfig() { this->sandboxConfig_ = nullptr;};
    inline const PublicTemplateSandboxConfig & getSandboxConfig() const { DARABONBA_PTR_GET_CONST(sandboxConfig_, PublicTemplateSandboxConfig) };
    inline PublicTemplateSandboxConfig getSandboxConfig() { DARABONBA_PTR_GET(sandboxConfig_, PublicTemplateSandboxConfig) };
    inline PublicTemplateRuntimeConfig& setSandboxConfig(const PublicTemplateSandboxConfig & sandboxConfig) { DARABONBA_PTR_SET_VALUE(sandboxConfig_, sandboxConfig) };
    inline PublicTemplateRuntimeConfig& setSandboxConfig(PublicTemplateSandboxConfig && sandboxConfig) { DARABONBA_PTR_SET_RVALUE(sandboxConfig_, sandboxConfig) };


    // vpcConfig Field Functions 
    bool hasVpcConfig() const { return this->vpcConfig_ != nullptr;};
    void deleteVpcConfig() { this->vpcConfig_ = nullptr;};
    inline const PublicTemplateVPCConfig & getVpcConfig() const { DARABONBA_PTR_GET_CONST(vpcConfig_, PublicTemplateVPCConfig) };
    inline PublicTemplateVPCConfig getVpcConfig() { DARABONBA_PTR_GET(vpcConfig_, PublicTemplateVPCConfig) };
    inline PublicTemplateRuntimeConfig& setVpcConfig(const PublicTemplateVPCConfig & vpcConfig) { DARABONBA_PTR_SET_VALUE(vpcConfig_, vpcConfig) };
    inline PublicTemplateRuntimeConfig& setVpcConfig(PublicTemplateVPCConfig && vpcConfig) { DARABONBA_PTR_SET_RVALUE(vpcConfig_, vpcConfig) };


  protected:
    shared_ptr<float> cpu_ {};
    shared_ptr<int32_t> diskSize_ {};
    shared_ptr<bool> internetAccess_ {};
    shared_ptr<PublicTemplateLogConfig> logConfig_ {};
    shared_ptr<int32_t> memorySize_ {};
    shared_ptr<PublicTemplateSandboxConfig> sandboxConfig_ {};
    shared_ptr<PublicTemplateVPCConfig> vpcConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
