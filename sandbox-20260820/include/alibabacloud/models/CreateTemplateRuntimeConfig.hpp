// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETEMPLATERUNTIMECONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATETEMPLATERUNTIMECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateTemplateLogConfig.hpp>
#include <alibabacloud/models/CreateTemplateSandboxConfig.hpp>
#include <vector>
#include <alibabacloud/models/CreateTemplateVPCConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sandbox20260820
{
namespace Models
{
  class CreateTemplateRuntimeConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTemplateRuntimeConfig& obj) { 
      DARABONBA_PTR_TO_JSON(cpu, cpu_);
      DARABONBA_PTR_TO_JSON(diskSize, diskSize_);
      DARABONBA_PTR_TO_JSON(internetAccess, internetAccess_);
      DARABONBA_PTR_TO_JSON(logConfig, logConfig_);
      DARABONBA_PTR_TO_JSON(memorySize, memorySize_);
      DARABONBA_PTR_TO_JSON(sandboxConfig, sandboxConfig_);
      DARABONBA_PTR_TO_JSON(vpcBindings, vpcBindings_);
      DARABONBA_PTR_TO_JSON(vpcConfig, vpcConfig_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTemplateRuntimeConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(diskSize, diskSize_);
      DARABONBA_PTR_FROM_JSON(internetAccess, internetAccess_);
      DARABONBA_PTR_FROM_JSON(logConfig, logConfig_);
      DARABONBA_PTR_FROM_JSON(memorySize, memorySize_);
      DARABONBA_PTR_FROM_JSON(sandboxConfig, sandboxConfig_);
      DARABONBA_PTR_FROM_JSON(vpcBindings, vpcBindings_);
      DARABONBA_PTR_FROM_JSON(vpcConfig, vpcConfig_);
    };
    CreateTemplateRuntimeConfig() = default ;
    CreateTemplateRuntimeConfig(const CreateTemplateRuntimeConfig &) = default ;
    CreateTemplateRuntimeConfig(CreateTemplateRuntimeConfig &&) = default ;
    CreateTemplateRuntimeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTemplateRuntimeConfig() = default ;
    CreateTemplateRuntimeConfig& operator=(const CreateTemplateRuntimeConfig &) = default ;
    CreateTemplateRuntimeConfig& operator=(CreateTemplateRuntimeConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cpu_ == nullptr
        && this->diskSize_ == nullptr && this->internetAccess_ == nullptr && this->logConfig_ == nullptr && this->memorySize_ == nullptr && this->sandboxConfig_ == nullptr
        && this->vpcBindings_ == nullptr && this->vpcConfig_ == nullptr; };
    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline float getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0.0) };
    inline CreateTemplateRuntimeConfig& setCpu(float cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // diskSize Field Functions 
    bool hasDiskSize() const { return this->diskSize_ != nullptr;};
    void deleteDiskSize() { this->diskSize_ = nullptr;};
    inline int32_t getDiskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, 0) };
    inline CreateTemplateRuntimeConfig& setDiskSize(int32_t diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


    // internetAccess Field Functions 
    bool hasInternetAccess() const { return this->internetAccess_ != nullptr;};
    void deleteInternetAccess() { this->internetAccess_ = nullptr;};
    inline bool getInternetAccess() const { DARABONBA_PTR_GET_DEFAULT(internetAccess_, false) };
    inline CreateTemplateRuntimeConfig& setInternetAccess(bool internetAccess) { DARABONBA_PTR_SET_VALUE(internetAccess_, internetAccess) };


    // logConfig Field Functions 
    bool hasLogConfig() const { return this->logConfig_ != nullptr;};
    void deleteLogConfig() { this->logConfig_ = nullptr;};
    inline const CreateTemplateLogConfig & getLogConfig() const { DARABONBA_PTR_GET_CONST(logConfig_, CreateTemplateLogConfig) };
    inline CreateTemplateLogConfig getLogConfig() { DARABONBA_PTR_GET(logConfig_, CreateTemplateLogConfig) };
    inline CreateTemplateRuntimeConfig& setLogConfig(const CreateTemplateLogConfig & logConfig) { DARABONBA_PTR_SET_VALUE(logConfig_, logConfig) };
    inline CreateTemplateRuntimeConfig& setLogConfig(CreateTemplateLogConfig && logConfig) { DARABONBA_PTR_SET_RVALUE(logConfig_, logConfig) };


    // memorySize Field Functions 
    bool hasMemorySize() const { return this->memorySize_ != nullptr;};
    void deleteMemorySize() { this->memorySize_ = nullptr;};
    inline int32_t getMemorySize() const { DARABONBA_PTR_GET_DEFAULT(memorySize_, 0) };
    inline CreateTemplateRuntimeConfig& setMemorySize(int32_t memorySize) { DARABONBA_PTR_SET_VALUE(memorySize_, memorySize) };


    // sandboxConfig Field Functions 
    bool hasSandboxConfig() const { return this->sandboxConfig_ != nullptr;};
    void deleteSandboxConfig() { this->sandboxConfig_ = nullptr;};
    inline const CreateTemplateSandboxConfig & getSandboxConfig() const { DARABONBA_PTR_GET_CONST(sandboxConfig_, CreateTemplateSandboxConfig) };
    inline CreateTemplateSandboxConfig getSandboxConfig() { DARABONBA_PTR_GET(sandboxConfig_, CreateTemplateSandboxConfig) };
    inline CreateTemplateRuntimeConfig& setSandboxConfig(const CreateTemplateSandboxConfig & sandboxConfig) { DARABONBA_PTR_SET_VALUE(sandboxConfig_, sandboxConfig) };
    inline CreateTemplateRuntimeConfig& setSandboxConfig(CreateTemplateSandboxConfig && sandboxConfig) { DARABONBA_PTR_SET_RVALUE(sandboxConfig_, sandboxConfig) };


    // vpcBindings Field Functions 
    bool hasVpcBindings() const { return this->vpcBindings_ != nullptr;};
    void deleteVpcBindings() { this->vpcBindings_ = nullptr;};
    inline const vector<string> & getVpcBindings() const { DARABONBA_PTR_GET_CONST(vpcBindings_, vector<string>) };
    inline vector<string> getVpcBindings() { DARABONBA_PTR_GET(vpcBindings_, vector<string>) };
    inline CreateTemplateRuntimeConfig& setVpcBindings(const vector<string> & vpcBindings) { DARABONBA_PTR_SET_VALUE(vpcBindings_, vpcBindings) };
    inline CreateTemplateRuntimeConfig& setVpcBindings(vector<string> && vpcBindings) { DARABONBA_PTR_SET_RVALUE(vpcBindings_, vpcBindings) };


    // vpcConfig Field Functions 
    bool hasVpcConfig() const { return this->vpcConfig_ != nullptr;};
    void deleteVpcConfig() { this->vpcConfig_ = nullptr;};
    inline const CreateTemplateVPCConfig & getVpcConfig() const { DARABONBA_PTR_GET_CONST(vpcConfig_, CreateTemplateVPCConfig) };
    inline CreateTemplateVPCConfig getVpcConfig() { DARABONBA_PTR_GET(vpcConfig_, CreateTemplateVPCConfig) };
    inline CreateTemplateRuntimeConfig& setVpcConfig(const CreateTemplateVPCConfig & vpcConfig) { DARABONBA_PTR_SET_VALUE(vpcConfig_, vpcConfig) };
    inline CreateTemplateRuntimeConfig& setVpcConfig(CreateTemplateVPCConfig && vpcConfig) { DARABONBA_PTR_SET_RVALUE(vpcConfig_, vpcConfig) };


  protected:
    // The CPU specifications of the sandbox instance, in cores.
    shared_ptr<float> cpu_ {};
    // The disk specifications of the sandbox instance, in MB.
    shared_ptr<int32_t> diskSize_ {};
    // Specifies whether the sandbox instance is allowed to access the Internet.
    shared_ptr<bool> internetAccess_ {};
    // The log delivery configuration of the sandbox instance.
    shared_ptr<CreateTemplateLogConfig> logConfig_ {};
    // The memory specifications of the sandbox instance, in MB.
    shared_ptr<int32_t> memorySize_ {};
    // The image and startup configuration of the sandbox instance.
    shared_ptr<CreateTemplateSandboxConfig> sandboxConfig_ {};
    // A non-empty array configures the set of source VPCs that are allowed to access the sandbox data endpoint. Omitting the field, setting it to null, or providing an empty array indicates that no inbound bindings are configured. This configuration is independent of the egress network vpcConfig and does not modify the API key source policy. A null value is treated as omitted to maintain compatibility with SDK requests where the field is not set. You can update or clear the list by calling UpdateTemplate. The changes take effect after a new version is successfully built, and existing sandboxes continue to use the original configuration.
    shared_ptr<vector<string>> vpcBindings_ {};
    // The VPC configuration of the sandbox instance.
    shared_ptr<CreateTemplateVPCConfig> vpcConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sandbox20260820
#endif
