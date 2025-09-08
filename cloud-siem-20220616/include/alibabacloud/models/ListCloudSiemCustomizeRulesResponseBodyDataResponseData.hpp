// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDSIEMCUSTOMIZERULESRESPONSEBODYDATARESPONSEDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDSIEMCUSTOMIZERULESRESPONSEBODYDATARESPONSEDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class ListCloudSiemCustomizeRulesResponseBodyDataResponseData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudSiemCustomizeRulesResponseBodyDataResponseData& obj) { 
      DARABONBA_PTR_TO_JSON(AlertType, alertType_);
      DARABONBA_PTR_TO_JSON(AlertTypeMds, alertTypeMds_);
      DARABONBA_PTR_TO_JSON(Aliuid, aliuid_);
      DARABONBA_PTR_TO_JSON(AttCk, attCk_);
      DARABONBA_PTR_TO_JSON(DataType, dataType_);
      DARABONBA_PTR_TO_JSON(EventTransferExt, eventTransferExt_);
      DARABONBA_PTR_TO_JSON(EventTransferSwitch, eventTransferSwitch_);
      DARABONBA_PTR_TO_JSON(EventTransferType, eventTransferType_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(LogSource, logSource_);
      DARABONBA_PTR_TO_JSON(LogSourceMds, logSourceMds_);
      DARABONBA_PTR_TO_JSON(LogType, logType_);
      DARABONBA_PTR_TO_JSON(LogTypeMds, logTypeMds_);
      DARABONBA_PTR_TO_JSON(QueryCycle, queryCycle_);
      DARABONBA_PTR_TO_JSON(RuleCondition, ruleCondition_);
      DARABONBA_PTR_TO_JSON(RuleDesc, ruleDesc_);
      DARABONBA_PTR_TO_JSON(RuleGroup, ruleGroup_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(RuleThreshold, ruleThreshold_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(ThreatLevel, threatLevel_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudSiemCustomizeRulesResponseBodyDataResponseData& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertType, alertType_);
      DARABONBA_PTR_FROM_JSON(AlertTypeMds, alertTypeMds_);
      DARABONBA_PTR_FROM_JSON(Aliuid, aliuid_);
      DARABONBA_PTR_FROM_JSON(AttCk, attCk_);
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
      DARABONBA_PTR_FROM_JSON(EventTransferExt, eventTransferExt_);
      DARABONBA_PTR_FROM_JSON(EventTransferSwitch, eventTransferSwitch_);
      DARABONBA_PTR_FROM_JSON(EventTransferType, eventTransferType_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(LogSource, logSource_);
      DARABONBA_PTR_FROM_JSON(LogSourceMds, logSourceMds_);
      DARABONBA_PTR_FROM_JSON(LogType, logType_);
      DARABONBA_PTR_FROM_JSON(LogTypeMds, logTypeMds_);
      DARABONBA_PTR_FROM_JSON(QueryCycle, queryCycle_);
      DARABONBA_PTR_FROM_JSON(RuleCondition, ruleCondition_);
      DARABONBA_PTR_FROM_JSON(RuleDesc, ruleDesc_);
      DARABONBA_PTR_FROM_JSON(RuleGroup, ruleGroup_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(RuleThreshold, ruleThreshold_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(ThreatLevel, threatLevel_);
    };
    ListCloudSiemCustomizeRulesResponseBodyDataResponseData() = default ;
    ListCloudSiemCustomizeRulesResponseBodyDataResponseData(const ListCloudSiemCustomizeRulesResponseBodyDataResponseData &) = default ;
    ListCloudSiemCustomizeRulesResponseBodyDataResponseData(ListCloudSiemCustomizeRulesResponseBodyDataResponseData &&) = default ;
    ListCloudSiemCustomizeRulesResponseBodyDataResponseData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudSiemCustomizeRulesResponseBodyDataResponseData() = default ;
    ListCloudSiemCustomizeRulesResponseBodyDataResponseData& operator=(const ListCloudSiemCustomizeRulesResponseBodyDataResponseData &) = default ;
    ListCloudSiemCustomizeRulesResponseBodyDataResponseData& operator=(ListCloudSiemCustomizeRulesResponseBodyDataResponseData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertType_ != nullptr
        && this->alertTypeMds_ != nullptr && this->aliuid_ != nullptr && this->attCk_ != nullptr && this->dataType_ != nullptr && this->eventTransferExt_ != nullptr
        && this->eventTransferSwitch_ != nullptr && this->eventTransferType_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->id_ != nullptr
        && this->logSource_ != nullptr && this->logSourceMds_ != nullptr && this->logType_ != nullptr && this->logTypeMds_ != nullptr && this->queryCycle_ != nullptr
        && this->ruleCondition_ != nullptr && this->ruleDesc_ != nullptr && this->ruleGroup_ != nullptr && this->ruleName_ != nullptr && this->ruleThreshold_ != nullptr
        && this->ruleType_ != nullptr && this->status_ != nullptr && this->threatLevel_ != nullptr; };
    // alertType Field Functions 
    bool hasAlertType() const { return this->alertType_ != nullptr;};
    void deleteAlertType() { this->alertType_ = nullptr;};
    inline string alertType() const { DARABONBA_PTR_GET_DEFAULT(alertType_, "") };
    inline ListCloudSiemCustomizeRulesResponseBodyDataResponseData& setAlertType(string alertType) { DARABONBA_PTR_SET_VALUE(alertType_, alertType) };


    // alertTypeMds Field Functions 
    bool hasAlertTypeMds() const { return this->alertTypeMds_ != nullptr;};
    void deleteAlertTypeMds() { this->alertTypeMds_ = nullptr;};
    inline string alertTypeMds() const { DARABONBA_PTR_GET_DEFAULT(alertTypeMds_, "") };
    inline ListCloudSiemCustomizeRulesResponseBodyDataResponseData& setAlertTypeMds(string alertTypeMds) { DARABONBA_PTR_SET_VALUE(alertTypeMds_, alertTypeMds) };


    // aliuid Field Functions 
    bool hasAliuid() const { return this->aliuid_ != nullptr;};
    void deleteAliuid() { this->aliuid_ = nullptr;};
    inline int64_t aliuid() const { DARABONBA_PTR_GET_DEFAULT(aliuid_, 0L) };
    inline ListCloudSiemCustomizeRulesResponseBodyDataResponseData& setAliuid(int64_t aliuid) { DARABONBA_PTR_SET_VALUE(aliuid_, aliuid) };


    // attCk Field Functions 
    bool hasAttCk() const { return this->attCk_ != nullptr;};
    void deleteAttCk() { this->attCk_ = nullptr;};
    inline string attCk() const { DARABONBA_PTR_GET_DEFAULT(attCk_, "") };
    inline ListCloudSiemCustomizeRulesResponseBodyDataResponseData& setAttCk(string attCk) { DARABONBA_PTR_SET_VALUE(attCk_, attCk) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline int32_t dataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, 0) };
    inline ListCloudSiemCustomizeRulesResponseBodyDataResponseData& setDataType(int32_t dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // eventTransferExt Field Functions 
    bool hasEventTransferExt() const { return this->eventTransferExt_ != nullptr;};
    void deleteEventTransferExt() { this->eventTransferExt_ = nullptr;};
    inline string eventTransferExt() const { DARABONBA_PTR_GET_DEFAULT(eventTransferExt_, "") };
    inline ListCloudSiemCustomizeRulesResponseBodyDataResponseData& setEventTransferExt(string eventTransferExt) { DARABONBA_PTR_SET_VALUE(eventTransferExt_, eventTransferExt) };


    // eventTransferSwitch Field Functions 
    bool hasEventTransferSwitch() const { return this->eventTransferSwitch_ != nullptr;};
    void deleteEventTransferSwitch() { this->eventTransferSwitch_ = nullptr;};
    inline int32_t eventTransferSwitch() const { DARABONBA_PTR_GET_DEFAULT(eventTransferSwitch_, 0) };
    inline ListCloudSiemCustomizeRulesResponseBodyDataResponseData& setEventTransferSwitch(int32_t eventTransferSwitch) { DARABONBA_PTR_SET_VALUE(eventTransferSwitch_, eventTransferSwitch) };


    // eventTransferType Field Functions 
    bool hasEventTransferType() const { return this->eventTransferType_ != nullptr;};
    void deleteEventTransferType() { this->eventTransferType_ = nullptr;};
    inline string eventTransferType() const { DARABONBA_PTR_GET_DEFAULT(eventTransferType_, "") };
    inline ListCloudSiemCustomizeRulesResponseBodyDataResponseData& setEventTransferType(string eventTransferType) { DARABONBA_PTR_SET_VALUE(eventTransferType_, eventTransferType) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListCloudSiemCustomizeRulesResponseBodyDataResponseData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ListCloudSiemCustomizeRulesResponseBodyDataResponseData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListCloudSiemCustomizeRulesResponseBodyDataResponseData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // logSource Field Functions 
    bool hasLogSource() const { return this->logSource_ != nullptr;};
    void deleteLogSource() { this->logSource_ = nullptr;};
    inline string logSource() const { DARABONBA_PTR_GET_DEFAULT(logSource_, "") };
    inline ListCloudSiemCustomizeRulesResponseBodyDataResponseData& setLogSource(string logSource) { DARABONBA_PTR_SET_VALUE(logSource_, logSource) };


    // logSourceMds Field Functions 
    bool hasLogSourceMds() const { return this->logSourceMds_ != nullptr;};
    void deleteLogSourceMds() { this->logSourceMds_ = nullptr;};
    inline string logSourceMds() const { DARABONBA_PTR_GET_DEFAULT(logSourceMds_, "") };
    inline ListCloudSiemCustomizeRulesResponseBodyDataResponseData& setLogSourceMds(string logSourceMds) { DARABONBA_PTR_SET_VALUE(logSourceMds_, logSourceMds) };


    // logType Field Functions 
    bool hasLogType() const { return this->logType_ != nullptr;};
    void deleteLogType() { this->logType_ = nullptr;};
    inline string logType() const { DARABONBA_PTR_GET_DEFAULT(logType_, "") };
    inline ListCloudSiemCustomizeRulesResponseBodyDataResponseData& setLogType(string logType) { DARABONBA_PTR_SET_VALUE(logType_, logType) };


    // logTypeMds Field Functions 
    bool hasLogTypeMds() const { return this->logTypeMds_ != nullptr;};
    void deleteLogTypeMds() { this->logTypeMds_ = nullptr;};
    inline string logTypeMds() const { DARABONBA_PTR_GET_DEFAULT(logTypeMds_, "") };
    inline ListCloudSiemCustomizeRulesResponseBodyDataResponseData& setLogTypeMds(string logTypeMds) { DARABONBA_PTR_SET_VALUE(logTypeMds_, logTypeMds) };


    // queryCycle Field Functions 
    bool hasQueryCycle() const { return this->queryCycle_ != nullptr;};
    void deleteQueryCycle() { this->queryCycle_ = nullptr;};
    inline string queryCycle() const { DARABONBA_PTR_GET_DEFAULT(queryCycle_, "") };
    inline ListCloudSiemCustomizeRulesResponseBodyDataResponseData& setQueryCycle(string queryCycle) { DARABONBA_PTR_SET_VALUE(queryCycle_, queryCycle) };


    // ruleCondition Field Functions 
    bool hasRuleCondition() const { return this->ruleCondition_ != nullptr;};
    void deleteRuleCondition() { this->ruleCondition_ = nullptr;};
    inline string ruleCondition() const { DARABONBA_PTR_GET_DEFAULT(ruleCondition_, "") };
    inline ListCloudSiemCustomizeRulesResponseBodyDataResponseData& setRuleCondition(string ruleCondition) { DARABONBA_PTR_SET_VALUE(ruleCondition_, ruleCondition) };


    // ruleDesc Field Functions 
    bool hasRuleDesc() const { return this->ruleDesc_ != nullptr;};
    void deleteRuleDesc() { this->ruleDesc_ = nullptr;};
    inline string ruleDesc() const { DARABONBA_PTR_GET_DEFAULT(ruleDesc_, "") };
    inline ListCloudSiemCustomizeRulesResponseBodyDataResponseData& setRuleDesc(string ruleDesc) { DARABONBA_PTR_SET_VALUE(ruleDesc_, ruleDesc) };


    // ruleGroup Field Functions 
    bool hasRuleGroup() const { return this->ruleGroup_ != nullptr;};
    void deleteRuleGroup() { this->ruleGroup_ = nullptr;};
    inline string ruleGroup() const { DARABONBA_PTR_GET_DEFAULT(ruleGroup_, "") };
    inline ListCloudSiemCustomizeRulesResponseBodyDataResponseData& setRuleGroup(string ruleGroup) { DARABONBA_PTR_SET_VALUE(ruleGroup_, ruleGroup) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ListCloudSiemCustomizeRulesResponseBodyDataResponseData& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleThreshold Field Functions 
    bool hasRuleThreshold() const { return this->ruleThreshold_ != nullptr;};
    void deleteRuleThreshold() { this->ruleThreshold_ = nullptr;};
    inline string ruleThreshold() const { DARABONBA_PTR_GET_DEFAULT(ruleThreshold_, "") };
    inline ListCloudSiemCustomizeRulesResponseBodyDataResponseData& setRuleThreshold(string ruleThreshold) { DARABONBA_PTR_SET_VALUE(ruleThreshold_, ruleThreshold) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline ListCloudSiemCustomizeRulesResponseBodyDataResponseData& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListCloudSiemCustomizeRulesResponseBodyDataResponseData& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // threatLevel Field Functions 
    bool hasThreatLevel() const { return this->threatLevel_ != nullptr;};
    void deleteThreatLevel() { this->threatLevel_ = nullptr;};
    inline string threatLevel() const { DARABONBA_PTR_GET_DEFAULT(threatLevel_, "") };
    inline ListCloudSiemCustomizeRulesResponseBodyDataResponseData& setThreatLevel(string threatLevel) { DARABONBA_PTR_SET_VALUE(threatLevel_, threatLevel) };


  protected:
    // The type of the risk.
    std::shared_ptr<string> alertType_ = nullptr;
    // The internal code of the risk type.
    std::shared_ptr<string> alertTypeMds_ = nullptr;
    // The ID of the Alibaba Cloud account in SIEM.
    std::shared_ptr<int64_t> aliuid_ = nullptr;
    // The alert additional field for ATT\\&CK.
    std::shared_ptr<string> attCk_ = nullptr;
    // The type of the view. Valid values:
    // 
    // 0: view of the current Alibaba Cloud account. 1: view of all accounts for the enterprise.
    std::shared_ptr<int32_t> dataType_ = nullptr;
    // The extended information about event generation. If the value of **eventTransferType** is **allToSingle**, the value of this parameter indicates the length and unit of the alert aggregation window. The HTML escape characters are reversed.
    std::shared_ptr<string> eventTransferExt_ = nullptr;
    // Indicates whether the system generates an event for the alert. Valid values:
    // 
    // *   **0**: no.
    // *   **1**: yes.
    std::shared_ptr<int32_t> eventTransferSwitch_ = nullptr;
    // The method that is used to generate an event. Valid values:
    // 
    // *   **default**: built-in method.
    // *   **singleToSingle**: The system generates an event for each alert.
    // *   **allToSingle**: The system generates an event for alerts within a period of time.
    std::shared_ptr<string> eventTransferType_ = nullptr;
    // The time when the custom rule was created.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The time when the custom rule was last updated.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The ID of the custom rule.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The log source of the rule.
    std::shared_ptr<string> logSource_ = nullptr;
    // The internal code of the log source.
    std::shared_ptr<string> logSourceMds_ = nullptr;
    // The log type of the rule.
    std::shared_ptr<string> logType_ = nullptr;
    // The internal code of the log type.
    std::shared_ptr<string> logTypeMds_ = nullptr;
    // The window length of the rule. The HTML escape characters are reversed.
    std::shared_ptr<string> queryCycle_ = nullptr;
    // The query condition of the rule. The value is in the JSON format. The HTML escape characters are reversed.
    std::shared_ptr<string> ruleCondition_ = nullptr;
    // The description of the rule.
    std::shared_ptr<string> ruleDesc_ = nullptr;
    // The log aggregation field. The value is in the JSON format. The HTML escape characters are reversed.
    std::shared_ptr<string> ruleGroup_ = nullptr;
    // The name of the rule.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The threshold configurations of the rule in the JSON format. The HTML escape characters are reversed.
    std::shared_ptr<string> ruleThreshold_ = nullptr;
    // The type of the rule. Valid values:
    // 
    // *   **predefine**
    // *   **customize**
    std::shared_ptr<string> ruleType_ = nullptr;
    // The status of the rule. Valid values:
    // 
    // *   **0**: The rule is in the initial state.
    // *   **10**: The simulation data is tested.
    // *   **15**: The business data is being tested.
    // *   **20**: The business data test is complete.
    // *   **100**: The rule is in effect.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The risk level. Valid values:
    // 
    // *   **serious**: high-risk.
    // *   **suspicious**: medium-risk.
    // *   **remind**: low-risk.
    std::shared_ptr<string> threatLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
