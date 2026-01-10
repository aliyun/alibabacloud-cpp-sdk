// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESANDBOXINPUT_HPP_
#define ALIBABACLOUD_MODELS_CREATESANDBOXINPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/NASConfig.hpp>
#include <alibabacloud/models/OSSMountConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class CreateSandboxInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSandboxInput& obj) { 
      DARABONBA_PTR_TO_JSON(nasConfig, nasConfig_);
      DARABONBA_PTR_TO_JSON(ossMountConfig, ossMountConfig_);
      DARABONBA_PTR_TO_JSON(sandboxId, sandboxId_);
      DARABONBA_PTR_TO_JSON(sandboxIdleTimeoutSeconds, sandboxIdleTimeoutSeconds_);
      DARABONBA_PTR_TO_JSON(templateName, templateName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSandboxInput& obj) { 
      DARABONBA_PTR_FROM_JSON(nasConfig, nasConfig_);
      DARABONBA_PTR_FROM_JSON(ossMountConfig, ossMountConfig_);
      DARABONBA_PTR_FROM_JSON(sandboxId, sandboxId_);
      DARABONBA_PTR_FROM_JSON(sandboxIdleTimeoutSeconds, sandboxIdleTimeoutSeconds_);
      DARABONBA_PTR_FROM_JSON(templateName, templateName_);
    };
    CreateSandboxInput() = default ;
    CreateSandboxInput(const CreateSandboxInput &) = default ;
    CreateSandboxInput(CreateSandboxInput &&) = default ;
    CreateSandboxInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSandboxInput() = default ;
    CreateSandboxInput& operator=(const CreateSandboxInput &) = default ;
    CreateSandboxInput& operator=(CreateSandboxInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nasConfig_ == nullptr
        && this->ossMountConfig_ == nullptr && this->sandboxId_ == nullptr && this->sandboxIdleTimeoutSeconds_ == nullptr && this->templateName_ == nullptr; };
    // nasConfig Field Functions 
    bool hasNasConfig() const { return this->nasConfig_ != nullptr;};
    void deleteNasConfig() { this->nasConfig_ = nullptr;};
    inline const NASConfig & getNasConfig() const { DARABONBA_PTR_GET_CONST(nasConfig_, NASConfig) };
    inline NASConfig getNasConfig() { DARABONBA_PTR_GET(nasConfig_, NASConfig) };
    inline CreateSandboxInput& setNasConfig(const NASConfig & nasConfig) { DARABONBA_PTR_SET_VALUE(nasConfig_, nasConfig) };
    inline CreateSandboxInput& setNasConfig(NASConfig && nasConfig) { DARABONBA_PTR_SET_RVALUE(nasConfig_, nasConfig) };


    // ossMountConfig Field Functions 
    bool hasOssMountConfig() const { return this->ossMountConfig_ != nullptr;};
    void deleteOssMountConfig() { this->ossMountConfig_ = nullptr;};
    inline const OSSMountConfig & getOssMountConfig() const { DARABONBA_PTR_GET_CONST(ossMountConfig_, OSSMountConfig) };
    inline OSSMountConfig getOssMountConfig() { DARABONBA_PTR_GET(ossMountConfig_, OSSMountConfig) };
    inline CreateSandboxInput& setOssMountConfig(const OSSMountConfig & ossMountConfig) { DARABONBA_PTR_SET_VALUE(ossMountConfig_, ossMountConfig) };
    inline CreateSandboxInput& setOssMountConfig(OSSMountConfig && ossMountConfig) { DARABONBA_PTR_SET_RVALUE(ossMountConfig_, ossMountConfig) };


    // sandboxId Field Functions 
    bool hasSandboxId() const { return this->sandboxId_ != nullptr;};
    void deleteSandboxId() { this->sandboxId_ = nullptr;};
    inline string getSandboxId() const { DARABONBA_PTR_GET_DEFAULT(sandboxId_, "") };
    inline CreateSandboxInput& setSandboxId(string sandboxId) { DARABONBA_PTR_SET_VALUE(sandboxId_, sandboxId) };


    // sandboxIdleTimeoutSeconds Field Functions 
    bool hasSandboxIdleTimeoutSeconds() const { return this->sandboxIdleTimeoutSeconds_ != nullptr;};
    void deleteSandboxIdleTimeoutSeconds() { this->sandboxIdleTimeoutSeconds_ = nullptr;};
    inline int32_t getSandboxIdleTimeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(sandboxIdleTimeoutSeconds_, 0) };
    inline CreateSandboxInput& setSandboxIdleTimeoutSeconds(int32_t sandboxIdleTimeoutSeconds) { DARABONBA_PTR_SET_VALUE(sandboxIdleTimeoutSeconds_, sandboxIdleTimeoutSeconds) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline CreateSandboxInput& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


  protected:
    shared_ptr<NASConfig> nasConfig_ {};
    shared_ptr<OSSMountConfig> ossMountConfig_ {};
    shared_ptr<string> sandboxId_ {};
    // 沙箱空闲超时时间（秒）
    shared_ptr<int32_t> sandboxIdleTimeoutSeconds_ {};
    // 模板名称（系统内部通过 templateName 查询 template_id）
    // 
    // This parameter is required.
    shared_ptr<string> templateName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
