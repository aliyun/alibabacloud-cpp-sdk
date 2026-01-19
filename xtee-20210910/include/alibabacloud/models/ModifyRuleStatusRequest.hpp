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
        && this->applyUserId_ == nullptr && this->applyUserName_ == nullptr && this->auditRemark_ == nullptr && this->auditUserId_ == nullptr && this->auditUserName_ == nullptr
        && this->consoleRuleId_ == nullptr && this->eventType_ == nullptr && this->regId_ == nullptr && this->ruleAuditType_ == nullptr && this->ruleId_ == nullptr
        && this->ruleVersionId_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ModifyRuleStatusRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // applyUserId Field Functions 
    bool hasApplyUserId() const { return this->applyUserId_ != nullptr;};
    void deleteApplyUserId() { this->applyUserId_ = nullptr;};
    inline string getApplyUserId() const { DARABONBA_PTR_GET_DEFAULT(applyUserId_, "") };
    inline ModifyRuleStatusRequest& setApplyUserId(string applyUserId) { DARABONBA_PTR_SET_VALUE(applyUserId_, applyUserId) };


    // applyUserName Field Functions 
    bool hasApplyUserName() const { return this->applyUserName_ != nullptr;};
    void deleteApplyUserName() { this->applyUserName_ = nullptr;};
    inline string getApplyUserName() const { DARABONBA_PTR_GET_DEFAULT(applyUserName_, "") };
    inline ModifyRuleStatusRequest& setApplyUserName(string applyUserName) { DARABONBA_PTR_SET_VALUE(applyUserName_, applyUserName) };


    // auditRemark Field Functions 
    bool hasAuditRemark() const { return this->auditRemark_ != nullptr;};
    void deleteAuditRemark() { this->auditRemark_ = nullptr;};
    inline string getAuditRemark() const { DARABONBA_PTR_GET_DEFAULT(auditRemark_, "") };
    inline ModifyRuleStatusRequest& setAuditRemark(string auditRemark) { DARABONBA_PTR_SET_VALUE(auditRemark_, auditRemark) };


    // auditUserId Field Functions 
    bool hasAuditUserId() const { return this->auditUserId_ != nullptr;};
    void deleteAuditUserId() { this->auditUserId_ = nullptr;};
    inline string getAuditUserId() const { DARABONBA_PTR_GET_DEFAULT(auditUserId_, "") };
    inline ModifyRuleStatusRequest& setAuditUserId(string auditUserId) { DARABONBA_PTR_SET_VALUE(auditUserId_, auditUserId) };


    // auditUserName Field Functions 
    bool hasAuditUserName() const { return this->auditUserName_ != nullptr;};
    void deleteAuditUserName() { this->auditUserName_ = nullptr;};
    inline string getAuditUserName() const { DARABONBA_PTR_GET_DEFAULT(auditUserName_, "") };
    inline ModifyRuleStatusRequest& setAuditUserName(string auditUserName) { DARABONBA_PTR_SET_VALUE(auditUserName_, auditUserName) };


    // consoleRuleId Field Functions 
    bool hasConsoleRuleId() const { return this->consoleRuleId_ != nullptr;};
    void deleteConsoleRuleId() { this->consoleRuleId_ = nullptr;};
    inline int64_t getConsoleRuleId() const { DARABONBA_PTR_GET_DEFAULT(consoleRuleId_, 0L) };
    inline ModifyRuleStatusRequest& setConsoleRuleId(int64_t consoleRuleId) { DARABONBA_PTR_SET_VALUE(consoleRuleId_, consoleRuleId) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline ModifyRuleStatusRequest& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline ModifyRuleStatusRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // ruleAuditType Field Functions 
    bool hasRuleAuditType() const { return this->ruleAuditType_ != nullptr;};
    void deleteRuleAuditType() { this->ruleAuditType_ = nullptr;};
    inline string getRuleAuditType() const { DARABONBA_PTR_GET_DEFAULT(ruleAuditType_, "") };
    inline ModifyRuleStatusRequest& setRuleAuditType(string ruleAuditType) { DARABONBA_PTR_SET_VALUE(ruleAuditType_, ruleAuditType) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline ModifyRuleStatusRequest& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleVersionId Field Functions 
    bool hasRuleVersionId() const { return this->ruleVersionId_ != nullptr;};
    void deleteRuleVersionId() { this->ruleVersionId_ = nullptr;};
    inline int64_t getRuleVersionId() const { DARABONBA_PTR_GET_DEFAULT(ruleVersionId_, 0L) };
    inline ModifyRuleStatusRequest& setRuleVersionId(int64_t ruleVersionId) { DARABONBA_PTR_SET_VALUE(ruleVersionId_, ruleVersionId) };


  protected:
    // Set the language type for requests and received messages, default value is **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // UID of the applicant.
    shared_ptr<string> applyUserId_ {};
    // Name of the applicant.
    shared_ptr<string> applyUserName_ {};
    // Approval remarks.
    shared_ptr<string> auditRemark_ {};
    // UID of the auditor.
    shared_ptr<string> auditUserId_ {};
    // Name of the auditor.
    shared_ptr<string> auditUserName_ {};
    // Primary key ID of the policy.
    shared_ptr<int64_t> consoleRuleId_ {};
    // Event type.
    shared_ptr<string> eventType_ {};
    // Region code.
    shared_ptr<string> regId_ {};
    // Audit status.
    shared_ptr<string> ruleAuditType_ {};
    // Policy ID.
    shared_ptr<string> ruleId_ {};
    // Primary key ID of the policy version.
    shared_ptr<int64_t> ruleVersionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
