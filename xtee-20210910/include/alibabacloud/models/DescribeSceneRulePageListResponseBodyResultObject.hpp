// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCENERULEPAGELISTRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCENERULEPAGELISTRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSceneRulePageListResponseBodyResultObjectConsoleAudit.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeSceneRulePageListResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSceneRulePageListResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(authType, authType_);
      DARABONBA_PTR_TO_JSON(consoleAudit, consoleAudit_);
      DARABONBA_PTR_TO_JSON(eventCode, eventCode_);
      DARABONBA_PTR_TO_JSON(eventName, eventName_);
      DARABONBA_PTR_TO_JSON(eventType, eventType_);
      DARABONBA_PTR_TO_JSON(externalRuleName, externalRuleName_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(mainRuleId, mainRuleId_);
      DARABONBA_PTR_TO_JSON(priority, priority_);
      DARABONBA_PTR_TO_JSON(ruleAuthType, ruleAuthType_);
      DARABONBA_PTR_TO_JSON(ruleId, ruleId_);
      DARABONBA_PTR_TO_JSON(ruleMemo, ruleMemo_);
      DARABONBA_PTR_TO_JSON(ruleName, ruleName_);
      DARABONBA_PTR_TO_JSON(ruleStatus, ruleStatus_);
      DARABONBA_PTR_TO_JSON(ruleType, ruleType_);
      DARABONBA_PTR_TO_JSON(ruleVersionId, ruleVersionId_);
      DARABONBA_PTR_TO_JSON(templateId, templateId_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSceneRulePageListResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(authType, authType_);
      DARABONBA_PTR_FROM_JSON(consoleAudit, consoleAudit_);
      DARABONBA_PTR_FROM_JSON(eventCode, eventCode_);
      DARABONBA_PTR_FROM_JSON(eventName, eventName_);
      DARABONBA_PTR_FROM_JSON(eventType, eventType_);
      DARABONBA_PTR_FROM_JSON(externalRuleName, externalRuleName_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(mainRuleId, mainRuleId_);
      DARABONBA_PTR_FROM_JSON(priority, priority_);
      DARABONBA_PTR_FROM_JSON(ruleAuthType, ruleAuthType_);
      DARABONBA_PTR_FROM_JSON(ruleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(ruleMemo, ruleMemo_);
      DARABONBA_PTR_FROM_JSON(ruleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(ruleStatus, ruleStatus_);
      DARABONBA_PTR_FROM_JSON(ruleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(ruleVersionId, ruleVersionId_);
      DARABONBA_PTR_FROM_JSON(templateId, templateId_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    DescribeSceneRulePageListResponseBodyResultObject() = default ;
    DescribeSceneRulePageListResponseBodyResultObject(const DescribeSceneRulePageListResponseBodyResultObject &) = default ;
    DescribeSceneRulePageListResponseBodyResultObject(DescribeSceneRulePageListResponseBodyResultObject &&) = default ;
    DescribeSceneRulePageListResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSceneRulePageListResponseBodyResultObject() = default ;
    DescribeSceneRulePageListResponseBodyResultObject& operator=(const DescribeSceneRulePageListResponseBodyResultObject &) = default ;
    DescribeSceneRulePageListResponseBodyResultObject& operator=(DescribeSceneRulePageListResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authType_ == nullptr
        && return this->consoleAudit_ == nullptr && return this->eventCode_ == nullptr && return this->eventName_ == nullptr && return this->eventType_ == nullptr && return this->externalRuleName_ == nullptr
        && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->id_ == nullptr && return this->mainRuleId_ == nullptr && return this->priority_ == nullptr
        && return this->ruleAuthType_ == nullptr && return this->ruleId_ == nullptr && return this->ruleMemo_ == nullptr && return this->ruleName_ == nullptr && return this->ruleStatus_ == nullptr
        && return this->ruleType_ == nullptr && return this->ruleVersionId_ == nullptr && return this->templateId_ == nullptr && return this->version_ == nullptr; };
    // authType Field Functions 
    bool hasAuthType() const { return this->authType_ != nullptr;};
    void deleteAuthType() { this->authType_ = nullptr;};
    inline string authType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
    inline DescribeSceneRulePageListResponseBodyResultObject& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


    // consoleAudit Field Functions 
    bool hasConsoleAudit() const { return this->consoleAudit_ != nullptr;};
    void deleteConsoleAudit() { this->consoleAudit_ = nullptr;};
    inline const Models::DescribeSceneRulePageListResponseBodyResultObjectConsoleAudit & consoleAudit() const { DARABONBA_PTR_GET_CONST(consoleAudit_, Models::DescribeSceneRulePageListResponseBodyResultObjectConsoleAudit) };
    inline Models::DescribeSceneRulePageListResponseBodyResultObjectConsoleAudit consoleAudit() { DARABONBA_PTR_GET(consoleAudit_, Models::DescribeSceneRulePageListResponseBodyResultObjectConsoleAudit) };
    inline DescribeSceneRulePageListResponseBodyResultObject& setConsoleAudit(const Models::DescribeSceneRulePageListResponseBodyResultObjectConsoleAudit & consoleAudit) { DARABONBA_PTR_SET_VALUE(consoleAudit_, consoleAudit) };
    inline DescribeSceneRulePageListResponseBodyResultObject& setConsoleAudit(Models::DescribeSceneRulePageListResponseBodyResultObjectConsoleAudit && consoleAudit) { DARABONBA_PTR_SET_RVALUE(consoleAudit_, consoleAudit) };


    // eventCode Field Functions 
    bool hasEventCode() const { return this->eventCode_ != nullptr;};
    void deleteEventCode() { this->eventCode_ = nullptr;};
    inline string eventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
    inline DescribeSceneRulePageListResponseBodyResultObject& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline DescribeSceneRulePageListResponseBodyResultObject& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline DescribeSceneRulePageListResponseBodyResultObject& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // externalRuleName Field Functions 
    bool hasExternalRuleName() const { return this->externalRuleName_ != nullptr;};
    void deleteExternalRuleName() { this->externalRuleName_ = nullptr;};
    inline string externalRuleName() const { DARABONBA_PTR_GET_DEFAULT(externalRuleName_, "") };
    inline DescribeSceneRulePageListResponseBodyResultObject& setExternalRuleName(string externalRuleName) { DARABONBA_PTR_SET_VALUE(externalRuleName_, externalRuleName) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline DescribeSceneRulePageListResponseBodyResultObject& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline DescribeSceneRulePageListResponseBodyResultObject& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeSceneRulePageListResponseBodyResultObject& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // mainRuleId Field Functions 
    bool hasMainRuleId() const { return this->mainRuleId_ != nullptr;};
    void deleteMainRuleId() { this->mainRuleId_ = nullptr;};
    inline string mainRuleId() const { DARABONBA_PTR_GET_DEFAULT(mainRuleId_, "") };
    inline DescribeSceneRulePageListResponseBodyResultObject& setMainRuleId(string mainRuleId) { DARABONBA_PTR_SET_VALUE(mainRuleId_, mainRuleId) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int64_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0L) };
    inline DescribeSceneRulePageListResponseBodyResultObject& setPriority(int64_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // ruleAuthType Field Functions 
    bool hasRuleAuthType() const { return this->ruleAuthType_ != nullptr;};
    void deleteRuleAuthType() { this->ruleAuthType_ = nullptr;};
    inline string ruleAuthType() const { DARABONBA_PTR_GET_DEFAULT(ruleAuthType_, "") };
    inline DescribeSceneRulePageListResponseBodyResultObject& setRuleAuthType(string ruleAuthType) { DARABONBA_PTR_SET_VALUE(ruleAuthType_, ruleAuthType) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline DescribeSceneRulePageListResponseBodyResultObject& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleMemo Field Functions 
    bool hasRuleMemo() const { return this->ruleMemo_ != nullptr;};
    void deleteRuleMemo() { this->ruleMemo_ = nullptr;};
    inline string ruleMemo() const { DARABONBA_PTR_GET_DEFAULT(ruleMemo_, "") };
    inline DescribeSceneRulePageListResponseBodyResultObject& setRuleMemo(string ruleMemo) { DARABONBA_PTR_SET_VALUE(ruleMemo_, ruleMemo) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeSceneRulePageListResponseBodyResultObject& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleStatus Field Functions 
    bool hasRuleStatus() const { return this->ruleStatus_ != nullptr;};
    void deleteRuleStatus() { this->ruleStatus_ = nullptr;};
    inline string ruleStatus() const { DARABONBA_PTR_GET_DEFAULT(ruleStatus_, "") };
    inline DescribeSceneRulePageListResponseBodyResultObject& setRuleStatus(string ruleStatus) { DARABONBA_PTR_SET_VALUE(ruleStatus_, ruleStatus) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline DescribeSceneRulePageListResponseBodyResultObject& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // ruleVersionId Field Functions 
    bool hasRuleVersionId() const { return this->ruleVersionId_ != nullptr;};
    void deleteRuleVersionId() { this->ruleVersionId_ = nullptr;};
    inline int64_t ruleVersionId() const { DARABONBA_PTR_GET_DEFAULT(ruleVersionId_, 0L) };
    inline DescribeSceneRulePageListResponseBodyResultObject& setRuleVersionId(int64_t ruleVersionId) { DARABONBA_PTR_SET_VALUE(ruleVersionId_, ruleVersionId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline DescribeSceneRulePageListResponseBodyResultObject& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int32_t version() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
    inline DescribeSceneRulePageListResponseBodyResultObject& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // Service authorization type
    std::shared_ptr<string> authType_ = nullptr;
    // Audit object
    std::shared_ptr<Models::DescribeSceneRulePageListResponseBodyResultObjectConsoleAudit> consoleAudit_ = nullptr;
    // Event code
    std::shared_ptr<string> eventCode_ = nullptr;
    // Event name.
    std::shared_ptr<string> eventName_ = nullptr;
    // Event type
    std::shared_ptr<string> eventType_ = nullptr;
    // External rule name
    std::shared_ptr<string> externalRuleName_ = nullptr;
    // Creation time.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // Modification time
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    // Primary key ID of the rule
    std::shared_ptr<int64_t> id_ = nullptr;
    // Main rule ID
    std::shared_ptr<string> mainRuleId_ = nullptr;
    // Strategy priority, where a higher number indicates a higher priority.
    std::shared_ptr<int64_t> priority_ = nullptr;
    // Rule Auth type
    std::shared_ptr<string> ruleAuthType_ = nullptr;
    // Strategy ID
    std::shared_ptr<string> ruleId_ = nullptr;
    // Strategy description
    std::shared_ptr<string> ruleMemo_ = nullptr;
    // Strategy name
    std::shared_ptr<string> ruleName_ = nullptr;
    // Strategy status
    std::shared_ptr<string> ruleStatus_ = nullptr;
    // Rule type
    std::shared_ptr<string> ruleType_ = nullptr;
    // Primary key ID of the rule version
    std::shared_ptr<int64_t> ruleVersionId_ = nullptr;
    // Template ID
    std::shared_ptr<int64_t> templateId_ = nullptr;
    // Version number
    std::shared_ptr<int32_t> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
