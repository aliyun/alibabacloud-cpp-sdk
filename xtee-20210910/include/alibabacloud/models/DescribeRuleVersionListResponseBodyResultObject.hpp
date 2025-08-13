// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERULEVERSIONLISTRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERULEVERSIONLISTRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRuleVersionListResponseBodyResultObjectConsoleAudit.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeRuleVersionListResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRuleVersionListResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(consoleAudit, consoleAudit_);
      DARABONBA_PTR_TO_JSON(consoleRuleId, consoleRuleId_);
      DARABONBA_PTR_TO_JSON(consoleRuleMemo, consoleRuleMemo_);
      DARABONBA_PTR_TO_JSON(consoleRuleName, consoleRuleName_);
      DARABONBA_PTR_TO_JSON(eventCode, eventCode_);
      DARABONBA_PTR_TO_JSON(eventType, eventType_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(lastOperator, lastOperator_);
      DARABONBA_PTR_TO_JSON(priority, priority_);
      DARABONBA_PTR_TO_JSON(ruleId, ruleId_);
      DARABONBA_PTR_TO_JSON(ruleStatus, ruleStatus_);
      DARABONBA_PTR_TO_JSON(ruleType, ruleType_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRuleVersionListResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(consoleAudit, consoleAudit_);
      DARABONBA_PTR_FROM_JSON(consoleRuleId, consoleRuleId_);
      DARABONBA_PTR_FROM_JSON(consoleRuleMemo, consoleRuleMemo_);
      DARABONBA_PTR_FROM_JSON(consoleRuleName, consoleRuleName_);
      DARABONBA_PTR_FROM_JSON(eventCode, eventCode_);
      DARABONBA_PTR_FROM_JSON(eventType, eventType_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(lastOperator, lastOperator_);
      DARABONBA_PTR_FROM_JSON(priority, priority_);
      DARABONBA_PTR_FROM_JSON(ruleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(ruleStatus, ruleStatus_);
      DARABONBA_PTR_FROM_JSON(ruleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    DescribeRuleVersionListResponseBodyResultObject() = default ;
    DescribeRuleVersionListResponseBodyResultObject(const DescribeRuleVersionListResponseBodyResultObject &) = default ;
    DescribeRuleVersionListResponseBodyResultObject(DescribeRuleVersionListResponseBodyResultObject &&) = default ;
    DescribeRuleVersionListResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRuleVersionListResponseBodyResultObject() = default ;
    DescribeRuleVersionListResponseBodyResultObject& operator=(const DescribeRuleVersionListResponseBodyResultObject &) = default ;
    DescribeRuleVersionListResponseBodyResultObject& operator=(DescribeRuleVersionListResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->consoleAudit_ != nullptr
        && this->consoleRuleId_ != nullptr && this->consoleRuleMemo_ != nullptr && this->consoleRuleName_ != nullptr && this->eventCode_ != nullptr && this->eventType_ != nullptr
        && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->id_ != nullptr && this->lastOperator_ != nullptr && this->priority_ != nullptr
        && this->ruleId_ != nullptr && this->ruleStatus_ != nullptr && this->ruleType_ != nullptr && this->version_ != nullptr; };
    // consoleAudit Field Functions 
    bool hasConsoleAudit() const { return this->consoleAudit_ != nullptr;};
    void deleteConsoleAudit() { this->consoleAudit_ = nullptr;};
    inline const Models::DescribeRuleVersionListResponseBodyResultObjectConsoleAudit & consoleAudit() const { DARABONBA_PTR_GET_CONST(consoleAudit_, Models::DescribeRuleVersionListResponseBodyResultObjectConsoleAudit) };
    inline Models::DescribeRuleVersionListResponseBodyResultObjectConsoleAudit consoleAudit() { DARABONBA_PTR_GET(consoleAudit_, Models::DescribeRuleVersionListResponseBodyResultObjectConsoleAudit) };
    inline DescribeRuleVersionListResponseBodyResultObject& setConsoleAudit(const Models::DescribeRuleVersionListResponseBodyResultObjectConsoleAudit & consoleAudit) { DARABONBA_PTR_SET_VALUE(consoleAudit_, consoleAudit) };
    inline DescribeRuleVersionListResponseBodyResultObject& setConsoleAudit(Models::DescribeRuleVersionListResponseBodyResultObjectConsoleAudit && consoleAudit) { DARABONBA_PTR_SET_RVALUE(consoleAudit_, consoleAudit) };


    // consoleRuleId Field Functions 
    bool hasConsoleRuleId() const { return this->consoleRuleId_ != nullptr;};
    void deleteConsoleRuleId() { this->consoleRuleId_ = nullptr;};
    inline int64_t consoleRuleId() const { DARABONBA_PTR_GET_DEFAULT(consoleRuleId_, 0L) };
    inline DescribeRuleVersionListResponseBodyResultObject& setConsoleRuleId(int64_t consoleRuleId) { DARABONBA_PTR_SET_VALUE(consoleRuleId_, consoleRuleId) };


    // consoleRuleMemo Field Functions 
    bool hasConsoleRuleMemo() const { return this->consoleRuleMemo_ != nullptr;};
    void deleteConsoleRuleMemo() { this->consoleRuleMemo_ = nullptr;};
    inline string consoleRuleMemo() const { DARABONBA_PTR_GET_DEFAULT(consoleRuleMemo_, "") };
    inline DescribeRuleVersionListResponseBodyResultObject& setConsoleRuleMemo(string consoleRuleMemo) { DARABONBA_PTR_SET_VALUE(consoleRuleMemo_, consoleRuleMemo) };


    // consoleRuleName Field Functions 
    bool hasConsoleRuleName() const { return this->consoleRuleName_ != nullptr;};
    void deleteConsoleRuleName() { this->consoleRuleName_ = nullptr;};
    inline string consoleRuleName() const { DARABONBA_PTR_GET_DEFAULT(consoleRuleName_, "") };
    inline DescribeRuleVersionListResponseBodyResultObject& setConsoleRuleName(string consoleRuleName) { DARABONBA_PTR_SET_VALUE(consoleRuleName_, consoleRuleName) };


    // eventCode Field Functions 
    bool hasEventCode() const { return this->eventCode_ != nullptr;};
    void deleteEventCode() { this->eventCode_ = nullptr;};
    inline string eventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
    inline DescribeRuleVersionListResponseBodyResultObject& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline DescribeRuleVersionListResponseBodyResultObject& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline DescribeRuleVersionListResponseBodyResultObject& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline DescribeRuleVersionListResponseBodyResultObject& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeRuleVersionListResponseBodyResultObject& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // lastOperator Field Functions 
    bool hasLastOperator() const { return this->lastOperator_ != nullptr;};
    void deleteLastOperator() { this->lastOperator_ = nullptr;};
    inline string lastOperator() const { DARABONBA_PTR_GET_DEFAULT(lastOperator_, "") };
    inline DescribeRuleVersionListResponseBodyResultObject& setLastOperator(string lastOperator) { DARABONBA_PTR_SET_VALUE(lastOperator_, lastOperator) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int64_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0L) };
    inline DescribeRuleVersionListResponseBodyResultObject& setPriority(int64_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline DescribeRuleVersionListResponseBodyResultObject& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleStatus Field Functions 
    bool hasRuleStatus() const { return this->ruleStatus_ != nullptr;};
    void deleteRuleStatus() { this->ruleStatus_ = nullptr;};
    inline string ruleStatus() const { DARABONBA_PTR_GET_DEFAULT(ruleStatus_, "") };
    inline DescribeRuleVersionListResponseBodyResultObject& setRuleStatus(string ruleStatus) { DARABONBA_PTR_SET_VALUE(ruleStatus_, ruleStatus) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline DescribeRuleVersionListResponseBodyResultObject& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int64_t version() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
    inline DescribeRuleVersionListResponseBodyResultObject& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // Audit object
    std::shared_ptr<Models::DescribeRuleVersionListResponseBodyResultObjectConsoleAudit> consoleAudit_ = nullptr;
    // Console rule ID.
    std::shared_ptr<int64_t> consoleRuleId_ = nullptr;
    // Associated policy remarks
    std::shared_ptr<string> consoleRuleMemo_ = nullptr;
    // Associated policy name
    std::shared_ptr<string> consoleRuleName_ = nullptr;
    // Event code
    std::shared_ptr<string> eventCode_ = nullptr;
    // Event type
    std::shared_ptr<string> eventType_ = nullptr;
    // Creation time.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // Modification time.
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    // Primary key ID of the policy
    std::shared_ptr<int64_t> id_ = nullptr;
    // The user who last operated.
    std::shared_ptr<string> lastOperator_ = nullptr;
    // Policy priority, the higher the number, the higher the priority.
    std::shared_ptr<int64_t> priority_ = nullptr;
    // Policy ID
    std::shared_ptr<string> ruleId_ = nullptr;
    // Policy status
    std::shared_ptr<string> ruleStatus_ = nullptr;
    // Rule Type
    std::shared_ptr<string> ruleType_ = nullptr;
    // Version number
    std::shared_ptr<int64_t> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
