// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYRULESTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYRULESTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class ModifyRuleStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyRuleStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(applyUserId, applyUserId_);
      DARABONBA_PTR_TO_JSON(applyUserName, applyUserName_);
      DARABONBA_PTR_TO_JSON(auditRemark, auditRemark_);
      DARABONBA_PTR_TO_JSON(auditUserId, auditUserId_);
      DARABONBA_PTR_TO_JSON(auditUserName, auditUserName_);
      DARABONBA_PTR_TO_JSON(consoleRuleId, consoleRuleId_);
      DARABONBA_PTR_TO_JSON(eventType, eventType_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(ruleAuditType, ruleAuditType_);
      DARABONBA_PTR_TO_JSON(ruleId, ruleId_);
      DARABONBA_PTR_TO_JSON(ruleVersionId, ruleVersionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyRuleStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(applyUserId, applyUserId_);
      DARABONBA_PTR_FROM_JSON(applyUserName, applyUserName_);
      DARABONBA_PTR_FROM_JSON(auditRemark, auditRemark_);
      DARABONBA_PTR_FROM_JSON(auditUserId, auditUserId_);
      DARABONBA_PTR_FROM_JSON(auditUserName, auditUserName_);
      DARABONBA_PTR_FROM_JSON(consoleRuleId, consoleRuleId_);
      DARABONBA_PTR_FROM_JSON(eventType, eventType_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(ruleAuditType, ruleAuditType_);
      DARABONBA_PTR_FROM_JSON(ruleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(ruleVersionId, ruleVersionId_);
    };
    ModifyRuleStatusRequest() = default ;
    ModifyRuleStatusRequest(const ModifyRuleStatusRequest &) = default ;
    ModifyRuleStatusRequest(ModifyRuleStatusRequest &&) = default ;
    ModifyRuleStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyRuleStatusRequest() = default ;
    ModifyRuleStatusRequest& operator=(const ModifyRuleStatusRequest &) = default ;
    ModifyRuleStatusRequest& operator=(ModifyRuleStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->applyUserId_ == nullptr && return this->applyUserName_ == nullptr && return this->auditRemark_ == nullptr && return this->auditUserId_ == nullptr && return this->auditUserName_ == nullptr
        && return this->consoleRuleId_ == nullptr && return this->eventType_ == nullptr && return this->regId_ == nullptr && return this->ruleAuditType_ == nullptr && return this->ruleId_ == nullptr
        && return this->ruleVersionId_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ModifyRuleStatusRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // applyUserId Field Functions 
    bool hasApplyUserId() const { return this->applyUserId_ != nullptr;};
    void deleteApplyUserId() { this->applyUserId_ = nullptr;};
    inline string applyUserId() const { DARABONBA_PTR_GET_DEFAULT(applyUserId_, "") };
    inline ModifyRuleStatusRequest& setApplyUserId(string applyUserId) { DARABONBA_PTR_SET_VALUE(applyUserId_, applyUserId) };


    // applyUserName Field Functions 
    bool hasApplyUserName() const { return this->applyUserName_ != nullptr;};
    void deleteApplyUserName() { this->applyUserName_ = nullptr;};
    inline string applyUserName() const { DARABONBA_PTR_GET_DEFAULT(applyUserName_, "") };
    inline ModifyRuleStatusRequest& setApplyUserName(string applyUserName) { DARABONBA_PTR_SET_VALUE(applyUserName_, applyUserName) };


    // auditRemark Field Functions 
    bool hasAuditRemark() const { return this->auditRemark_ != nullptr;};
    void deleteAuditRemark() { this->auditRemark_ = nullptr;};
    inline string auditRemark() const { DARABONBA_PTR_GET_DEFAULT(auditRemark_, "") };
    inline ModifyRuleStatusRequest& setAuditRemark(string auditRemark) { DARABONBA_PTR_SET_VALUE(auditRemark_, auditRemark) };


    // auditUserId Field Functions 
    bool hasAuditUserId() const { return this->auditUserId_ != nullptr;};
    void deleteAuditUserId() { this->auditUserId_ = nullptr;};
    inline string auditUserId() const { DARABONBA_PTR_GET_DEFAULT(auditUserId_, "") };
    inline ModifyRuleStatusRequest& setAuditUserId(string auditUserId) { DARABONBA_PTR_SET_VALUE(auditUserId_, auditUserId) };


    // auditUserName Field Functions 
    bool hasAuditUserName() const { return this->auditUserName_ != nullptr;};
    void deleteAuditUserName() { this->auditUserName_ = nullptr;};
    inline string auditUserName() const { DARABONBA_PTR_GET_DEFAULT(auditUserName_, "") };
    inline ModifyRuleStatusRequest& setAuditUserName(string auditUserName) { DARABONBA_PTR_SET_VALUE(auditUserName_, auditUserName) };


    // consoleRuleId Field Functions 
    bool hasConsoleRuleId() const { return this->consoleRuleId_ != nullptr;};
    void deleteConsoleRuleId() { this->consoleRuleId_ = nullptr;};
    inline int64_t consoleRuleId() const { DARABONBA_PTR_GET_DEFAULT(consoleRuleId_, 0L) };
    inline ModifyRuleStatusRequest& setConsoleRuleId(int64_t consoleRuleId) { DARABONBA_PTR_SET_VALUE(consoleRuleId_, consoleRuleId) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline ModifyRuleStatusRequest& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline ModifyRuleStatusRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // ruleAuditType Field Functions 
    bool hasRuleAuditType() const { return this->ruleAuditType_ != nullptr;};
    void deleteRuleAuditType() { this->ruleAuditType_ = nullptr;};
    inline string ruleAuditType() const { DARABONBA_PTR_GET_DEFAULT(ruleAuditType_, "") };
    inline ModifyRuleStatusRequest& setRuleAuditType(string ruleAuditType) { DARABONBA_PTR_SET_VALUE(ruleAuditType_, ruleAuditType) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline ModifyRuleStatusRequest& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleVersionId Field Functions 
    bool hasRuleVersionId() const { return this->ruleVersionId_ != nullptr;};
    void deleteRuleVersionId() { this->ruleVersionId_ = nullptr;};
    inline int64_t ruleVersionId() const { DARABONBA_PTR_GET_DEFAULT(ruleVersionId_, 0L) };
    inline ModifyRuleStatusRequest& setRuleVersionId(int64_t ruleVersionId) { DARABONBA_PTR_SET_VALUE(ruleVersionId_, ruleVersionId) };


  protected:
    // Set the language type for requests and received messages, default value is **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // UID of the applicant.
    std::shared_ptr<string> applyUserId_ = nullptr;
    // Name of the applicant.
    std::shared_ptr<string> applyUserName_ = nullptr;
    // Approval remarks.
    std::shared_ptr<string> auditRemark_ = nullptr;
    // UID of the auditor.
    std::shared_ptr<string> auditUserId_ = nullptr;
    // Name of the auditor.
    std::shared_ptr<string> auditUserName_ = nullptr;
    // Primary key ID of the policy.
    std::shared_ptr<int64_t> consoleRuleId_ = nullptr;
    // Event type.
    std::shared_ptr<string> eventType_ = nullptr;
    // Region code.
    std::shared_ptr<string> regId_ = nullptr;
    // Audit status.
    std::shared_ptr<string> ruleAuditType_ = nullptr;
    // Policy ID.
    std::shared_ptr<string> ruleId_ = nullptr;
    // Primary key ID of the policy version.
    std::shared_ptr<int64_t> ruleVersionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
