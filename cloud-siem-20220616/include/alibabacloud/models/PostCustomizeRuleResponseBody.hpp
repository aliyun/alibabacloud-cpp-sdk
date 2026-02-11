// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_POSTCUSTOMIZERULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_POSTCUSTOMIZERULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class PostCustomizeRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PostCustomizeRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, PostCustomizeRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    PostCustomizeRuleResponseBody() = default ;
    PostCustomizeRuleResponseBody(const PostCustomizeRuleResponseBody &) = default ;
    PostCustomizeRuleResponseBody(PostCustomizeRuleResponseBody &&) = default ;
    PostCustomizeRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PostCustomizeRuleResponseBody() = default ;
    PostCustomizeRuleResponseBody& operator=(const PostCustomizeRuleResponseBody &) = default ;
    PostCustomizeRuleResponseBody& operator=(PostCustomizeRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alertType_ == nullptr
        && this->alertTypeMds_ == nullptr && this->aliuid_ == nullptr && this->attCk_ == nullptr && this->dataType_ == nullptr && this->eventTransferExt_ == nullptr
        && this->eventTransferSwitch_ == nullptr && this->eventTransferType_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr
        && this->logSource_ == nullptr && this->logSourceMds_ == nullptr && this->logType_ == nullptr && this->logTypeMds_ == nullptr && this->queryCycle_ == nullptr
        && this->ruleCondition_ == nullptr && this->ruleDesc_ == nullptr && this->ruleGroup_ == nullptr && this->ruleName_ == nullptr && this->ruleThreshold_ == nullptr
        && this->ruleType_ == nullptr && this->status_ == nullptr && this->threatLevel_ == nullptr; };
      // alertType Field Functions 
      bool hasAlertType() const { return this->alertType_ != nullptr;};
      void deleteAlertType() { this->alertType_ = nullptr;};
      inline string getAlertType() const { DARABONBA_PTR_GET_DEFAULT(alertType_, "") };
      inline Data& setAlertType(string alertType) { DARABONBA_PTR_SET_VALUE(alertType_, alertType) };


      // alertTypeMds Field Functions 
      bool hasAlertTypeMds() const { return this->alertTypeMds_ != nullptr;};
      void deleteAlertTypeMds() { this->alertTypeMds_ = nullptr;};
      inline string getAlertTypeMds() const { DARABONBA_PTR_GET_DEFAULT(alertTypeMds_, "") };
      inline Data& setAlertTypeMds(string alertTypeMds) { DARABONBA_PTR_SET_VALUE(alertTypeMds_, alertTypeMds) };


      // aliuid Field Functions 
      bool hasAliuid() const { return this->aliuid_ != nullptr;};
      void deleteAliuid() { this->aliuid_ = nullptr;};
      inline int64_t getAliuid() const { DARABONBA_PTR_GET_DEFAULT(aliuid_, 0L) };
      inline Data& setAliuid(int64_t aliuid) { DARABONBA_PTR_SET_VALUE(aliuid_, aliuid) };


      // attCk Field Functions 
      bool hasAttCk() const { return this->attCk_ != nullptr;};
      void deleteAttCk() { this->attCk_ = nullptr;};
      inline string getAttCk() const { DARABONBA_PTR_GET_DEFAULT(attCk_, "") };
      inline Data& setAttCk(string attCk) { DARABONBA_PTR_SET_VALUE(attCk_, attCk) };


      // dataType Field Functions 
      bool hasDataType() const { return this->dataType_ != nullptr;};
      void deleteDataType() { this->dataType_ = nullptr;};
      inline int32_t getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, 0) };
      inline Data& setDataType(int32_t dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


      // eventTransferExt Field Functions 
      bool hasEventTransferExt() const { return this->eventTransferExt_ != nullptr;};
      void deleteEventTransferExt() { this->eventTransferExt_ = nullptr;};
      inline string getEventTransferExt() const { DARABONBA_PTR_GET_DEFAULT(eventTransferExt_, "") };
      inline Data& setEventTransferExt(string eventTransferExt) { DARABONBA_PTR_SET_VALUE(eventTransferExt_, eventTransferExt) };


      // eventTransferSwitch Field Functions 
      bool hasEventTransferSwitch() const { return this->eventTransferSwitch_ != nullptr;};
      void deleteEventTransferSwitch() { this->eventTransferSwitch_ = nullptr;};
      inline int32_t getEventTransferSwitch() const { DARABONBA_PTR_GET_DEFAULT(eventTransferSwitch_, 0) };
      inline Data& setEventTransferSwitch(int32_t eventTransferSwitch) { DARABONBA_PTR_SET_VALUE(eventTransferSwitch_, eventTransferSwitch) };


      // eventTransferType Field Functions 
      bool hasEventTransferType() const { return this->eventTransferType_ != nullptr;};
      void deleteEventTransferType() { this->eventTransferType_ = nullptr;};
      inline string getEventTransferType() const { DARABONBA_PTR_GET_DEFAULT(eventTransferType_, "") };
      inline Data& setEventTransferType(string eventTransferType) { DARABONBA_PTR_SET_VALUE(eventTransferType_, eventTransferType) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // logSource Field Functions 
      bool hasLogSource() const { return this->logSource_ != nullptr;};
      void deleteLogSource() { this->logSource_ = nullptr;};
      inline string getLogSource() const { DARABONBA_PTR_GET_DEFAULT(logSource_, "") };
      inline Data& setLogSource(string logSource) { DARABONBA_PTR_SET_VALUE(logSource_, logSource) };


      // logSourceMds Field Functions 
      bool hasLogSourceMds() const { return this->logSourceMds_ != nullptr;};
      void deleteLogSourceMds() { this->logSourceMds_ = nullptr;};
      inline string getLogSourceMds() const { DARABONBA_PTR_GET_DEFAULT(logSourceMds_, "") };
      inline Data& setLogSourceMds(string logSourceMds) { DARABONBA_PTR_SET_VALUE(logSourceMds_, logSourceMds) };


      // logType Field Functions 
      bool hasLogType() const { return this->logType_ != nullptr;};
      void deleteLogType() { this->logType_ = nullptr;};
      inline string getLogType() const { DARABONBA_PTR_GET_DEFAULT(logType_, "") };
      inline Data& setLogType(string logType) { DARABONBA_PTR_SET_VALUE(logType_, logType) };


      // logTypeMds Field Functions 
      bool hasLogTypeMds() const { return this->logTypeMds_ != nullptr;};
      void deleteLogTypeMds() { this->logTypeMds_ = nullptr;};
      inline string getLogTypeMds() const { DARABONBA_PTR_GET_DEFAULT(logTypeMds_, "") };
      inline Data& setLogTypeMds(string logTypeMds) { DARABONBA_PTR_SET_VALUE(logTypeMds_, logTypeMds) };


      // queryCycle Field Functions 
      bool hasQueryCycle() const { return this->queryCycle_ != nullptr;};
      void deleteQueryCycle() { this->queryCycle_ = nullptr;};
      inline string getQueryCycle() const { DARABONBA_PTR_GET_DEFAULT(queryCycle_, "") };
      inline Data& setQueryCycle(string queryCycle) { DARABONBA_PTR_SET_VALUE(queryCycle_, queryCycle) };


      // ruleCondition Field Functions 
      bool hasRuleCondition() const { return this->ruleCondition_ != nullptr;};
      void deleteRuleCondition() { this->ruleCondition_ = nullptr;};
      inline string getRuleCondition() const { DARABONBA_PTR_GET_DEFAULT(ruleCondition_, "") };
      inline Data& setRuleCondition(string ruleCondition) { DARABONBA_PTR_SET_VALUE(ruleCondition_, ruleCondition) };


      // ruleDesc Field Functions 
      bool hasRuleDesc() const { return this->ruleDesc_ != nullptr;};
      void deleteRuleDesc() { this->ruleDesc_ = nullptr;};
      inline string getRuleDesc() const { DARABONBA_PTR_GET_DEFAULT(ruleDesc_, "") };
      inline Data& setRuleDesc(string ruleDesc) { DARABONBA_PTR_SET_VALUE(ruleDesc_, ruleDesc) };


      // ruleGroup Field Functions 
      bool hasRuleGroup() const { return this->ruleGroup_ != nullptr;};
      void deleteRuleGroup() { this->ruleGroup_ = nullptr;};
      inline string getRuleGroup() const { DARABONBA_PTR_GET_DEFAULT(ruleGroup_, "") };
      inline Data& setRuleGroup(string ruleGroup) { DARABONBA_PTR_SET_VALUE(ruleGroup_, ruleGroup) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline Data& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // ruleThreshold Field Functions 
      bool hasRuleThreshold() const { return this->ruleThreshold_ != nullptr;};
      void deleteRuleThreshold() { this->ruleThreshold_ = nullptr;};
      inline string getRuleThreshold() const { DARABONBA_PTR_GET_DEFAULT(ruleThreshold_, "") };
      inline Data& setRuleThreshold(string ruleThreshold) { DARABONBA_PTR_SET_VALUE(ruleThreshold_, ruleThreshold) };


      // ruleType Field Functions 
      bool hasRuleType() const { return this->ruleType_ != nullptr;};
      void deleteRuleType() { this->ruleType_ = nullptr;};
      inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
      inline Data& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Data& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // threatLevel Field Functions 
      bool hasThreatLevel() const { return this->threatLevel_ != nullptr;};
      void deleteThreatLevel() { this->threatLevel_ = nullptr;};
      inline string getThreatLevel() const { DARABONBA_PTR_GET_DEFAULT(threatLevel_, "") };
      inline Data& setThreatLevel(string threatLevel) { DARABONBA_PTR_SET_VALUE(threatLevel_, threatLevel) };


    protected:
      // The risk type.
      shared_ptr<string> alertType_ {};
      // The internal code of the risk type.
      shared_ptr<string> alertTypeMds_ {};
      // The ID of the Alibaba Cloud account that is used to purchase the threat analysis feature.
      shared_ptr<int64_t> aliuid_ {};
      // 告警附加字段attck
      shared_ptr<string> attCk_ {};
      // 自动化响应规则条件字段数据类型。
      shared_ptr<int32_t> dataType_ {};
      // The extended information about event generation. If eventTransferType is set to allToSingle, the value of this parameter indicates the length and unit of the alert aggregation window. The HTML escape characters are reversed.
      shared_ptr<string> eventTransferExt_ {};
      // Indicates whether the system generates an event for the alert. Valid values:
      // 
      // *   0: no
      // *   1: yes
      shared_ptr<int32_t> eventTransferSwitch_ {};
      // The event generation method. Valid values:
      // 
      // *   default: The default method is used.
      // *   singleToSingle: The system generates an event for each alert.
      // *   allToSingle: The system generates an event for alerts within a period of time.
      shared_ptr<string> eventTransferType_ {};
      // The time when the custom rule was created.
      shared_ptr<string> gmtCreate_ {};
      // The time when the custom rule was last updated.
      shared_ptr<string> gmtModified_ {};
      // The ID of the custom rule.
      shared_ptr<int64_t> id_ {};
      // The log source of the rule.
      shared_ptr<string> logSource_ {};
      // The internal code of the log source.
      shared_ptr<string> logSourceMds_ {};
      // The log type of the rule.
      shared_ptr<string> logType_ {};
      // The internal code of the log type.
      shared_ptr<string> logTypeMds_ {};
      // The window length of the rule. The HTML escape characters are reversed.
      shared_ptr<string> queryCycle_ {};
      // The query condition of the rule. The value is in the JSON format. The HTML escape characters are reversed.
      shared_ptr<string> ruleCondition_ {};
      // The description of the rule.
      shared_ptr<string> ruleDesc_ {};
      // The log aggregation field of the rule. The value is a JSON string. The HTML escape characters are reversed.
      shared_ptr<string> ruleGroup_ {};
      // The name of the rule.
      shared_ptr<string> ruleName_ {};
      // The threshold configuration of the rule. The value is in the JSON format. The HTML escape characters are reversed.
      shared_ptr<string> ruleThreshold_ {};
      // The type of the rule. Valid values:
      // 
      // *   predefine
      // *   customize
      shared_ptr<string> ruleType_ {};
      // The rule status. Valid values:
      // 
      // *   0: The rule is in the initial state.
      // *   10: The simulation data is tested.
      // *   15: The business data is being tested.
      // *   20: The business data test ends.
      // *   100: The rule takes effect.
      shared_ptr<int32_t> status_ {};
      // The risk level. Valid values:
      // 
      // *   serious: high
      // *   suspicious: medium
      // *   remind: low
      shared_ptr<string> threatLevel_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline PostCustomizeRuleResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const PostCustomizeRuleResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, PostCustomizeRuleResponseBody::Data) };
    inline PostCustomizeRuleResponseBody::Data getData() { DARABONBA_PTR_GET(data_, PostCustomizeRuleResponseBody::Data) };
    inline PostCustomizeRuleResponseBody& setData(const PostCustomizeRuleResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline PostCustomizeRuleResponseBody& setData(PostCustomizeRuleResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline PostCustomizeRuleResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PostCustomizeRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline PostCustomizeRuleResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.
    shared_ptr<int32_t> code_ {};
    // The data returned.
    shared_ptr<PostCustomizeRuleResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
