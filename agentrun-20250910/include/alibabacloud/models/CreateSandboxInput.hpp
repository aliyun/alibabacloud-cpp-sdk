// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESANDBOXINPUT_HPP_
#define ALIBABACLOUD_MODELS_CREATESANDBOXINPUT_HPP_
#include <darabonba/Core.hpp>
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
      DARABONBA_PTR_TO_JSON(sandboxId, sandboxId_);
      DARABONBA_PTR_TO_JSON(sandboxIdleTimeoutSeconds, sandboxIdleTimeoutSeconds_);
      DARABONBA_PTR_TO_JSON(templateName, templateName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSandboxInput& obj) { 
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
    virtual bool empty() const override { return this->sandboxId_ == nullptr
        && return this->sandboxIdleTimeoutSeconds_ == nullptr && return this->templateName_ == nullptr; };
    // sandboxId Field Functions 
    bool hasSandboxId() const { return this->sandboxId_ != nullptr;};
    void deleteSandboxId() { this->sandboxId_ = nullptr;};
    inline string sandboxId() const { DARABONBA_PTR_GET_DEFAULT(sandboxId_, "") };
    inline CreateSandboxInput& setSandboxId(string sandboxId) { DARABONBA_PTR_SET_VALUE(sandboxId_, sandboxId) };


    // sandboxIdleTimeoutSeconds Field Functions 
    bool hasSandboxIdleTimeoutSeconds() const { return this->sandboxIdleTimeoutSeconds_ != nullptr;};
    void deleteSandboxIdleTimeoutSeconds() { this->sandboxIdleTimeoutSeconds_ = nullptr;};
    inline int32_t sandboxIdleTimeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(sandboxIdleTimeoutSeconds_, 0) };
    inline CreateSandboxInput& setSandboxIdleTimeoutSeconds(int32_t sandboxIdleTimeoutSeconds) { DARABONBA_PTR_SET_VALUE(sandboxIdleTimeoutSeconds_, sandboxIdleTimeoutSeconds) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline CreateSandboxInput& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


  protected:
    std::shared_ptr<string> sandboxId_ = nullptr;
    // 沙箱空闲超时时间（秒）
    std::shared_ptr<int32_t> sandboxIdleTimeoutSeconds_ = nullptr;
    // 模板名称（系统内部通过 templateName 查询 template_id）
    // 
    // This parameter is required.
    std::shared_ptr<string> templateName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
