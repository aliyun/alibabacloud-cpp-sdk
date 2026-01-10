// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SANDBOX_HPP_
#define ALIBABACLOUD_MODELS_SANDBOX_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class Sandbox : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Sandbox& obj) { 
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(endedAt, endedAt_);
      DARABONBA_PTR_TO_JSON(lastUpdatedAt, lastUpdatedAt_);
      DARABONBA_ANY_TO_JSON(metadata, metadata_);
      DARABONBA_PTR_TO_JSON(sandboxArn, sandboxArn_);
      DARABONBA_PTR_TO_JSON(sandboxId, sandboxId_);
      DARABONBA_PTR_TO_JSON(sandboxIdleTTLInSeconds, sandboxIdleTTLInSeconds_);
      DARABONBA_PTR_TO_JSON(sandboxIdleTimeoutSeconds, sandboxIdleTimeoutSeconds_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(templateId, templateId_);
      DARABONBA_PTR_TO_JSON(templateName, templateName_);
    };
    friend void from_json(const Darabonba::Json& j, Sandbox& obj) { 
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(endedAt, endedAt_);
      DARABONBA_PTR_FROM_JSON(lastUpdatedAt, lastUpdatedAt_);
      DARABONBA_ANY_FROM_JSON(metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(sandboxArn, sandboxArn_);
      DARABONBA_PTR_FROM_JSON(sandboxId, sandboxId_);
      DARABONBA_PTR_FROM_JSON(sandboxIdleTTLInSeconds, sandboxIdleTTLInSeconds_);
      DARABONBA_PTR_FROM_JSON(sandboxIdleTimeoutSeconds, sandboxIdleTimeoutSeconds_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(templateId, templateId_);
      DARABONBA_PTR_FROM_JSON(templateName, templateName_);
    };
    Sandbox() = default ;
    Sandbox(const Sandbox &) = default ;
    Sandbox(Sandbox &&) = default ;
    Sandbox(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Sandbox() = default ;
    Sandbox& operator=(const Sandbox &) = default ;
    Sandbox& operator=(Sandbox &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdAt_ == nullptr
        && this->endedAt_ == nullptr && this->lastUpdatedAt_ == nullptr && this->metadata_ == nullptr && this->sandboxArn_ == nullptr && this->sandboxId_ == nullptr
        && this->sandboxIdleTTLInSeconds_ == nullptr && this->sandboxIdleTimeoutSeconds_ == nullptr && this->status_ == nullptr && this->templateId_ == nullptr && this->templateName_ == nullptr; };
    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline Sandbox& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // endedAt Field Functions 
    bool hasEndedAt() const { return this->endedAt_ != nullptr;};
    void deleteEndedAt() { this->endedAt_ = nullptr;};
    inline string getEndedAt() const { DARABONBA_PTR_GET_DEFAULT(endedAt_, "") };
    inline Sandbox& setEndedAt(string endedAt) { DARABONBA_PTR_SET_VALUE(endedAt_, endedAt) };


    // lastUpdatedAt Field Functions 
    bool hasLastUpdatedAt() const { return this->lastUpdatedAt_ != nullptr;};
    void deleteLastUpdatedAt() { this->lastUpdatedAt_ = nullptr;};
    inline string getLastUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(lastUpdatedAt_, "") };
    inline Sandbox& setLastUpdatedAt(string lastUpdatedAt) { DARABONBA_PTR_SET_VALUE(lastUpdatedAt_, lastUpdatedAt) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
    inline Sandbox& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline Sandbox& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // sandboxArn Field Functions 
    bool hasSandboxArn() const { return this->sandboxArn_ != nullptr;};
    void deleteSandboxArn() { this->sandboxArn_ = nullptr;};
    inline string getSandboxArn() const { DARABONBA_PTR_GET_DEFAULT(sandboxArn_, "") };
    inline Sandbox& setSandboxArn(string sandboxArn) { DARABONBA_PTR_SET_VALUE(sandboxArn_, sandboxArn) };


    // sandboxId Field Functions 
    bool hasSandboxId() const { return this->sandboxId_ != nullptr;};
    void deleteSandboxId() { this->sandboxId_ = nullptr;};
    inline string getSandboxId() const { DARABONBA_PTR_GET_DEFAULT(sandboxId_, "") };
    inline Sandbox& setSandboxId(string sandboxId) { DARABONBA_PTR_SET_VALUE(sandboxId_, sandboxId) };


    // sandboxIdleTTLInSeconds Field Functions 
    bool hasSandboxIdleTTLInSeconds() const { return this->sandboxIdleTTLInSeconds_ != nullptr;};
    void deleteSandboxIdleTTLInSeconds() { this->sandboxIdleTTLInSeconds_ = nullptr;};
    inline int32_t getSandboxIdleTTLInSeconds() const { DARABONBA_PTR_GET_DEFAULT(sandboxIdleTTLInSeconds_, 0) };
    inline Sandbox& setSandboxIdleTTLInSeconds(int32_t sandboxIdleTTLInSeconds) { DARABONBA_PTR_SET_VALUE(sandboxIdleTTLInSeconds_, sandboxIdleTTLInSeconds) };


    // sandboxIdleTimeoutSeconds Field Functions 
    bool hasSandboxIdleTimeoutSeconds() const { return this->sandboxIdleTimeoutSeconds_ != nullptr;};
    void deleteSandboxIdleTimeoutSeconds() { this->sandboxIdleTimeoutSeconds_ = nullptr;};
    inline int32_t getSandboxIdleTimeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(sandboxIdleTimeoutSeconds_, 0) };
    inline Sandbox& setSandboxIdleTimeoutSeconds(int32_t sandboxIdleTimeoutSeconds) { DARABONBA_PTR_SET_VALUE(sandboxIdleTimeoutSeconds_, sandboxIdleTimeoutSeconds) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline Sandbox& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline Sandbox& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline Sandbox& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


  protected:
    // 沙箱创建时间
    // 
    // This parameter is required.
    shared_ptr<string> createdAt_ {};
    shared_ptr<string> endedAt_ {};
    // 最后更新时间
    shared_ptr<string> lastUpdatedAt_ {};
    Darabonba::Json metadata_ {};
    shared_ptr<string> sandboxArn_ {};
    // This parameter is required.
    shared_ptr<string> sandboxId_ {};
    shared_ptr<int32_t> sandboxIdleTTLInSeconds_ {};
    // 沙箱空闲超时时间（秒）
    shared_ptr<int32_t> sandboxIdleTimeoutSeconds_ {};
    // This parameter is required.
    shared_ptr<string> status_ {};
    // This parameter is required.
    shared_ptr<string> templateId_ {};
    shared_ptr<string> templateName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
