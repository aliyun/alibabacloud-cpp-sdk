// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTOMATERESPONSECONFIGSRESPONSEBODYDATARESPONSEDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTOMATERESPONSECONFIGSRESPONSEBODYDATARESPONSEDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class ListAutomateResponseConfigsResponseBodyDataResponseData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAutomateResponseConfigsResponseBodyDataResponseData& obj) { 
      DARABONBA_PTR_TO_JSON(ActionConfig, actionConfig_);
      DARABONBA_PTR_TO_JSON(ActionType, actionType_);
      DARABONBA_PTR_TO_JSON(Aliuid, aliuid_);
      DARABONBA_PTR_TO_JSON(AutoResponseType, autoResponseType_);
      DARABONBA_PTR_TO_JSON(DataType, dataType_);
      DARABONBA_PTR_TO_JSON(ExecutionCondition, executionCondition_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ResponseRuleType, responseRuleType_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubUserId, subUserId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAutomateResponseConfigsResponseBodyDataResponseData& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionConfig, actionConfig_);
      DARABONBA_PTR_FROM_JSON(ActionType, actionType_);
      DARABONBA_PTR_FROM_JSON(Aliuid, aliuid_);
      DARABONBA_PTR_FROM_JSON(AutoResponseType, autoResponseType_);
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
      DARABONBA_PTR_FROM_JSON(ExecutionCondition, executionCondition_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ResponseRuleType, responseRuleType_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubUserId, subUserId_);
    };
    ListAutomateResponseConfigsResponseBodyDataResponseData() = default ;
    ListAutomateResponseConfigsResponseBodyDataResponseData(const ListAutomateResponseConfigsResponseBodyDataResponseData &) = default ;
    ListAutomateResponseConfigsResponseBodyDataResponseData(ListAutomateResponseConfigsResponseBodyDataResponseData &&) = default ;
    ListAutomateResponseConfigsResponseBodyDataResponseData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAutomateResponseConfigsResponseBodyDataResponseData() = default ;
    ListAutomateResponseConfigsResponseBodyDataResponseData& operator=(const ListAutomateResponseConfigsResponseBodyDataResponseData &) = default ;
    ListAutomateResponseConfigsResponseBodyDataResponseData& operator=(ListAutomateResponseConfigsResponseBodyDataResponseData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actionConfig_ != nullptr
        && this->actionType_ != nullptr && this->aliuid_ != nullptr && this->autoResponseType_ != nullptr && this->dataType_ != nullptr && this->executionCondition_ != nullptr
        && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->id_ != nullptr && this->responseRuleType_ != nullptr && this->ruleName_ != nullptr
        && this->status_ != nullptr && this->subUserId_ != nullptr; };
    // actionConfig Field Functions 
    bool hasActionConfig() const { return this->actionConfig_ != nullptr;};
    void deleteActionConfig() { this->actionConfig_ = nullptr;};
    inline string actionConfig() const { DARABONBA_PTR_GET_DEFAULT(actionConfig_, "") };
    inline ListAutomateResponseConfigsResponseBodyDataResponseData& setActionConfig(string actionConfig) { DARABONBA_PTR_SET_VALUE(actionConfig_, actionConfig) };


    // actionType Field Functions 
    bool hasActionType() const { return this->actionType_ != nullptr;};
    void deleteActionType() { this->actionType_ = nullptr;};
    inline string actionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, "") };
    inline ListAutomateResponseConfigsResponseBodyDataResponseData& setActionType(string actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


    // aliuid Field Functions 
    bool hasAliuid() const { return this->aliuid_ != nullptr;};
    void deleteAliuid() { this->aliuid_ = nullptr;};
    inline int64_t aliuid() const { DARABONBA_PTR_GET_DEFAULT(aliuid_, 0L) };
    inline ListAutomateResponseConfigsResponseBodyDataResponseData& setAliuid(int64_t aliuid) { DARABONBA_PTR_SET_VALUE(aliuid_, aliuid) };


    // autoResponseType Field Functions 
    bool hasAutoResponseType() const { return this->autoResponseType_ != nullptr;};
    void deleteAutoResponseType() { this->autoResponseType_ = nullptr;};
    inline string autoResponseType() const { DARABONBA_PTR_GET_DEFAULT(autoResponseType_, "") };
    inline ListAutomateResponseConfigsResponseBodyDataResponseData& setAutoResponseType(string autoResponseType) { DARABONBA_PTR_SET_VALUE(autoResponseType_, autoResponseType) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline int32_t dataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, 0) };
    inline ListAutomateResponseConfigsResponseBodyDataResponseData& setDataType(int32_t dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // executionCondition Field Functions 
    bool hasExecutionCondition() const { return this->executionCondition_ != nullptr;};
    void deleteExecutionCondition() { this->executionCondition_ = nullptr;};
    inline string executionCondition() const { DARABONBA_PTR_GET_DEFAULT(executionCondition_, "") };
    inline ListAutomateResponseConfigsResponseBodyDataResponseData& setExecutionCondition(string executionCondition) { DARABONBA_PTR_SET_VALUE(executionCondition_, executionCondition) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListAutomateResponseConfigsResponseBodyDataResponseData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ListAutomateResponseConfigsResponseBodyDataResponseData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListAutomateResponseConfigsResponseBodyDataResponseData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // responseRuleType Field Functions 
    bool hasResponseRuleType() const { return this->responseRuleType_ != nullptr;};
    void deleteResponseRuleType() { this->responseRuleType_ = nullptr;};
    inline string responseRuleType() const { DARABONBA_PTR_GET_DEFAULT(responseRuleType_, "") };
    inline ListAutomateResponseConfigsResponseBodyDataResponseData& setResponseRuleType(string responseRuleType) { DARABONBA_PTR_SET_VALUE(responseRuleType_, responseRuleType) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ListAutomateResponseConfigsResponseBodyDataResponseData& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListAutomateResponseConfigsResponseBodyDataResponseData& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subUserId Field Functions 
    bool hasSubUserId() const { return this->subUserId_ != nullptr;};
    void deleteSubUserId() { this->subUserId_ = nullptr;};
    inline int64_t subUserId() const { DARABONBA_PTR_GET_DEFAULT(subUserId_, 0L) };
    inline ListAutomateResponseConfigsResponseBodyDataResponseData& setSubUserId(int64_t subUserId) { DARABONBA_PTR_SET_VALUE(subUserId_, subUserId) };


  protected:
    // The configuration of the action that is performed after the automated response rule is hit. The value is in the JSON format.
    std::shared_ptr<string> actionConfig_ = nullptr;
    // The type of the handling action. Multiple types are separated by commas (,). Valid values:
    // 
    // *   **doPlaybook**: runs the playbook.
    // *   **changeEventStatus**: changes the event status.
    // *   **changeThreatLevel**: changes the risk level of the event.
    std::shared_ptr<string> actionType_ = nullptr;
    // The ID of the Alibaba Cloud account that is associated with the rule in SIEM.
    std::shared_ptr<int64_t> aliuid_ = nullptr;
    // The type of the automated response rule. Valid values:
    // 
    // *   **event**
    // *   **alert**
    std::shared_ptr<string> autoResponseType_ = nullptr;
    // The type of the view. Valid values:
    // 
    // 0: the current Alibaba Cloud account
    // 1: the global account
    std::shared_ptr<int32_t> dataType_ = nullptr;
    // The trigger condition of the automated response rule. The value is in the JSON format.
    std::shared_ptr<string> executionCondition_ = nullptr;
    // The creation time.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The update time.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The ID of the automated response rule.
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> responseRuleType_ = nullptr;
    // The name of the automated response rule.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The status of the rule. Valid values:
    // 
    // *   **0**: disabled.
    // *   **100**: enabled.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The ID of the user who created the rule.
    std::shared_ptr<int64_t> subUserId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
