// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYHOSTAVAILABILITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYHOSTAVAILABILITYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class ModifyHostAvailabilityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyHostAvailabilityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertConfig, alertConfig_);
      DARABONBA_PTR_TO_JSON(TaskOption, taskOption_);
      DARABONBA_PTR_TO_JSON(AlertConfigEscalationList, alertConfigEscalationList_);
      DARABONBA_PTR_TO_JSON(AlertConfigTargetList, alertConfigTargetList_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceList, instanceList_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskScope, taskScope_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyHostAvailabilityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertConfig, alertConfig_);
      DARABONBA_PTR_FROM_JSON(TaskOption, taskOption_);
      DARABONBA_PTR_FROM_JSON(AlertConfigEscalationList, alertConfigEscalationList_);
      DARABONBA_PTR_FROM_JSON(AlertConfigTargetList, alertConfigTargetList_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceList, instanceList_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskScope, taskScope_);
    };
    ModifyHostAvailabilityRequest() = default ;
    ModifyHostAvailabilityRequest(const ModifyHostAvailabilityRequest &) = default ;
    ModifyHostAvailabilityRequest(ModifyHostAvailabilityRequest &&) = default ;
    ModifyHostAvailabilityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyHostAvailabilityRequest() = default ;
    ModifyHostAvailabilityRequest& operator=(const ModifyHostAvailabilityRequest &) = default ;
    ModifyHostAvailabilityRequest& operator=(ModifyHostAvailabilityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AlertConfigTargetList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AlertConfigTargetList& obj) { 
        DARABONBA_PTR_TO_JSON(Arn, arn_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(JsonParams, jsonParams_);
        DARABONBA_PTR_TO_JSON(Level, level_);
      };
      friend void from_json(const Darabonba::Json& j, AlertConfigTargetList& obj) { 
        DARABONBA_PTR_FROM_JSON(Arn, arn_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(JsonParams, jsonParams_);
        DARABONBA_PTR_FROM_JSON(Level, level_);
      };
      AlertConfigTargetList() = default ;
      AlertConfigTargetList(const AlertConfigTargetList &) = default ;
      AlertConfigTargetList(AlertConfigTargetList &&) = default ;
      AlertConfigTargetList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AlertConfigTargetList() = default ;
      AlertConfigTargetList& operator=(const AlertConfigTargetList &) = default ;
      AlertConfigTargetList& operator=(AlertConfigTargetList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->arn_ == nullptr
        && this->id_ == nullptr && this->jsonParams_ == nullptr && this->level_ == nullptr; };
      // arn Field Functions 
      bool hasArn() const { return this->arn_ != nullptr;};
      void deleteArn() { this->arn_ = nullptr;};
      inline string getArn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
      inline AlertConfigTargetList& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline AlertConfigTargetList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // jsonParams Field Functions 
      bool hasJsonParams() const { return this->jsonParams_ != nullptr;};
      void deleteJsonParams() { this->jsonParams_ = nullptr;};
      inline string getJsonParams() const { DARABONBA_PTR_GET_DEFAULT(jsonParams_, "") };
      inline AlertConfigTargetList& setJsonParams(string jsonParams) { DARABONBA_PTR_SET_VALUE(jsonParams_, jsonParams) };


      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
      inline AlertConfigTargetList& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    protected:
      // The Alibaba Cloud Resource Name (ARN) of the resource.
      // 
      // Format: `acs:{Service name abbreviation}:{regionId}:{userId}:/{Resource type}/{Resource name}/message`. Example: `acs:mns:cn-hangzhou:120886317861****:/queues/test123/message`. Fields:
      // 
      // *   {Service name abbreviation}: the abbreviation of the service name. Set the value to Simple Message Queue (formerly MNS) (SMQ).
      // 
      // *   {userId}: the ID of the Alibaba Cloud account.
      // 
      // *   {regionId}: the region ID of the SMQ queue or topic.
      // 
      // *   {Resource type}: the type of the resource for which alerts are triggered. Valid values:
      // 
      //     *   **queues**
      //     *   **topics**
      // 
      // *   {Resource name}: the resource name.
      // 
      //     *   If the resource type is **queues**, the resource name is the queue name.
      //     *   If the resource type is **topics**, the resource name is the topic name.
      shared_ptr<string> arn_ {};
      // The ID of the resource for which alerts are triggered.
      shared_ptr<string> id_ {};
      // The parameters of the alert callback. The parameters are in the JSON format.
      shared_ptr<string> jsonParams_ {};
      // The alert level. Valid values:
      // 
      // *   INFO
      // *   WARN
      // *   CRITICAL
      shared_ptr<string> level_ {};
    };

    class AlertConfigEscalationList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AlertConfigEscalationList& obj) { 
        DARABONBA_PTR_TO_JSON(Aggregate, aggregate_);
        DARABONBA_PTR_TO_JSON(MetricName, metricName_);
        DARABONBA_PTR_TO_JSON(Operator, operator_);
        DARABONBA_PTR_TO_JSON(Times, times_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, AlertConfigEscalationList& obj) { 
        DARABONBA_PTR_FROM_JSON(Aggregate, aggregate_);
        DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
        DARABONBA_PTR_FROM_JSON(Operator, operator_);
        DARABONBA_PTR_FROM_JSON(Times, times_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      AlertConfigEscalationList() = default ;
      AlertConfigEscalationList(const AlertConfigEscalationList &) = default ;
      AlertConfigEscalationList(AlertConfigEscalationList &&) = default ;
      AlertConfigEscalationList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AlertConfigEscalationList() = default ;
      AlertConfigEscalationList& operator=(const AlertConfigEscalationList &) = default ;
      AlertConfigEscalationList& operator=(AlertConfigEscalationList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aggregate_ == nullptr
        && this->metricName_ == nullptr && this->operator_ == nullptr && this->times_ == nullptr && this->value_ == nullptr; };
      // aggregate Field Functions 
      bool hasAggregate() const { return this->aggregate_ != nullptr;};
      void deleteAggregate() { this->aggregate_ = nullptr;};
      inline string getAggregate() const { DARABONBA_PTR_GET_DEFAULT(aggregate_, "") };
      inline AlertConfigEscalationList& setAggregate(string aggregate) { DARABONBA_PTR_SET_VALUE(aggregate_, aggregate) };


      // metricName Field Functions 
      bool hasMetricName() const { return this->metricName_ != nullptr;};
      void deleteMetricName() { this->metricName_ = nullptr;};
      inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
      inline AlertConfigEscalationList& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


      // operator Field Functions 
      bool hasOperator() const { return this->operator_ != nullptr;};
      void deleteOperator() { this->operator_ = nullptr;};
      inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
      inline AlertConfigEscalationList& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


      // times Field Functions 
      bool hasTimes() const { return this->times_ != nullptr;};
      void deleteTimes() { this->times_ = nullptr;};
      inline int32_t getTimes() const { DARABONBA_PTR_GET_DEFAULT(times_, 0) };
      inline AlertConfigEscalationList& setTimes(int32_t times) { DARABONBA_PTR_SET_VALUE(times_, times) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline AlertConfigEscalationList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The method used to calculate the metric values that trigger alerts. Valid values of N: 1 to 21. The value of this parameter varies based on the metric. The following items show the correspondence between metrics and calculation methods:
      // 
      // *   HttpStatus: Value
      // *   HttpLatency: Average
      // *   TelnetStatus: Value
      // *   TelnetLatency: Average
      // *   PingLostRate: Average
      // 
      // > The value Value indicates the original value and is used for metrics such as status codes. The value Average indicates the average value and is used for metrics such as the latency and packet loss rate.
      shared_ptr<string> aggregate_ {};
      // The metric for which the alert feature is enabled. Valid values of N: 1 to 21. Valid values:
      // 
      // *   HttpStatus: HTTP status code
      // *   HttpLatency: HTTP response time
      // *   TelnetStatus: Telnet status code
      // *   TelnetLatency: Telnet response time
      // *   PingLostRate: Ping packet loss rate
      // 
      // This parameter is required.
      shared_ptr<string> metricName_ {};
      // The comparison operator that is used in the alert rule. Valid values of N: 1 to 21. Valid values:
      // 
      // *   `>`
      // *   `>=`
      // *   `<`
      // *   `<=`
      // *   `=`
      shared_ptr<string> operator_ {};
      // The consecutive number of times for which the metric value meets the alert condition before an alert is triggered. Valid values of N: 1 to 21.
      shared_ptr<int32_t> times_ {};
      // The alert threshold. Valid values of N: 1 to 21.
      shared_ptr<string> value_ {};
    };

    class TaskOption : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskOption& obj) { 
        DARABONBA_PTR_TO_JSON(HttpHeader, httpHeader_);
        DARABONBA_PTR_TO_JSON(HttpMethod, httpMethod_);
        DARABONBA_PTR_TO_JSON(HttpNegative, httpNegative_);
        DARABONBA_PTR_TO_JSON(HttpPostContent, httpPostContent_);
        DARABONBA_PTR_TO_JSON(HttpResponseCharset, httpResponseCharset_);
        DARABONBA_PTR_TO_JSON(HttpResponseMatchContent, httpResponseMatchContent_);
        DARABONBA_PTR_TO_JSON(HttpURI, httpURI_);
        DARABONBA_PTR_TO_JSON(Interval, interval_);
        DARABONBA_PTR_TO_JSON(TelnetOrPingHost, telnetOrPingHost_);
      };
      friend void from_json(const Darabonba::Json& j, TaskOption& obj) { 
        DARABONBA_PTR_FROM_JSON(HttpHeader, httpHeader_);
        DARABONBA_PTR_FROM_JSON(HttpMethod, httpMethod_);
        DARABONBA_PTR_FROM_JSON(HttpNegative, httpNegative_);
        DARABONBA_PTR_FROM_JSON(HttpPostContent, httpPostContent_);
        DARABONBA_PTR_FROM_JSON(HttpResponseCharset, httpResponseCharset_);
        DARABONBA_PTR_FROM_JSON(HttpResponseMatchContent, httpResponseMatchContent_);
        DARABONBA_PTR_FROM_JSON(HttpURI, httpURI_);
        DARABONBA_PTR_FROM_JSON(Interval, interval_);
        DARABONBA_PTR_FROM_JSON(TelnetOrPingHost, telnetOrPingHost_);
      };
      TaskOption() = default ;
      TaskOption(const TaskOption &) = default ;
      TaskOption(TaskOption &&) = default ;
      TaskOption(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskOption() = default ;
      TaskOption& operator=(const TaskOption &) = default ;
      TaskOption& operator=(TaskOption &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->httpHeader_ == nullptr
        && this->httpMethod_ == nullptr && this->httpNegative_ == nullptr && this->httpPostContent_ == nullptr && this->httpResponseCharset_ == nullptr && this->httpResponseMatchContent_ == nullptr
        && this->httpURI_ == nullptr && this->interval_ == nullptr && this->telnetOrPingHost_ == nullptr; };
      // httpHeader Field Functions 
      bool hasHttpHeader() const { return this->httpHeader_ != nullptr;};
      void deleteHttpHeader() { this->httpHeader_ = nullptr;};
      inline string getHttpHeader() const { DARABONBA_PTR_GET_DEFAULT(httpHeader_, "") };
      inline TaskOption& setHttpHeader(string httpHeader) { DARABONBA_PTR_SET_VALUE(httpHeader_, httpHeader) };


      // httpMethod Field Functions 
      bool hasHttpMethod() const { return this->httpMethod_ != nullptr;};
      void deleteHttpMethod() { this->httpMethod_ = nullptr;};
      inline string getHttpMethod() const { DARABONBA_PTR_GET_DEFAULT(httpMethod_, "") };
      inline TaskOption& setHttpMethod(string httpMethod) { DARABONBA_PTR_SET_VALUE(httpMethod_, httpMethod) };


      // httpNegative Field Functions 
      bool hasHttpNegative() const { return this->httpNegative_ != nullptr;};
      void deleteHttpNegative() { this->httpNegative_ = nullptr;};
      inline bool getHttpNegative() const { DARABONBA_PTR_GET_DEFAULT(httpNegative_, false) };
      inline TaskOption& setHttpNegative(bool httpNegative) { DARABONBA_PTR_SET_VALUE(httpNegative_, httpNegative) };


      // httpPostContent Field Functions 
      bool hasHttpPostContent() const { return this->httpPostContent_ != nullptr;};
      void deleteHttpPostContent() { this->httpPostContent_ = nullptr;};
      inline string getHttpPostContent() const { DARABONBA_PTR_GET_DEFAULT(httpPostContent_, "") };
      inline TaskOption& setHttpPostContent(string httpPostContent) { DARABONBA_PTR_SET_VALUE(httpPostContent_, httpPostContent) };


      // httpResponseCharset Field Functions 
      bool hasHttpResponseCharset() const { return this->httpResponseCharset_ != nullptr;};
      void deleteHttpResponseCharset() { this->httpResponseCharset_ = nullptr;};
      inline string getHttpResponseCharset() const { DARABONBA_PTR_GET_DEFAULT(httpResponseCharset_, "") };
      inline TaskOption& setHttpResponseCharset(string httpResponseCharset) { DARABONBA_PTR_SET_VALUE(httpResponseCharset_, httpResponseCharset) };


      // httpResponseMatchContent Field Functions 
      bool hasHttpResponseMatchContent() const { return this->httpResponseMatchContent_ != nullptr;};
      void deleteHttpResponseMatchContent() { this->httpResponseMatchContent_ = nullptr;};
      inline string getHttpResponseMatchContent() const { DARABONBA_PTR_GET_DEFAULT(httpResponseMatchContent_, "") };
      inline TaskOption& setHttpResponseMatchContent(string httpResponseMatchContent) { DARABONBA_PTR_SET_VALUE(httpResponseMatchContent_, httpResponseMatchContent) };


      // httpURI Field Functions 
      bool hasHttpURI() const { return this->httpURI_ != nullptr;};
      void deleteHttpURI() { this->httpURI_ = nullptr;};
      inline string getHttpURI() const { DARABONBA_PTR_GET_DEFAULT(httpURI_, "") };
      inline TaskOption& setHttpURI(string httpURI) { DARABONBA_PTR_SET_VALUE(httpURI_, httpURI) };


      // interval Field Functions 
      bool hasInterval() const { return this->interval_ != nullptr;};
      void deleteInterval() { this->interval_ = nullptr;};
      inline int32_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
      inline TaskOption& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


      // telnetOrPingHost Field Functions 
      bool hasTelnetOrPingHost() const { return this->telnetOrPingHost_ != nullptr;};
      void deleteTelnetOrPingHost() { this->telnetOrPingHost_ = nullptr;};
      inline string getTelnetOrPingHost() const { DARABONBA_PTR_GET_DEFAULT(telnetOrPingHost_, "") };
      inline TaskOption& setTelnetOrPingHost(string telnetOrPingHost) { DARABONBA_PTR_SET_VALUE(telnetOrPingHost_, telnetOrPingHost) };


    protected:
      // The header of the HTTP request. Format: `Parameter name:Parameter value`. Separate multiple parameters with carriage return characters. Example:
      // 
      //     params1:value1
      //     params2:value2
      shared_ptr<string> httpHeader_ {};
      // The HTTP request method. Valid values:
      // 
      // *   GET
      // *   POST
      // *   HEAD
      // 
      // > This parameter must be specified when TaskType is set to HTTP. For more information about how to configure the TaskType parameter, see [CreateHostAvailability](https://help.aliyun.com/document_detail/115317.html).
      shared_ptr<string> httpMethod_ {};
      // The method to trigger an alert. The alert can be triggered based on whether the specified alert rule is included in the response body. Valid values:
      // 
      // *   true: If the HTTP response body includes the alert rule, an alert is triggered.
      // *   false: If the HTTP response does not include the alert rule, an alert is triggered.
      // 
      // > This parameter must be specified when TaskType is set to HTTP. For more information about how to configure the TaskType parameter, see [CreateHostAvailability](https://help.aliyun.com/document_detail/115317.html).
      shared_ptr<bool> httpNegative_ {};
      // The content of the HTTP POST request.
      shared_ptr<string> httpPostContent_ {};
      // The character set that is used in the HTTP response.
      // 
      // > Only UTF-8 is supported.
      shared_ptr<string> httpResponseCharset_ {};
      // The response to the HTTP request.
      shared_ptr<string> httpResponseMatchContent_ {};
      // The URI that you want to monitor. This parameter is required if the TaskType parameter is set to HTTP or Telnet.
      shared_ptr<string> httpURI_ {};
      // The interval at which detection requests are sent. Unit: seconds. Valid values: 15, 30, 60, 120, 300, 900, 1800, and 3600.
      // 
      // > This parameter is available only for the CloudMonitor agent V3.5.1 or later.
      shared_ptr<int32_t> interval_ {};
      // The domain name or IP address that you want to monitor.
      // 
      // >  This parameter is required if the TaskType parameter is set to PING. For more information about how to set the TaskType parameter, see [CreateHostAvailability](https://help.aliyun.com/document_detail/115317.html).
      shared_ptr<string> telnetOrPingHost_ {};
    };

    class AlertConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AlertConfig& obj) { 
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(NotifyType, notifyType_);
        DARABONBA_PTR_TO_JSON(SilenceTime, silenceTime_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(WebHook, webHook_);
      };
      friend void from_json(const Darabonba::Json& j, AlertConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(NotifyType, notifyType_);
        DARABONBA_PTR_FROM_JSON(SilenceTime, silenceTime_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(WebHook, webHook_);
      };
      AlertConfig() = default ;
      AlertConfig(const AlertConfig &) = default ;
      AlertConfig(AlertConfig &&) = default ;
      AlertConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AlertConfig() = default ;
      AlertConfig& operator=(const AlertConfig &) = default ;
      AlertConfig& operator=(AlertConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endTime_ == nullptr
        && this->notifyType_ == nullptr && this->silenceTime_ == nullptr && this->startTime_ == nullptr && this->webHook_ == nullptr; };
      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int32_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0) };
      inline AlertConfig& setEndTime(int32_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // notifyType Field Functions 
      bool hasNotifyType() const { return this->notifyType_ != nullptr;};
      void deleteNotifyType() { this->notifyType_ = nullptr;};
      inline int32_t getNotifyType() const { DARABONBA_PTR_GET_DEFAULT(notifyType_, 0) };
      inline AlertConfig& setNotifyType(int32_t notifyType) { DARABONBA_PTR_SET_VALUE(notifyType_, notifyType) };


      // silenceTime Field Functions 
      bool hasSilenceTime() const { return this->silenceTime_ != nullptr;};
      void deleteSilenceTime() { this->silenceTime_ = nullptr;};
      inline int32_t getSilenceTime() const { DARABONBA_PTR_GET_DEFAULT(silenceTime_, 0) };
      inline AlertConfig& setSilenceTime(int32_t silenceTime) { DARABONBA_PTR_SET_VALUE(silenceTime_, silenceTime) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int32_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0) };
      inline AlertConfig& setStartTime(int32_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // webHook Field Functions 
      bool hasWebHook() const { return this->webHook_ != nullptr;};
      void deleteWebHook() { this->webHook_ = nullptr;};
      inline string getWebHook() const { DARABONBA_PTR_GET_DEFAULT(webHook_, "") };
      inline AlertConfig& setWebHook(string webHook) { DARABONBA_PTR_SET_VALUE(webHook_, webHook) };


    protected:
      // The end of the time range during which the alert rule is effective. Valid values: 0 to 23.
      // 
      // For example, if the `AlertConfig.StartTime` parameter is set to 0 and the `AlertConfig.EndTime` parameter is set to 22, the alert rule is effective from 00:00:00 to 22:00:00.
      // 
      // > Alert notifications are sent based on the specified threshold only if the alert rule is effective.
      shared_ptr<int32_t> endTime_ {};
      // The alert notification methods. Valid values:
      // 
      // 0: Alert notifications are sent by using emails and DingTalk chatbots.
      // 
      // This parameter is required.
      shared_ptr<int32_t> notifyType_ {};
      // The mute period during which new alerts are not sent even if the trigger conditions are met. Unit: seconds. Default value: 86400. The default value indicates one day.
      shared_ptr<int32_t> silenceTime_ {};
      // The beginning of the time range during which the alert rule is effective. Valid values: 0 to 23.
      // 
      // For example, if the `AlertConfig.StartTime` parameter is set to 0 and the `AlertConfig.EndTime` parameter is set to 22, the alert rule is effective from 00:00:00 to 22:00:00.
      // 
      // > Alert notifications are sent based on the specified threshold only if the alert rule is effective.
      shared_ptr<int32_t> startTime_ {};
      // The callback URL.
      shared_ptr<string> webHook_ {};
    };

    virtual bool empty() const override { return this->alertConfig_ == nullptr
        && this->taskOption_ == nullptr && this->alertConfigEscalationList_ == nullptr && this->alertConfigTargetList_ == nullptr && this->groupId_ == nullptr && this->id_ == nullptr
        && this->instanceList_ == nullptr && this->regionId_ == nullptr && this->taskName_ == nullptr && this->taskScope_ == nullptr; };
    // alertConfig Field Functions 
    bool hasAlertConfig() const { return this->alertConfig_ != nullptr;};
    void deleteAlertConfig() { this->alertConfig_ = nullptr;};
    inline const ModifyHostAvailabilityRequest::AlertConfig & getAlertConfig() const { DARABONBA_PTR_GET_CONST(alertConfig_, ModifyHostAvailabilityRequest::AlertConfig) };
    inline ModifyHostAvailabilityRequest::AlertConfig getAlertConfig() { DARABONBA_PTR_GET(alertConfig_, ModifyHostAvailabilityRequest::AlertConfig) };
    inline ModifyHostAvailabilityRequest& setAlertConfig(const ModifyHostAvailabilityRequest::AlertConfig & alertConfig) { DARABONBA_PTR_SET_VALUE(alertConfig_, alertConfig) };
    inline ModifyHostAvailabilityRequest& setAlertConfig(ModifyHostAvailabilityRequest::AlertConfig && alertConfig) { DARABONBA_PTR_SET_RVALUE(alertConfig_, alertConfig) };


    // taskOption Field Functions 
    bool hasTaskOption() const { return this->taskOption_ != nullptr;};
    void deleteTaskOption() { this->taskOption_ = nullptr;};
    inline const ModifyHostAvailabilityRequest::TaskOption & getTaskOption() const { DARABONBA_PTR_GET_CONST(taskOption_, ModifyHostAvailabilityRequest::TaskOption) };
    inline ModifyHostAvailabilityRequest::TaskOption getTaskOption() { DARABONBA_PTR_GET(taskOption_, ModifyHostAvailabilityRequest::TaskOption) };
    inline ModifyHostAvailabilityRequest& setTaskOption(const ModifyHostAvailabilityRequest::TaskOption & taskOption) { DARABONBA_PTR_SET_VALUE(taskOption_, taskOption) };
    inline ModifyHostAvailabilityRequest& setTaskOption(ModifyHostAvailabilityRequest::TaskOption && taskOption) { DARABONBA_PTR_SET_RVALUE(taskOption_, taskOption) };


    // alertConfigEscalationList Field Functions 
    bool hasAlertConfigEscalationList() const { return this->alertConfigEscalationList_ != nullptr;};
    void deleteAlertConfigEscalationList() { this->alertConfigEscalationList_ = nullptr;};
    inline const vector<ModifyHostAvailabilityRequest::AlertConfigEscalationList> & getAlertConfigEscalationList() const { DARABONBA_PTR_GET_CONST(alertConfigEscalationList_, vector<ModifyHostAvailabilityRequest::AlertConfigEscalationList>) };
    inline vector<ModifyHostAvailabilityRequest::AlertConfigEscalationList> getAlertConfigEscalationList() { DARABONBA_PTR_GET(alertConfigEscalationList_, vector<ModifyHostAvailabilityRequest::AlertConfigEscalationList>) };
    inline ModifyHostAvailabilityRequest& setAlertConfigEscalationList(const vector<ModifyHostAvailabilityRequest::AlertConfigEscalationList> & alertConfigEscalationList) { DARABONBA_PTR_SET_VALUE(alertConfigEscalationList_, alertConfigEscalationList) };
    inline ModifyHostAvailabilityRequest& setAlertConfigEscalationList(vector<ModifyHostAvailabilityRequest::AlertConfigEscalationList> && alertConfigEscalationList) { DARABONBA_PTR_SET_RVALUE(alertConfigEscalationList_, alertConfigEscalationList) };


    // alertConfigTargetList Field Functions 
    bool hasAlertConfigTargetList() const { return this->alertConfigTargetList_ != nullptr;};
    void deleteAlertConfigTargetList() { this->alertConfigTargetList_ = nullptr;};
    inline const vector<ModifyHostAvailabilityRequest::AlertConfigTargetList> & getAlertConfigTargetList() const { DARABONBA_PTR_GET_CONST(alertConfigTargetList_, vector<ModifyHostAvailabilityRequest::AlertConfigTargetList>) };
    inline vector<ModifyHostAvailabilityRequest::AlertConfigTargetList> getAlertConfigTargetList() { DARABONBA_PTR_GET(alertConfigTargetList_, vector<ModifyHostAvailabilityRequest::AlertConfigTargetList>) };
    inline ModifyHostAvailabilityRequest& setAlertConfigTargetList(const vector<ModifyHostAvailabilityRequest::AlertConfigTargetList> & alertConfigTargetList) { DARABONBA_PTR_SET_VALUE(alertConfigTargetList_, alertConfigTargetList) };
    inline ModifyHostAvailabilityRequest& setAlertConfigTargetList(vector<ModifyHostAvailabilityRequest::AlertConfigTargetList> && alertConfigTargetList) { DARABONBA_PTR_SET_RVALUE(alertConfigTargetList_, alertConfigTargetList) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline ModifyHostAvailabilityRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ModifyHostAvailabilityRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceList Field Functions 
    bool hasInstanceList() const { return this->instanceList_ != nullptr;};
    void deleteInstanceList() { this->instanceList_ = nullptr;};
    inline const vector<string> & getInstanceList() const { DARABONBA_PTR_GET_CONST(instanceList_, vector<string>) };
    inline vector<string> getInstanceList() { DARABONBA_PTR_GET(instanceList_, vector<string>) };
    inline ModifyHostAvailabilityRequest& setInstanceList(const vector<string> & instanceList) { DARABONBA_PTR_SET_VALUE(instanceList_, instanceList) };
    inline ModifyHostAvailabilityRequest& setInstanceList(vector<string> && instanceList) { DARABONBA_PTR_SET_RVALUE(instanceList_, instanceList) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyHostAvailabilityRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline ModifyHostAvailabilityRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskScope Field Functions 
    bool hasTaskScope() const { return this->taskScope_ != nullptr;};
    void deleteTaskScope() { this->taskScope_ = nullptr;};
    inline string getTaskScope() const { DARABONBA_PTR_GET_DEFAULT(taskScope_, "") };
    inline ModifyHostAvailabilityRequest& setTaskScope(string taskScope) { DARABONBA_PTR_SET_VALUE(taskScope_, taskScope) };


  protected:
    shared_ptr<ModifyHostAvailabilityRequest::AlertConfig> alertConfig_ {};
    shared_ptr<ModifyHostAvailabilityRequest::TaskOption> taskOption_ {};
    // The alert configurations.
    // 
    // This parameter is required.
    shared_ptr<vector<ModifyHostAvailabilityRequest::AlertConfigEscalationList>> alertConfigEscalationList_ {};
    // The information about the resources for which alerts are triggered.
    shared_ptr<vector<ModifyHostAvailabilityRequest::AlertConfigTargetList>> alertConfigTargetList_ {};
    // The ID of the application group.
    // 
    // This parameter is required.
    shared_ptr<int64_t> groupId_ {};
    // The ID of the availability monitoring task.
    // 
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    // The ECS instances that are monitored. Valid values of N: 1 to 21.
    // 
    // > This parameter must be specified when `TaskScope` is set to `GROUP_SPEC_INSTANCE`.
    shared_ptr<vector<string>> instanceList_ {};
    shared_ptr<string> regionId_ {};
    // The name of the availability monitoring task.
    // 
    // This parameter is required.
    shared_ptr<string> taskName_ {};
    // The range of instances that are monitored by the availability monitoring task. Valid values:
    // 
    // *   GROUP: All ECS instances in the application group are monitored.
    // *   GROUP_SPEC_INSTANCE: Specified ECS instances in the application group are monitored. The TaskScope parameter must be used in combination with the InstanceList parameter. The InstanceList parameter specifies the ECS instances to be monitored.
    shared_ptr<string> taskScope_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
