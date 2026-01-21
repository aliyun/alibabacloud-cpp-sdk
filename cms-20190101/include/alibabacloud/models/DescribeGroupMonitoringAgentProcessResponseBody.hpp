// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPMONITORINGAGENTPROCESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPMONITORINGAGENTPROCESSRESPONSEBODY_HPP_
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
  class DescribeGroupMonitoringAgentProcessResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupMonitoringAgentProcessResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Processes, processes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupMonitoringAgentProcessResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Processes, processes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeGroupMonitoringAgentProcessResponseBody() = default ;
    DescribeGroupMonitoringAgentProcessResponseBody(const DescribeGroupMonitoringAgentProcessResponseBody &) = default ;
    DescribeGroupMonitoringAgentProcessResponseBody(DescribeGroupMonitoringAgentProcessResponseBody &&) = default ;
    DescribeGroupMonitoringAgentProcessResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupMonitoringAgentProcessResponseBody() = default ;
    DescribeGroupMonitoringAgentProcessResponseBody& operator=(const DescribeGroupMonitoringAgentProcessResponseBody &) = default ;
    DescribeGroupMonitoringAgentProcessResponseBody& operator=(DescribeGroupMonitoringAgentProcessResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Processes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Processes& obj) { 
        DARABONBA_PTR_TO_JSON(Process, process_);
      };
      friend void from_json(const Darabonba::Json& j, Processes& obj) { 
        DARABONBA_PTR_FROM_JSON(Process, process_);
      };
      Processes() = default ;
      Processes(const Processes &) = default ;
      Processes(Processes &&) = default ;
      Processes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Processes() = default ;
      Processes& operator=(const Processes &) = default ;
      Processes& operator=(Processes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Process : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Process& obj) { 
          DARABONBA_PTR_TO_JSON(AlertConfig, alertConfig_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(MatchExpress, matchExpress_);
          DARABONBA_PTR_TO_JSON(MatchExpressFilterRelation, matchExpressFilterRelation_);
          DARABONBA_PTR_TO_JSON(ProcessName, processName_);
        };
        friend void from_json(const Darabonba::Json& j, Process& obj) { 
          DARABONBA_PTR_FROM_JSON(AlertConfig, alertConfig_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(MatchExpress, matchExpress_);
          DARABONBA_PTR_FROM_JSON(MatchExpressFilterRelation, matchExpressFilterRelation_);
          DARABONBA_PTR_FROM_JSON(ProcessName, processName_);
        };
        Process() = default ;
        Process(const Process &) = default ;
        Process(Process &&) = default ;
        Process(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Process() = default ;
        Process& operator=(const Process &) = default ;
        Process& operator=(Process &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class MatchExpress : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MatchExpress& obj) { 
            DARABONBA_PTR_TO_JSON(MatchExpress, matchExpress_);
          };
          friend void from_json(const Darabonba::Json& j, MatchExpress& obj) { 
            DARABONBA_PTR_FROM_JSON(MatchExpress, matchExpress_);
          };
          MatchExpress() = default ;
          MatchExpress(const MatchExpress &) = default ;
          MatchExpress(MatchExpress &&) = default ;
          MatchExpress(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MatchExpress() = default ;
          MatchExpress& operator=(const MatchExpress &) = default ;
          MatchExpress& operator=(MatchExpress &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class MatchExpressItem : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const MatchExpressItem& obj) { 
              DARABONBA_PTR_TO_JSON(Function, function_);
              DARABONBA_PTR_TO_JSON(Name, name_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, MatchExpressItem& obj) { 
              DARABONBA_PTR_FROM_JSON(Function, function_);
              DARABONBA_PTR_FROM_JSON(Name, name_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            MatchExpressItem() = default ;
            MatchExpressItem(const MatchExpressItem &) = default ;
            MatchExpressItem(MatchExpressItem &&) = default ;
            MatchExpressItem(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~MatchExpressItem() = default ;
            MatchExpressItem& operator=(const MatchExpressItem &) = default ;
            MatchExpressItem& operator=(MatchExpressItem &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->function_ == nullptr
        && this->name_ == nullptr && this->value_ == nullptr; };
            // function Field Functions 
            bool hasFunction() const { return this->function_ != nullptr;};
            void deleteFunction() { this->function_ = nullptr;};
            inline string getFunction() const { DARABONBA_PTR_GET_DEFAULT(function_, "") };
            inline MatchExpressItem& setFunction(string function) { DARABONBA_PTR_SET_VALUE(function_, function) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline MatchExpressItem& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline MatchExpressItem& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The matching condition. Valid values:
            // 
            // *   all (default): matches all
            // *   startWith: starts with a prefix
            // *   endWith: ends with a suffix
            // *   contains: contains
            // *   notContains: excludes
            // *   equals: equals
            // 
            // >  The matched instances are monitored by the process monitoring task.
            shared_ptr<string> function_ {};
            // The criteria based on which the instances are matched.
            // 
            // >  Set the value to `name`. The value name indicates that the instances are matched based on the instance name.
            shared_ptr<string> name_ {};
            // The keyword used to match the instance name.
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->matchExpress_ == nullptr; };
          // matchExpress Field Functions 
          bool hasMatchExpress() const { return this->matchExpress_ != nullptr;};
          void deleteMatchExpress() { this->matchExpress_ = nullptr;};
          inline const vector<MatchExpress::MatchExpressItem> & getMatchExpress() const { DARABONBA_PTR_GET_CONST(matchExpress_, vector<MatchExpress::MatchExpressItem>) };
          inline vector<MatchExpress::MatchExpressItem> getMatchExpress() { DARABONBA_PTR_GET(matchExpress_, vector<MatchExpress::MatchExpressItem>) };
          inline MatchExpress& setMatchExpress(const vector<MatchExpress::MatchExpressItem> & matchExpress) { DARABONBA_PTR_SET_VALUE(matchExpress_, matchExpress) };
          inline MatchExpress& setMatchExpress(vector<MatchExpress::MatchExpressItem> && matchExpress) { DARABONBA_PTR_SET_RVALUE(matchExpress_, matchExpress) };


        protected:
          shared_ptr<vector<MatchExpress::MatchExpressItem>> matchExpress_ {};
        };

        class AlertConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AlertConfig& obj) { 
            DARABONBA_PTR_TO_JSON(AlertConfig, alertConfig_);
          };
          friend void from_json(const Darabonba::Json& j, AlertConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(AlertConfig, alertConfig_);
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
          class AlertConfigItem : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const AlertConfigItem& obj) { 
              DARABONBA_PTR_TO_JSON(ComparisonOperator, comparisonOperator_);
              DARABONBA_PTR_TO_JSON(EffectiveInterval, effectiveInterval_);
              DARABONBA_PTR_TO_JSON(EscalationsLevel, escalationsLevel_);
              DARABONBA_PTR_TO_JSON(NoEffectiveInterval, noEffectiveInterval_);
              DARABONBA_PTR_TO_JSON(SilenceTime, silenceTime_);
              DARABONBA_PTR_TO_JSON(Statistics, statistics_);
              DARABONBA_PTR_TO_JSON(TargetList, targetList_);
              DARABONBA_PTR_TO_JSON(Threshold, threshold_);
              DARABONBA_PTR_TO_JSON(Times, times_);
              DARABONBA_PTR_TO_JSON(Webhook, webhook_);
            };
            friend void from_json(const Darabonba::Json& j, AlertConfigItem& obj) { 
              DARABONBA_PTR_FROM_JSON(ComparisonOperator, comparisonOperator_);
              DARABONBA_PTR_FROM_JSON(EffectiveInterval, effectiveInterval_);
              DARABONBA_PTR_FROM_JSON(EscalationsLevel, escalationsLevel_);
              DARABONBA_PTR_FROM_JSON(NoEffectiveInterval, noEffectiveInterval_);
              DARABONBA_PTR_FROM_JSON(SilenceTime, silenceTime_);
              DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
              DARABONBA_PTR_FROM_JSON(TargetList, targetList_);
              DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
              DARABONBA_PTR_FROM_JSON(Times, times_);
              DARABONBA_PTR_FROM_JSON(Webhook, webhook_);
            };
            AlertConfigItem() = default ;
            AlertConfigItem(const AlertConfigItem &) = default ;
            AlertConfigItem(AlertConfigItem &&) = default ;
            AlertConfigItem(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~AlertConfigItem() = default ;
            AlertConfigItem& operator=(const AlertConfigItem &) = default ;
            AlertConfigItem& operator=(AlertConfigItem &&) = default ;
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
                  DARABONBA_PTR_TO_JSON(JsonParmas, jsonParmas_);
                  DARABONBA_PTR_TO_JSON(Level, level_);
                };
                friend void from_json(const Darabonba::Json& j, Target& obj) { 
                  DARABONBA_PTR_FROM_JSON(Arn, arn_);
                  DARABONBA_PTR_FROM_JSON(Id, id_);
                  DARABONBA_PTR_FROM_JSON(JsonParmas, jsonParmas_);
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
        && this->id_ == nullptr && this->jsonParmas_ == nullptr && this->level_ == nullptr; };
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


                // jsonParmas Field Functions 
                bool hasJsonParmas() const { return this->jsonParmas_ != nullptr;};
                void deleteJsonParmas() { this->jsonParmas_ = nullptr;};
                inline string getJsonParmas() const { DARABONBA_PTR_GET_DEFAULT(jsonParmas_, "") };
                inline Target& setJsonParmas(string jsonParmas) { DARABONBA_PTR_SET_VALUE(jsonParmas_, jsonParmas) };


                // level Field Functions 
                bool hasLevel() const { return this->level_ != nullptr;};
                void deleteLevel() { this->level_ = nullptr;};
                inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
                inline Target& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


              protected:
                // The Alibaba Cloud Resource Name (ARN) of the resource. Format: acs:{Service name abbreviation}:{regionId}:{userId}:/{Resource type}/{Resource name}/message. Example: acs:mns:cn-hangzhou:120886317861\\*\\*\\*\\*:/queues/test123/message. Fields:
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
                shared_ptr<string> jsonParmas_ {};
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

            virtual bool empty() const override { return this->comparisonOperator_ == nullptr
        && this->effectiveInterval_ == nullptr && this->escalationsLevel_ == nullptr && this->noEffectiveInterval_ == nullptr && this->silenceTime_ == nullptr && this->statistics_ == nullptr
        && this->targetList_ == nullptr && this->threshold_ == nullptr && this->times_ == nullptr && this->webhook_ == nullptr; };
            // comparisonOperator Field Functions 
            bool hasComparisonOperator() const { return this->comparisonOperator_ != nullptr;};
            void deleteComparisonOperator() { this->comparisonOperator_ = nullptr;};
            inline string getComparisonOperator() const { DARABONBA_PTR_GET_DEFAULT(comparisonOperator_, "") };
            inline AlertConfigItem& setComparisonOperator(string comparisonOperator) { DARABONBA_PTR_SET_VALUE(comparisonOperator_, comparisonOperator) };


            // effectiveInterval Field Functions 
            bool hasEffectiveInterval() const { return this->effectiveInterval_ != nullptr;};
            void deleteEffectiveInterval() { this->effectiveInterval_ = nullptr;};
            inline string getEffectiveInterval() const { DARABONBA_PTR_GET_DEFAULT(effectiveInterval_, "") };
            inline AlertConfigItem& setEffectiveInterval(string effectiveInterval) { DARABONBA_PTR_SET_VALUE(effectiveInterval_, effectiveInterval) };


            // escalationsLevel Field Functions 
            bool hasEscalationsLevel() const { return this->escalationsLevel_ != nullptr;};
            void deleteEscalationsLevel() { this->escalationsLevel_ = nullptr;};
            inline string getEscalationsLevel() const { DARABONBA_PTR_GET_DEFAULT(escalationsLevel_, "") };
            inline AlertConfigItem& setEscalationsLevel(string escalationsLevel) { DARABONBA_PTR_SET_VALUE(escalationsLevel_, escalationsLevel) };


            // noEffectiveInterval Field Functions 
            bool hasNoEffectiveInterval() const { return this->noEffectiveInterval_ != nullptr;};
            void deleteNoEffectiveInterval() { this->noEffectiveInterval_ = nullptr;};
            inline string getNoEffectiveInterval() const { DARABONBA_PTR_GET_DEFAULT(noEffectiveInterval_, "") };
            inline AlertConfigItem& setNoEffectiveInterval(string noEffectiveInterval) { DARABONBA_PTR_SET_VALUE(noEffectiveInterval_, noEffectiveInterval) };


            // silenceTime Field Functions 
            bool hasSilenceTime() const { return this->silenceTime_ != nullptr;};
            void deleteSilenceTime() { this->silenceTime_ = nullptr;};
            inline string getSilenceTime() const { DARABONBA_PTR_GET_DEFAULT(silenceTime_, "") };
            inline AlertConfigItem& setSilenceTime(string silenceTime) { DARABONBA_PTR_SET_VALUE(silenceTime_, silenceTime) };


            // statistics Field Functions 
            bool hasStatistics() const { return this->statistics_ != nullptr;};
            void deleteStatistics() { this->statistics_ = nullptr;};
            inline string getStatistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
            inline AlertConfigItem& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


            // targetList Field Functions 
            bool hasTargetList() const { return this->targetList_ != nullptr;};
            void deleteTargetList() { this->targetList_ = nullptr;};
            inline const AlertConfigItem::TargetList & getTargetList() const { DARABONBA_PTR_GET_CONST(targetList_, AlertConfigItem::TargetList) };
            inline AlertConfigItem::TargetList getTargetList() { DARABONBA_PTR_GET(targetList_, AlertConfigItem::TargetList) };
            inline AlertConfigItem& setTargetList(const AlertConfigItem::TargetList & targetList) { DARABONBA_PTR_SET_VALUE(targetList_, targetList) };
            inline AlertConfigItem& setTargetList(AlertConfigItem::TargetList && targetList) { DARABONBA_PTR_SET_RVALUE(targetList_, targetList) };


            // threshold Field Functions 
            bool hasThreshold() const { return this->threshold_ != nullptr;};
            void deleteThreshold() { this->threshold_ = nullptr;};
            inline string getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, "") };
            inline AlertConfigItem& setThreshold(string threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


            // times Field Functions 
            bool hasTimes() const { return this->times_ != nullptr;};
            void deleteTimes() { this->times_ = nullptr;};
            inline string getTimes() const { DARABONBA_PTR_GET_DEFAULT(times_, "") };
            inline AlertConfigItem& setTimes(string times) { DARABONBA_PTR_SET_VALUE(times_, times) };


            // webhook Field Functions 
            bool hasWebhook() const { return this->webhook_ != nullptr;};
            void deleteWebhook() { this->webhook_ = nullptr;};
            inline string getWebhook() const { DARABONBA_PTR_GET_DEFAULT(webhook_, "") };
            inline AlertConfigItem& setWebhook(string webhook) { DARABONBA_PTR_SET_VALUE(webhook_, webhook) };


          protected:
            // The comparison operator that is used to compare the metric value with the threshold. Valid values:
            // 
            // *   GreaterThanOrEqualToThreshold: greater than or equal to the threshold
            // *   GreaterThanThreshold: greater than the threshold
            // *   LessThanOrEqualToThreshold: less than or equal to the threshold
            // *   LessThanThreshold: less than the threshold
            // *   NotEqualToThreshold: not equal to the threshold
            // *   GreaterThanYesterday: greater than the metric value at the same time yesterday.
            // *   LessThanYesterday: less than the metric value at the same time yesterday
            // *   GreaterThanLastWeek: greater than the metric value at the same time last week
            // *   LessThanLastWeek: less than the metric value at the same time last week
            // *   GreaterThanLastPeriod: greater than the metric value in the last monitoring cycle
            // *   LessThanLastPeriod: less than the metric value in the last monitoring cycle
            shared_ptr<string> comparisonOperator_ {};
            // The time period during which the alert rule is effective.
            shared_ptr<string> effectiveInterval_ {};
            // The level of the alert. Valid values:
            // 
            // *   critical
            // *   warn
            // *   Info
            shared_ptr<string> escalationsLevel_ {};
            // The time period during which the alert rule is ineffective.
            shared_ptr<string> noEffectiveInterval_ {};
            // The mute period during which new alert notifications are not sent even if the trigger conditions are met. Unit: seconds. Minimum value: 3600, which is equivalent to one hour. Default value: 86400, which is equivalent to one day.
            // 
            // >  Only one alert notification is sent during each mute period even if the metric value exceeds the alert threshold several times.
            shared_ptr<string> silenceTime_ {};
            // The method used to calculate metric values that trigger alerts.
            shared_ptr<string> statistics_ {};
            // The resources for which alerts are triggered.
            shared_ptr<AlertConfigItem::TargetList> targetList_ {};
            // The alert threshold.
            shared_ptr<string> threshold_ {};
            // The number of times for which the threshold can be consecutively exceeded.
            // 
            // >  A metric triggers an alert only after the metric value reaches the threshold consecutively for the specified times.
            shared_ptr<string> times_ {};
            // The callback URL to which a POST request is sent when an alert is triggered based on the alert rule.
            shared_ptr<string> webhook_ {};
          };

          virtual bool empty() const override { return this->alertConfig_ == nullptr; };
          // alertConfig Field Functions 
          bool hasAlertConfig() const { return this->alertConfig_ != nullptr;};
          void deleteAlertConfig() { this->alertConfig_ = nullptr;};
          inline const vector<AlertConfig::AlertConfigItem> & getAlertConfig() const { DARABONBA_PTR_GET_CONST(alertConfig_, vector<AlertConfig::AlertConfigItem>) };
          inline vector<AlertConfig::AlertConfigItem> getAlertConfig() { DARABONBA_PTR_GET(alertConfig_, vector<AlertConfig::AlertConfigItem>) };
          inline AlertConfig& setAlertConfig(const vector<AlertConfig::AlertConfigItem> & alertConfig) { DARABONBA_PTR_SET_VALUE(alertConfig_, alertConfig) };
          inline AlertConfig& setAlertConfig(vector<AlertConfig::AlertConfigItem> && alertConfig) { DARABONBA_PTR_SET_RVALUE(alertConfig_, alertConfig) };


        protected:
          shared_ptr<vector<AlertConfig::AlertConfigItem>> alertConfig_ {};
        };

        virtual bool empty() const override { return this->alertConfig_ == nullptr
        && this->groupId_ == nullptr && this->id_ == nullptr && this->matchExpress_ == nullptr && this->matchExpressFilterRelation_ == nullptr && this->processName_ == nullptr; };
        // alertConfig Field Functions 
        bool hasAlertConfig() const { return this->alertConfig_ != nullptr;};
        void deleteAlertConfig() { this->alertConfig_ = nullptr;};
        inline const Process::AlertConfig & getAlertConfig() const { DARABONBA_PTR_GET_CONST(alertConfig_, Process::AlertConfig) };
        inline Process::AlertConfig getAlertConfig() { DARABONBA_PTR_GET(alertConfig_, Process::AlertConfig) };
        inline Process& setAlertConfig(const Process::AlertConfig & alertConfig) { DARABONBA_PTR_SET_VALUE(alertConfig_, alertConfig) };
        inline Process& setAlertConfig(Process::AlertConfig && alertConfig) { DARABONBA_PTR_SET_RVALUE(alertConfig_, alertConfig) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline Process& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Process& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // matchExpress Field Functions 
        bool hasMatchExpress() const { return this->matchExpress_ != nullptr;};
        void deleteMatchExpress() { this->matchExpress_ = nullptr;};
        inline const Process::MatchExpress & getMatchExpress() const { DARABONBA_PTR_GET_CONST(matchExpress_, Process::MatchExpress) };
        inline Process::MatchExpress getMatchExpress() { DARABONBA_PTR_GET(matchExpress_, Process::MatchExpress) };
        inline Process& setMatchExpress(const Process::MatchExpress & matchExpress) { DARABONBA_PTR_SET_VALUE(matchExpress_, matchExpress) };
        inline Process& setMatchExpress(Process::MatchExpress && matchExpress) { DARABONBA_PTR_SET_RVALUE(matchExpress_, matchExpress) };


        // matchExpressFilterRelation Field Functions 
        bool hasMatchExpressFilterRelation() const { return this->matchExpressFilterRelation_ != nullptr;};
        void deleteMatchExpressFilterRelation() { this->matchExpressFilterRelation_ = nullptr;};
        inline string getMatchExpressFilterRelation() const { DARABONBA_PTR_GET_DEFAULT(matchExpressFilterRelation_, "") };
        inline Process& setMatchExpressFilterRelation(string matchExpressFilterRelation) { DARABONBA_PTR_SET_VALUE(matchExpressFilterRelation_, matchExpressFilterRelation) };


        // processName Field Functions 
        bool hasProcessName() const { return this->processName_ != nullptr;};
        void deleteProcessName() { this->processName_ = nullptr;};
        inline string getProcessName() const { DARABONBA_PTR_GET_DEFAULT(processName_, "") };
        inline Process& setProcessName(string processName) { DARABONBA_PTR_SET_VALUE(processName_, processName) };


      protected:
        // The alert rule configurations.
        shared_ptr<Process::AlertConfig> alertConfig_ {};
        // The ID of the application group.
        shared_ptr<string> groupId_ {};
        // The ID of the process monitoring task.
        shared_ptr<string> id_ {};
        // The matching conditions.
        // 
        // >  Only the instances that meet the conditional expressions are monitored by the process monitoring task.
        shared_ptr<Process::MatchExpress> matchExpress_ {};
        // The logical operator used between conditional expressions that are used to match instances. Valid values:
        // 
        // *   all
        // *   and
        // *   or
        shared_ptr<string> matchExpressFilterRelation_ {};
        // The process name.
        shared_ptr<string> processName_ {};
      };

      virtual bool empty() const override { return this->process_ == nullptr; };
      // process Field Functions 
      bool hasProcess() const { return this->process_ != nullptr;};
      void deleteProcess() { this->process_ = nullptr;};
      inline const vector<Processes::Process> & getProcess() const { DARABONBA_PTR_GET_CONST(process_, vector<Processes::Process>) };
      inline vector<Processes::Process> getProcess() { DARABONBA_PTR_GET(process_, vector<Processes::Process>) };
      inline Processes& setProcess(const vector<Processes::Process> & process) { DARABONBA_PTR_SET_VALUE(process_, process) };
      inline Processes& setProcess(vector<Processes::Process> && process) { DARABONBA_PTR_SET_RVALUE(process_, process) };


    protected:
      shared_ptr<vector<Processes::Process>> process_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->processes_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeGroupMonitoringAgentProcessResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeGroupMonitoringAgentProcessResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeGroupMonitoringAgentProcessResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeGroupMonitoringAgentProcessResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // processes Field Functions 
    bool hasProcesses() const { return this->processes_ != nullptr;};
    void deleteProcesses() { this->processes_ = nullptr;};
    inline const DescribeGroupMonitoringAgentProcessResponseBody::Processes & getProcesses() const { DARABONBA_PTR_GET_CONST(processes_, DescribeGroupMonitoringAgentProcessResponseBody::Processes) };
    inline DescribeGroupMonitoringAgentProcessResponseBody::Processes getProcesses() { DARABONBA_PTR_GET(processes_, DescribeGroupMonitoringAgentProcessResponseBody::Processes) };
    inline DescribeGroupMonitoringAgentProcessResponseBody& setProcesses(const DescribeGroupMonitoringAgentProcessResponseBody::Processes & processes) { DARABONBA_PTR_SET_VALUE(processes_, processes) };
    inline DescribeGroupMonitoringAgentProcessResponseBody& setProcesses(DescribeGroupMonitoringAgentProcessResponseBody::Processes && processes) { DARABONBA_PTR_SET_RVALUE(processes_, processes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGroupMonitoringAgentProcessResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeGroupMonitoringAgentProcessResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline string getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, "") };
    inline DescribeGroupMonitoringAgentProcessResponseBody& setTotal(string total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The HTTP status codes.
    // 
    // >  The status code 200 indicates that the request was successful.
    shared_ptr<string> code_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The page number. Default value: 1
    shared_ptr<string> pageNumber_ {};
    // The number of entries per page. Default value: 10.
    shared_ptr<string> pageSize_ {};
    // The process monitoring tasks.
    shared_ptr<DescribeGroupMonitoringAgentProcessResponseBody::Processes> processes_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values: Valid values: true and false.
    shared_ptr<bool> success_ {};
    // The total number of returned entries.
    shared_ptr<string> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
