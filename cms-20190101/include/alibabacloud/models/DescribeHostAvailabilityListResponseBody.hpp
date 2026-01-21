// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHOSTAVAILABILITYLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHOSTAVAILABILITYLISTRESPONSEBODY_HPP_
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
  class DescribeHostAvailabilityListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHostAvailabilityListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TaskList, taskList_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHostAvailabilityListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TaskList, taskList_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeHostAvailabilityListResponseBody() = default ;
    DescribeHostAvailabilityListResponseBody(const DescribeHostAvailabilityListResponseBody &) = default ;
    DescribeHostAvailabilityListResponseBody(DescribeHostAvailabilityListResponseBody &&) = default ;
    DescribeHostAvailabilityListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHostAvailabilityListResponseBody() = default ;
    DescribeHostAvailabilityListResponseBody& operator=(const DescribeHostAvailabilityListResponseBody &) = default ;
    DescribeHostAvailabilityListResponseBody& operator=(DescribeHostAvailabilityListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TaskList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskList& obj) { 
        DARABONBA_PTR_TO_JSON(NodeTaskConfig, nodeTaskConfig_);
      };
      friend void from_json(const Darabonba::Json& j, TaskList& obj) { 
        DARABONBA_PTR_FROM_JSON(NodeTaskConfig, nodeTaskConfig_);
      };
      TaskList() = default ;
      TaskList(const TaskList &) = default ;
      TaskList(TaskList &&) = default ;
      TaskList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskList() = default ;
      TaskList& operator=(const TaskList &) = default ;
      TaskList& operator=(TaskList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class NodeTaskConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NodeTaskConfig& obj) { 
          DARABONBA_PTR_TO_JSON(AlertConfig, alertConfig_);
          DARABONBA_PTR_TO_JSON(Disabled, disabled_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Instances, instances_);
          DARABONBA_PTR_TO_JSON(TaskName, taskName_);
          DARABONBA_PTR_TO_JSON(TaskOption, taskOption_);
          DARABONBA_PTR_TO_JSON(TaskScope, taskScope_);
          DARABONBA_PTR_TO_JSON(TaskType, taskType_);
        };
        friend void from_json(const Darabonba::Json& j, NodeTaskConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(AlertConfig, alertConfig_);
          DARABONBA_PTR_FROM_JSON(Disabled, disabled_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Instances, instances_);
          DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
          DARABONBA_PTR_FROM_JSON(TaskOption, taskOption_);
          DARABONBA_PTR_FROM_JSON(TaskScope, taskScope_);
          DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
        };
        NodeTaskConfig() = default ;
        NodeTaskConfig(const NodeTaskConfig &) = default ;
        NodeTaskConfig(NodeTaskConfig &&) = default ;
        NodeTaskConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NodeTaskConfig() = default ;
        NodeTaskConfig& operator=(const NodeTaskConfig &) = default ;
        NodeTaskConfig& operator=(NodeTaskConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TaskOption : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TaskOption& obj) { 
            DARABONBA_PTR_TO_JSON(HttpKeyword, httpKeyword_);
            DARABONBA_PTR_TO_JSON(HttpMethod, httpMethod_);
            DARABONBA_PTR_TO_JSON(HttpNegative, httpNegative_);
            DARABONBA_PTR_TO_JSON(HttpPostContent, httpPostContent_);
            DARABONBA_PTR_TO_JSON(HttpResponseCharset, httpResponseCharset_);
            DARABONBA_PTR_TO_JSON(HttpURI, httpURI_);
            DARABONBA_PTR_TO_JSON(Interval, interval_);
            DARABONBA_PTR_TO_JSON(TelnetOrPingHost, telnetOrPingHost_);
          };
          friend void from_json(const Darabonba::Json& j, TaskOption& obj) { 
            DARABONBA_PTR_FROM_JSON(HttpKeyword, httpKeyword_);
            DARABONBA_PTR_FROM_JSON(HttpMethod, httpMethod_);
            DARABONBA_PTR_FROM_JSON(HttpNegative, httpNegative_);
            DARABONBA_PTR_FROM_JSON(HttpPostContent, httpPostContent_);
            DARABONBA_PTR_FROM_JSON(HttpResponseCharset, httpResponseCharset_);
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
          virtual bool empty() const override { return this->httpKeyword_ == nullptr
        && this->httpMethod_ == nullptr && this->httpNegative_ == nullptr && this->httpPostContent_ == nullptr && this->httpResponseCharset_ == nullptr && this->httpURI_ == nullptr
        && this->interval_ == nullptr && this->telnetOrPingHost_ == nullptr; };
          // httpKeyword Field Functions 
          bool hasHttpKeyword() const { return this->httpKeyword_ != nullptr;};
          void deleteHttpKeyword() { this->httpKeyword_ = nullptr;};
          inline string getHttpKeyword() const { DARABONBA_PTR_GET_DEFAULT(httpKeyword_, "") };
          inline TaskOption& setHttpKeyword(string httpKeyword) { DARABONBA_PTR_SET_VALUE(httpKeyword_, httpKeyword) };


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
          // The response to the HTTP request.
          shared_ptr<string> httpKeyword_ {};
          // The HTTP request method. Valid values:
          // 
          // *   GET
          // *   POST
          // *   HEAD
          shared_ptr<string> httpMethod_ {};
          // The method to trigger an alert. The alert can be triggered based on whether the specified alert rule is included in the response body. Valid values:
          // 
          // *   true: If the HTTP response body includes the alert rule, an alert is triggered.
          // *   false: If the HTTP response does not include the alert rule, an alert is triggered.
          shared_ptr<bool> httpNegative_ {};
          // The content of the HTTP POST request.
          shared_ptr<string> httpPostContent_ {};
          // The character set that is used in the HTTP response.
          shared_ptr<string> httpResponseCharset_ {};
          // The URI that you want to monitor. If the TaskType parameter is set to HTTP, this parameter is required.
          shared_ptr<string> httpURI_ {};
          // The interval at which detection requests are sent. Unit: seconds.
          shared_ptr<int32_t> interval_ {};
          // The domain name or IP address that you want to monitor.
          shared_ptr<string> telnetOrPingHost_ {};
        };

        class Instances : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Instances& obj) { 
            DARABONBA_PTR_TO_JSON(Instance, instance_);
          };
          friend void from_json(const Darabonba::Json& j, Instances& obj) { 
            DARABONBA_PTR_FROM_JSON(Instance, instance_);
          };
          Instances() = default ;
          Instances(const Instances &) = default ;
          Instances(Instances &&) = default ;
          Instances(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Instances() = default ;
          Instances& operator=(const Instances &) = default ;
          Instances& operator=(Instances &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->instance_ == nullptr; };
          // instance Field Functions 
          bool hasInstance() const { return this->instance_ != nullptr;};
          void deleteInstance() { this->instance_ = nullptr;};
          inline const vector<string> & getInstance() const { DARABONBA_PTR_GET_CONST(instance_, vector<string>) };
          inline vector<string> getInstance() { DARABONBA_PTR_GET(instance_, vector<string>) };
          inline Instances& setInstance(const vector<string> & instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };
          inline Instances& setInstance(vector<string> && instance) { DARABONBA_PTR_SET_RVALUE(instance_, instance) };


        protected:
          shared_ptr<vector<string>> instance_ {};
        };

        class AlertConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AlertConfig& obj) { 
            DARABONBA_PTR_TO_JSON(EndTime, endTime_);
            DARABONBA_PTR_TO_JSON(EscalationList, escalationList_);
            DARABONBA_PTR_TO_JSON(NotifyType, notifyType_);
            DARABONBA_PTR_TO_JSON(SilenceTime, silenceTime_);
            DARABONBA_PTR_TO_JSON(StartTime, startTime_);
            DARABONBA_PTR_TO_JSON(TargetList, targetList_);
            DARABONBA_PTR_TO_JSON(WebHook, webHook_);
          };
          friend void from_json(const Darabonba::Json& j, AlertConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
            DARABONBA_PTR_FROM_JSON(EscalationList, escalationList_);
            DARABONBA_PTR_FROM_JSON(NotifyType, notifyType_);
            DARABONBA_PTR_FROM_JSON(SilenceTime, silenceTime_);
            DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
            DARABONBA_PTR_FROM_JSON(TargetList, targetList_);
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
          class TargetList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TargetList& obj) { 
              DARABONBA_PTR_TO_JSON(Target, target_);
            };
            friend void from_json(const Darabonba::Json& j, TargetList& obj) { 
              DARABONBA_PTR_FROM_JSON(Target, target_);
            };
            TargetList() = default ;
            TargetList(const TargetList &) = default ;
            TargetList(TargetList &&) = default ;
            TargetList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TargetList() = default ;
            TargetList& operator=(const TargetList &) = default ;
            TargetList& operator=(TargetList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Target : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Target& obj) { 
                DARABONBA_PTR_TO_JSON(Arn, arn_);
                DARABONBA_PTR_TO_JSON(Id, id_);
                DARABONBA_PTR_TO_JSON(JsonParams, jsonParams_);
                DARABONBA_PTR_TO_JSON(Level, level_);
              };
              friend void from_json(const Darabonba::Json& j, Target& obj) { 
                DARABONBA_PTR_FROM_JSON(Arn, arn_);
                DARABONBA_PTR_FROM_JSON(Id, id_);
                DARABONBA_PTR_FROM_JSON(JsonParams, jsonParams_);
                DARABONBA_PTR_FROM_JSON(Level, level_);
              };
              Target() = default ;
              Target(const Target &) = default ;
              Target(Target &&) = default ;
              Target(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Target() = default ;
              Target& operator=(const Target &) = default ;
              Target& operator=(Target &&) = default ;
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
              inline Target& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


              // id Field Functions 
              bool hasId() const { return this->id_ != nullptr;};
              void deleteId() { this->id_ = nullptr;};
              inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
              inline Target& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


              // jsonParams Field Functions 
              bool hasJsonParams() const { return this->jsonParams_ != nullptr;};
              void deleteJsonParams() { this->jsonParams_ = nullptr;};
              inline string getJsonParams() const { DARABONBA_PTR_GET_DEFAULT(jsonParams_, "") };
              inline Target& setJsonParams(string jsonParams) { DARABONBA_PTR_SET_VALUE(jsonParams_, jsonParams) };


              // level Field Functions 
              bool hasLevel() const { return this->level_ != nullptr;};
              void deleteLevel() { this->level_ = nullptr;};
              inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
              inline Target& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


            protected:
              // The Alibaba Cloud Resource Name (ARN) of the function.
              // 
              // Format: `arn:acs:${Service}:${Region}:${Account}:${ResourceType}/${ResourceId}`. Fields:
              // 
              // *   Service: the service code
              // *   Region: the region ID
              // *   Account: the ID of the Alibaba Cloud account
              // *   ResourceType: the resource type
              // *   ResourceId: the resource ID.
              shared_ptr<string> arn_ {};
              // The ID of the resource that triggers the alert.
              shared_ptr<string> id_ {};
              // The JSON-formatted parameters of the alert callback.
              shared_ptr<string> jsonParams_ {};
              // The alert level. Valid values:
              // 
              // *   INFO
              // *   WARN
              // *   CRITICAL
              shared_ptr<string> level_ {};
            };

            virtual bool empty() const override { return this->target_ == nullptr; };
            // target Field Functions 
            bool hasTarget() const { return this->target_ != nullptr;};
            void deleteTarget() { this->target_ = nullptr;};
            inline const vector<TargetList::Target> & getTarget() const { DARABONBA_PTR_GET_CONST(target_, vector<TargetList::Target>) };
            inline vector<TargetList::Target> getTarget() { DARABONBA_PTR_GET(target_, vector<TargetList::Target>) };
            inline TargetList& setTarget(const vector<TargetList::Target> & target) { DARABONBA_PTR_SET_VALUE(target_, target) };
            inline TargetList& setTarget(vector<TargetList::Target> && target) { DARABONBA_PTR_SET_RVALUE(target_, target) };


          protected:
            shared_ptr<vector<TargetList::Target>> target_ {};
          };

          class EscalationList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const EscalationList& obj) { 
              DARABONBA_PTR_TO_JSON(escalationList, escalationList_);
            };
            friend void from_json(const Darabonba::Json& j, EscalationList& obj) { 
              DARABONBA_PTR_FROM_JSON(escalationList, escalationList_);
            };
            EscalationList() = default ;
            EscalationList(const EscalationList &) = default ;
            EscalationList(EscalationList &&) = default ;
            EscalationList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~EscalationList() = default ;
            EscalationList& operator=(const EscalationList &) = default ;
            EscalationList& operator=(EscalationList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class EscalationListItem : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const EscalationListItem& obj) { 
                DARABONBA_PTR_TO_JSON(Aggregate, aggregate_);
                DARABONBA_PTR_TO_JSON(MetricName, metricName_);
                DARABONBA_PTR_TO_JSON(Operator, operator_);
                DARABONBA_PTR_TO_JSON(Times, times_);
                DARABONBA_PTR_TO_JSON(Value, value_);
              };
              friend void from_json(const Darabonba::Json& j, EscalationListItem& obj) { 
                DARABONBA_PTR_FROM_JSON(Aggregate, aggregate_);
                DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
                DARABONBA_PTR_FROM_JSON(Operator, operator_);
                DARABONBA_PTR_FROM_JSON(Times, times_);
                DARABONBA_PTR_FROM_JSON(Value, value_);
              };
              EscalationListItem() = default ;
              EscalationListItem(const EscalationListItem &) = default ;
              EscalationListItem(EscalationListItem &&) = default ;
              EscalationListItem(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~EscalationListItem() = default ;
              EscalationListItem& operator=(const EscalationListItem &) = default ;
              EscalationListItem& operator=(EscalationListItem &&) = default ;
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
              inline EscalationListItem& setAggregate(string aggregate) { DARABONBA_PTR_SET_VALUE(aggregate_, aggregate) };


              // metricName Field Functions 
              bool hasMetricName() const { return this->metricName_ != nullptr;};
              void deleteMetricName() { this->metricName_ = nullptr;};
              inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
              inline EscalationListItem& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


              // operator Field Functions 
              bool hasOperator() const { return this->operator_ != nullptr;};
              void deleteOperator() { this->operator_ = nullptr;};
              inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
              inline EscalationListItem& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


              // times Field Functions 
              bool hasTimes() const { return this->times_ != nullptr;};
              void deleteTimes() { this->times_ = nullptr;};
              inline string getTimes() const { DARABONBA_PTR_GET_DEFAULT(times_, "") };
              inline EscalationListItem& setTimes(string times) { DARABONBA_PTR_SET_VALUE(times_, times) };


              // value Field Functions 
              bool hasValue() const { return this->value_ != nullptr;};
              void deleteValue() { this->value_ = nullptr;};
              inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
              inline EscalationListItem& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


            protected:
              // The method used to calculate metric values that trigger alerts. Valid values:
              // 
              // *   Value: the value of the HTTP status code
              // *   Average: the average HTTP response time
              // *   Value: the value of the Telnet status code
              // *   TelnetLatency: the average Telnet response time
              // *   Average: the average Ping packet loss rate
              shared_ptr<string> aggregate_ {};
              // The name of the metric. Valid values:
              // 
              // *   HttpStatus
              // *   HttpLatency
              // *   TelnetStatus
              // *   TelnetLatency
              // *   PingLostRate
              shared_ptr<string> metricName_ {};
              // The comparison operator that is used in the alert rule. Valid values:
              // 
              // *   `>`
              // *   `>=`
              // *   `<`
              // *   `<=`
              // *   `=`
              shared_ptr<string> operator_ {};
              // The consecutive number of times for which the metric value is measured before an alert is triggered.
              shared_ptr<string> times_ {};
              // The alert threshold.
              shared_ptr<string> value_ {};
            };

            virtual bool empty() const override { return this->escalationList_ == nullptr; };
            // escalationList Field Functions 
            bool hasEscalationList() const { return this->escalationList_ != nullptr;};
            void deleteEscalationList() { this->escalationList_ = nullptr;};
            inline const vector<EscalationList::EscalationListItem> & getEscalationList() const { DARABONBA_PTR_GET_CONST(escalationList_, vector<EscalationList::EscalationListItem>) };
            inline vector<EscalationList::EscalationListItem> getEscalationList() { DARABONBA_PTR_GET(escalationList_, vector<EscalationList::EscalationListItem>) };
            inline EscalationList& setEscalationList(const vector<EscalationList::EscalationListItem> & escalationList) { DARABONBA_PTR_SET_VALUE(escalationList_, escalationList) };
            inline EscalationList& setEscalationList(vector<EscalationList::EscalationListItem> && escalationList) { DARABONBA_PTR_SET_RVALUE(escalationList_, escalationList) };


          protected:
            shared_ptr<vector<EscalationList::EscalationListItem>> escalationList_ {};
          };

          virtual bool empty() const override { return this->endTime_ == nullptr
        && this->escalationList_ == nullptr && this->notifyType_ == nullptr && this->silenceTime_ == nullptr && this->startTime_ == nullptr && this->targetList_ == nullptr
        && this->webHook_ == nullptr; };
          // endTime Field Functions 
          bool hasEndTime() const { return this->endTime_ != nullptr;};
          void deleteEndTime() { this->endTime_ = nullptr;};
          inline int32_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0) };
          inline AlertConfig& setEndTime(int32_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


          // escalationList Field Functions 
          bool hasEscalationList() const { return this->escalationList_ != nullptr;};
          void deleteEscalationList() { this->escalationList_ = nullptr;};
          inline const AlertConfig::EscalationList & getEscalationList() const { DARABONBA_PTR_GET_CONST(escalationList_, AlertConfig::EscalationList) };
          inline AlertConfig::EscalationList getEscalationList() { DARABONBA_PTR_GET(escalationList_, AlertConfig::EscalationList) };
          inline AlertConfig& setEscalationList(const AlertConfig::EscalationList & escalationList) { DARABONBA_PTR_SET_VALUE(escalationList_, escalationList) };
          inline AlertConfig& setEscalationList(AlertConfig::EscalationList && escalationList) { DARABONBA_PTR_SET_RVALUE(escalationList_, escalationList) };


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


          // targetList Field Functions 
          bool hasTargetList() const { return this->targetList_ != nullptr;};
          void deleteTargetList() { this->targetList_ = nullptr;};
          inline const AlertConfig::TargetList & getTargetList() const { DARABONBA_PTR_GET_CONST(targetList_, AlertConfig::TargetList) };
          inline AlertConfig::TargetList getTargetList() { DARABONBA_PTR_GET(targetList_, AlertConfig::TargetList) };
          inline AlertConfig& setTargetList(const AlertConfig::TargetList & targetList) { DARABONBA_PTR_SET_VALUE(targetList_, targetList) };
          inline AlertConfig& setTargetList(AlertConfig::TargetList && targetList) { DARABONBA_PTR_SET_RVALUE(targetList_, targetList) };


          // webHook Field Functions 
          bool hasWebHook() const { return this->webHook_ != nullptr;};
          void deleteWebHook() { this->webHook_ = nullptr;};
          inline string getWebHook() const { DARABONBA_PTR_GET_DEFAULT(webHook_, "") };
          inline AlertConfig& setWebHook(string webHook) { DARABONBA_PTR_SET_VALUE(webHook_, webHook) };


        protected:
          // The end of the time period during which the alert rule is effective. Valid values: 0 to 23.
          // 
          // For example, if the `AlertConfig.StartTime` parameter is set to 0 and the `AlertConfig.EndTime` parameter is set to 22, the alert rule is effective from 00:00:00 to 22:00:00.
          // 
          // >  Alert notifications are sent based on the specified threshold only if the alert rule is effective.
          shared_ptr<int32_t> endTime_ {};
          // The trigger conditions of the alert rule.
          shared_ptr<AlertConfig::EscalationList> escalationList_ {};
          // The alert notification methods. Valid values:
          // 
          // *   2: Alert notifications are sent by using emails and DingTalk chatbots.
          // *   1: Alert notifications are sent by using emails and DingTalk chatbots.
          // *   0: Alert notifications are sent by using emails and DingTalk chatbots.
          shared_ptr<int32_t> notifyType_ {};
          // The mute period during which new alerts are not sent even if the trigger conditions are met. Unit: seconds. Default value: 86400.
          shared_ptr<int32_t> silenceTime_ {};
          // The beginning of the time period during which the alert rule is effective. Valid values: 0 to 23.
          // 
          // For example, if the `AlertConfig.StartTime` parameter is set to 0 and the `AlertConfig.EndTime` parameter is set to 22, the alert rule is effective from 00:00:00 to 22:00:00.
          // 
          // >  Alert notifications are sent based on the specified threshold only if the alert rule is effective.
          shared_ptr<int32_t> startTime_ {};
          // The monitored resources.
          shared_ptr<AlertConfig::TargetList> targetList_ {};
          // The callback URL.
          // 
          // CloudMonitor pushes an alert notification to the specified callback URL by sending an HTTP POST request. Only the HTTP protocol is supported.
          shared_ptr<string> webHook_ {};
        };

        virtual bool empty() const override { return this->alertConfig_ == nullptr
        && this->disabled_ == nullptr && this->groupId_ == nullptr && this->groupName_ == nullptr && this->id_ == nullptr && this->instances_ == nullptr
        && this->taskName_ == nullptr && this->taskOption_ == nullptr && this->taskScope_ == nullptr && this->taskType_ == nullptr; };
        // alertConfig Field Functions 
        bool hasAlertConfig() const { return this->alertConfig_ != nullptr;};
        void deleteAlertConfig() { this->alertConfig_ = nullptr;};
        inline const NodeTaskConfig::AlertConfig & getAlertConfig() const { DARABONBA_PTR_GET_CONST(alertConfig_, NodeTaskConfig::AlertConfig) };
        inline NodeTaskConfig::AlertConfig getAlertConfig() { DARABONBA_PTR_GET(alertConfig_, NodeTaskConfig::AlertConfig) };
        inline NodeTaskConfig& setAlertConfig(const NodeTaskConfig::AlertConfig & alertConfig) { DARABONBA_PTR_SET_VALUE(alertConfig_, alertConfig) };
        inline NodeTaskConfig& setAlertConfig(NodeTaskConfig::AlertConfig && alertConfig) { DARABONBA_PTR_SET_RVALUE(alertConfig_, alertConfig) };


        // disabled Field Functions 
        bool hasDisabled() const { return this->disabled_ != nullptr;};
        void deleteDisabled() { this->disabled_ = nullptr;};
        inline bool getDisabled() const { DARABONBA_PTR_GET_DEFAULT(disabled_, false) };
        inline NodeTaskConfig& setDisabled(bool disabled) { DARABONBA_PTR_SET_VALUE(disabled_, disabled) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
        inline NodeTaskConfig& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline NodeTaskConfig& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline NodeTaskConfig& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // instances Field Functions 
        bool hasInstances() const { return this->instances_ != nullptr;};
        void deleteInstances() { this->instances_ = nullptr;};
        inline const NodeTaskConfig::Instances & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, NodeTaskConfig::Instances) };
        inline NodeTaskConfig::Instances getInstances() { DARABONBA_PTR_GET(instances_, NodeTaskConfig::Instances) };
        inline NodeTaskConfig& setInstances(const NodeTaskConfig::Instances & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
        inline NodeTaskConfig& setInstances(NodeTaskConfig::Instances && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


        // taskName Field Functions 
        bool hasTaskName() const { return this->taskName_ != nullptr;};
        void deleteTaskName() { this->taskName_ = nullptr;};
        inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
        inline NodeTaskConfig& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


        // taskOption Field Functions 
        bool hasTaskOption() const { return this->taskOption_ != nullptr;};
        void deleteTaskOption() { this->taskOption_ = nullptr;};
        inline const NodeTaskConfig::TaskOption & getTaskOption() const { DARABONBA_PTR_GET_CONST(taskOption_, NodeTaskConfig::TaskOption) };
        inline NodeTaskConfig::TaskOption getTaskOption() { DARABONBA_PTR_GET(taskOption_, NodeTaskConfig::TaskOption) };
        inline NodeTaskConfig& setTaskOption(const NodeTaskConfig::TaskOption & taskOption) { DARABONBA_PTR_SET_VALUE(taskOption_, taskOption) };
        inline NodeTaskConfig& setTaskOption(NodeTaskConfig::TaskOption && taskOption) { DARABONBA_PTR_SET_RVALUE(taskOption_, taskOption) };


        // taskScope Field Functions 
        bool hasTaskScope() const { return this->taskScope_ != nullptr;};
        void deleteTaskScope() { this->taskScope_ = nullptr;};
        inline string getTaskScope() const { DARABONBA_PTR_GET_DEFAULT(taskScope_, "") };
        inline NodeTaskConfig& setTaskScope(string taskScope) { DARABONBA_PTR_SET_VALUE(taskScope_, taskScope) };


        // taskType Field Functions 
        bool hasTaskType() const { return this->taskType_ != nullptr;};
        void deleteTaskType() { this->taskType_ = nullptr;};
        inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
        inline NodeTaskConfig& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


      protected:
        // The configurations of the alert rule.
        shared_ptr<NodeTaskConfig::AlertConfig> alertConfig_ {};
        // Indicates whether the availability monitoring task is disabled. Valid values:
        // 
        // *   true: The availability monitoring task is disabled.
        // *   false: The availability monitoring task is enabled.
        shared_ptr<bool> disabled_ {};
        // The ID of the application group.
        shared_ptr<int64_t> groupId_ {};
        // The name of the application group.
        shared_ptr<string> groupName_ {};
        // The ID of the availability monitoring task.
        shared_ptr<int64_t> id_ {};
        // The ECS instances that are monitored.
        shared_ptr<NodeTaskConfig::Instances> instances_ {};
        // The name of the availability monitoring task.
        shared_ptr<string> taskName_ {};
        // The optional parameters of the availability monitoring task.
        shared_ptr<NodeTaskConfig::TaskOption> taskOption_ {};
        // The range of instances that are monitored by the availability monitoring task. Valid values:
        // 
        // *   GROUP: All ECS instances in the application group are monitored.
        // *   GROUP_SPEC_INSTANCE: Specified ECS instances in the application group are monitored.
        shared_ptr<string> taskScope_ {};
        // The task type. Valid values:
        // 
        // *   PING
        // *   TELNET
        // *   HTTP
        shared_ptr<string> taskType_ {};
      };

      virtual bool empty() const override { return this->nodeTaskConfig_ == nullptr; };
      // nodeTaskConfig Field Functions 
      bool hasNodeTaskConfig() const { return this->nodeTaskConfig_ != nullptr;};
      void deleteNodeTaskConfig() { this->nodeTaskConfig_ = nullptr;};
      inline const vector<TaskList::NodeTaskConfig> & getNodeTaskConfig() const { DARABONBA_PTR_GET_CONST(nodeTaskConfig_, vector<TaskList::NodeTaskConfig>) };
      inline vector<TaskList::NodeTaskConfig> getNodeTaskConfig() { DARABONBA_PTR_GET(nodeTaskConfig_, vector<TaskList::NodeTaskConfig>) };
      inline TaskList& setNodeTaskConfig(const vector<TaskList::NodeTaskConfig> & nodeTaskConfig) { DARABONBA_PTR_SET_VALUE(nodeTaskConfig_, nodeTaskConfig) };
      inline TaskList& setNodeTaskConfig(vector<TaskList::NodeTaskConfig> && nodeTaskConfig) { DARABONBA_PTR_SET_RVALUE(nodeTaskConfig_, nodeTaskConfig) };


    protected:
      shared_ptr<vector<TaskList::NodeTaskConfig>> nodeTaskConfig_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->taskList_ == nullptr && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeHostAvailabilityListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeHostAvailabilityListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHostAvailabilityListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeHostAvailabilityListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // taskList Field Functions 
    bool hasTaskList() const { return this->taskList_ != nullptr;};
    void deleteTaskList() { this->taskList_ = nullptr;};
    inline const DescribeHostAvailabilityListResponseBody::TaskList & getTaskList() const { DARABONBA_PTR_GET_CONST(taskList_, DescribeHostAvailabilityListResponseBody::TaskList) };
    inline DescribeHostAvailabilityListResponseBody::TaskList getTaskList() { DARABONBA_PTR_GET(taskList_, DescribeHostAvailabilityListResponseBody::TaskList) };
    inline DescribeHostAvailabilityListResponseBody& setTaskList(const DescribeHostAvailabilityListResponseBody::TaskList & taskList) { DARABONBA_PTR_SET_VALUE(taskList_, taskList) };
    inline DescribeHostAvailabilityListResponseBody& setTaskList(DescribeHostAvailabilityListResponseBody::TaskList && taskList) { DARABONBA_PTR_SET_RVALUE(taskList_, taskList) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeHostAvailabilityListResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The HTTP status code.
    // 
    // >  The status code 200 indicates that the request was successful.
    shared_ptr<string> code_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
    // The details of the availability monitoring tasks.
    shared_ptr<DescribeHostAvailabilityListResponseBody::TaskList> taskList_ {};
    // The total number of returned entries.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
