// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTOSCALINGRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAUTOSCALINGRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class GetAutoScalingRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAutoScalingRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAutoScalingRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAutoScalingRuleResponseBody() = default ;
    GetAutoScalingRuleResponseBody(const GetAutoScalingRuleResponseBody &) = default ;
    GetAutoScalingRuleResponseBody(GetAutoScalingRuleResponseBody &&) = default ;
    GetAutoScalingRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAutoScalingRuleResponseBody() = default ;
    GetAutoScalingRuleResponseBody& operator=(const GetAutoScalingRuleResponseBody &) = default ;
    GetAutoScalingRuleResponseBody& operator=(GetAutoScalingRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ConfigId, configId_);
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(ObservationWindow, observationWindow_);
        DARABONBA_PTR_TO_JSON(OperationType, operationType_);
        DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
        DARABONBA_PTR_TO_JSON(ScaleInStep, scaleInStep_);
        DARABONBA_PTR_TO_JSON(ScaleOutStep, scaleOutStep_);
        DARABONBA_PTR_TO_JSON(SilenceTime, silenceTime_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(TargetMetric, targetMetric_);
        DARABONBA_PTR_TO_JSON(TargetNodes, targetNodes_);
        DARABONBA_PTR_TO_JSON(ThresholdLower, thresholdLower_);
        DARABONBA_PTR_TO_JSON(ThresholdUpper, thresholdUpper_);
        DARABONBA_PTR_TO_JSON(TriggerCronExpr, triggerCronExpr_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(ObservationWindow, observationWindow_);
        DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
        DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
        DARABONBA_PTR_FROM_JSON(ScaleInStep, scaleInStep_);
        DARABONBA_PTR_FROM_JSON(ScaleOutStep, scaleOutStep_);
        DARABONBA_PTR_FROM_JSON(SilenceTime, silenceTime_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(TargetMetric, targetMetric_);
        DARABONBA_PTR_FROM_JSON(TargetNodes, targetNodes_);
        DARABONBA_PTR_FROM_JSON(ThresholdLower, thresholdLower_);
        DARABONBA_PTR_FROM_JSON(ThresholdUpper, thresholdUpper_);
        DARABONBA_PTR_FROM_JSON(TriggerCronExpr, triggerCronExpr_);
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
      virtual bool empty() const override { return this->configId_ == nullptr
        && this->enabled_ == nullptr && this->endTime_ == nullptr && this->instanceId_ == nullptr && this->observationWindow_ == nullptr && this->operationType_ == nullptr
        && this->ruleId_ == nullptr && this->ruleName_ == nullptr && this->ruleType_ == nullptr && this->scaleInStep_ == nullptr && this->scaleOutStep_ == nullptr
        && this->silenceTime_ == nullptr && this->startTime_ == nullptr && this->targetMetric_ == nullptr && this->targetNodes_ == nullptr && this->thresholdLower_ == nullptr
        && this->thresholdUpper_ == nullptr && this->triggerCronExpr_ == nullptr; };
      // configId Field Functions 
      bool hasConfigId() const { return this->configId_ != nullptr;};
      void deleteConfigId() { this->configId_ = nullptr;};
      inline string getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, "") };
      inline Data& setConfigId(string configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline Data& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline Data& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // observationWindow Field Functions 
      bool hasObservationWindow() const { return this->observationWindow_ != nullptr;};
      void deleteObservationWindow() { this->observationWindow_ = nullptr;};
      inline int32_t getObservationWindow() const { DARABONBA_PTR_GET_DEFAULT(observationWindow_, 0) };
      inline Data& setObservationWindow(int32_t observationWindow) { DARABONBA_PTR_SET_VALUE(observationWindow_, observationWindow) };


      // operationType Field Functions 
      bool hasOperationType() const { return this->operationType_ != nullptr;};
      void deleteOperationType() { this->operationType_ = nullptr;};
      inline string getOperationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
      inline Data& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
      inline Data& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline Data& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // ruleType Field Functions 
      bool hasRuleType() const { return this->ruleType_ != nullptr;};
      void deleteRuleType() { this->ruleType_ = nullptr;};
      inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
      inline Data& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


      // scaleInStep Field Functions 
      bool hasScaleInStep() const { return this->scaleInStep_ != nullptr;};
      void deleteScaleInStep() { this->scaleInStep_ = nullptr;};
      inline int32_t getScaleInStep() const { DARABONBA_PTR_GET_DEFAULT(scaleInStep_, 0) };
      inline Data& setScaleInStep(int32_t scaleInStep) { DARABONBA_PTR_SET_VALUE(scaleInStep_, scaleInStep) };


      // scaleOutStep Field Functions 
      bool hasScaleOutStep() const { return this->scaleOutStep_ != nullptr;};
      void deleteScaleOutStep() { this->scaleOutStep_ = nullptr;};
      inline int32_t getScaleOutStep() const { DARABONBA_PTR_GET_DEFAULT(scaleOutStep_, 0) };
      inline Data& setScaleOutStep(int32_t scaleOutStep) { DARABONBA_PTR_SET_VALUE(scaleOutStep_, scaleOutStep) };


      // silenceTime Field Functions 
      bool hasSilenceTime() const { return this->silenceTime_ != nullptr;};
      void deleteSilenceTime() { this->silenceTime_ = nullptr;};
      inline int32_t getSilenceTime() const { DARABONBA_PTR_GET_DEFAULT(silenceTime_, 0) };
      inline Data& setSilenceTime(int32_t silenceTime) { DARABONBA_PTR_SET_VALUE(silenceTime_, silenceTime) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Data& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // targetMetric Field Functions 
      bool hasTargetMetric() const { return this->targetMetric_ != nullptr;};
      void deleteTargetMetric() { this->targetMetric_ = nullptr;};
      inline string getTargetMetric() const { DARABONBA_PTR_GET_DEFAULT(targetMetric_, "") };
      inline Data& setTargetMetric(string targetMetric) { DARABONBA_PTR_SET_VALUE(targetMetric_, targetMetric) };


      // targetNodes Field Functions 
      bool hasTargetNodes() const { return this->targetNodes_ != nullptr;};
      void deleteTargetNodes() { this->targetNodes_ = nullptr;};
      inline int32_t getTargetNodes() const { DARABONBA_PTR_GET_DEFAULT(targetNodes_, 0) };
      inline Data& setTargetNodes(int32_t targetNodes) { DARABONBA_PTR_SET_VALUE(targetNodes_, targetNodes) };


      // thresholdLower Field Functions 
      bool hasThresholdLower() const { return this->thresholdLower_ != nullptr;};
      void deleteThresholdLower() { this->thresholdLower_ = nullptr;};
      inline int32_t getThresholdLower() const { DARABONBA_PTR_GET_DEFAULT(thresholdLower_, 0) };
      inline Data& setThresholdLower(int32_t thresholdLower) { DARABONBA_PTR_SET_VALUE(thresholdLower_, thresholdLower) };


      // thresholdUpper Field Functions 
      bool hasThresholdUpper() const { return this->thresholdUpper_ != nullptr;};
      void deleteThresholdUpper() { this->thresholdUpper_ = nullptr;};
      inline int32_t getThresholdUpper() const { DARABONBA_PTR_GET_DEFAULT(thresholdUpper_, 0) };
      inline Data& setThresholdUpper(int32_t thresholdUpper) { DARABONBA_PTR_SET_VALUE(thresholdUpper_, thresholdUpper) };


      // triggerCronExpr Field Functions 
      bool hasTriggerCronExpr() const { return this->triggerCronExpr_ != nullptr;};
      void deleteTriggerCronExpr() { this->triggerCronExpr_ = nullptr;};
      inline string getTriggerCronExpr() const { DARABONBA_PTR_GET_DEFAULT(triggerCronExpr_, "") };
      inline Data& setTriggerCronExpr(string triggerCronExpr) { DARABONBA_PTR_SET_VALUE(triggerCronExpr_, triggerCronExpr) };


    protected:
      shared_ptr<string> configId_ {};
      shared_ptr<bool> enabled_ {};
      shared_ptr<string> endTime_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<int32_t> observationWindow_ {};
      shared_ptr<string> operationType_ {};
      shared_ptr<string> ruleId_ {};
      shared_ptr<string> ruleName_ {};
      shared_ptr<string> ruleType_ {};
      shared_ptr<int32_t> scaleInStep_ {};
      shared_ptr<int32_t> scaleOutStep_ {};
      shared_ptr<int32_t> silenceTime_ {};
      shared_ptr<string> startTime_ {};
      shared_ptr<string> targetMetric_ {};
      shared_ptr<int32_t> targetNodes_ {};
      shared_ptr<int32_t> thresholdLower_ {};
      shared_ptr<int32_t> thresholdUpper_ {};
      shared_ptr<string> triggerCronExpr_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->httpStatusCode_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetAutoScalingRuleResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAutoScalingRuleResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAutoScalingRuleResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAutoScalingRuleResponseBody::Data) };
    inline GetAutoScalingRuleResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAutoScalingRuleResponseBody::Data) };
    inline GetAutoScalingRuleResponseBody& setData(const GetAutoScalingRuleResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAutoScalingRuleResponseBody& setData(GetAutoScalingRuleResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline GetAutoScalingRuleResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline GetAutoScalingRuleResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetAutoScalingRuleResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAutoScalingRuleResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAutoScalingRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAutoScalingRuleResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<GetAutoScalingRuleResponseBody::Data> data_ {};
    shared_ptr<string> dynamicCode_ {};
    shared_ptr<string> dynamicMessage_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
